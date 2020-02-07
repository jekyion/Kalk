#include "header.h"


void menu(){

        int k;
        double a = 0;
        double b = 0;
        char buff[8];
        char buff2[256];
        char buff3[256];
        printf("Wybierz operacje 1-mnozenie 2-dzielenie 3-dodawanie 4-odejmowanie 5-potegowanie 6-mnozenie macierzy \n");
        fgets(buff, 8, stdin);
        clear(buff);
        k = atoi(buff);

    if (k < 6&&k>0) {
            printf("Podaj a i b: ");
            fgets (buff2, 256, stdin);
            clear(buff2);
            fgets (buff3, 256, stdin);
            clear(buff3);
            a= atof(buff2);
            b= atof(buff3);
        }



        switch (k) {
            case 3:
                do(a, b);
                menu();
                break;

            case 4:
                od(a, b);
                menu();
                break;

            case 1:
                mn(a, b);
                menu();
                break;

            case 2:
                dziel(a, b);
                menu();
                break;

            case 5:
                printf("%.2lf \n", pot(a, b));
                menu();
                break;

            case 6:
                mnozenie_mac();
                menu();
                break;

            default:
                printf("blad\n");
                menu();
        }
    }




int ** dyntab(int n )
{
    int **tab2D;
    tab2D = malloc(n*sizeof(int*));
    if(tab2D==NULL)return NULL;
    for(int i=0;i<n; i++){
        tab2D[i]=malloc(n*sizeof(int*));
    }

    return tab2D;
}

void wypelnij(int ** tab, int n ){

    printf("Podaj wartosci:\n");
    int i;
    int w;
    for(i=0,w=1; i<n; i++,w++){
        printf("%d wiersz: ", w);
        char buffer[256];
        for(int j=0; j<n; j++) {
            fgets (buffer, 256, stdin);
            clear(buffer);
            tab[i][j]=atoi(buffer);
            //scanf("%d", &tab[i][j]);
        }
    }

}

void rozm(int *r){
    char rbuff[256];
    printf("Podaj rozmiar macierzy: ");
    fgets (rbuff, 256, stdin);
    clear(rbuff);
    *r = atoi(rbuff);
    //scanf("%d",&(*r));
}

void mmac(int **mac1, int **mac2, int **wynik, int n){
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            for (int m = 0; m < n ; m++) {
                wynik[r][c]+= mac1[r][m] * mac2[m][c];
            }
        }
    }
}

void usuntab(int *** atab, int n ){
    for(int i; i<n; i++){
        free((*atab)[i]);
    }
    free(*atab);
    *atab=NULL;
}
double pot(double x,int n){

    if (n==0)return 1;
    else return x * pot(x,--n);
}

void mnozenie_mac(){
    int **mac1;
    int **mac2;
    int **wynik;
    int r;
    rozm(&r);
    mac1= dyntab(r);
    mac2= dyntab(r);
    wynik= dyntab(r);
    if(mac1 != NULL && mac2 != NULL && wynik != NULL){

        wypelnij(mac1, r);
        wypelnij(mac2, r);
        mmac(mac1,mac2,wynik,r);

        for(int i=0;i<r; i++){
            for(int j=0; j<r;j++){
                printf("%d\t", wynik[i][j]);
            }
            printf("\n");
        }
        usuntab(&mac1, r);
        usuntab(&mac2, r);
        usuntab(&wynik, r);
    }

}

void clear(char tab[]){
    if (strchr(tab, '\n') == NULL) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            continue;
        }
    }
}

