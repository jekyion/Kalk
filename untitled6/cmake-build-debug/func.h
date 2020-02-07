//
// Created by kokso on 28.01.2020.
//

#ifndef UNTITLED6_FUNC_H
#define UNTITLED6_FUNC_H
int ** dyntab(int n )
{
    int **tab2D;
    tab2D = malloc(n*sizeof(int*));
    if(tab2D==NULL)return NULL;
    for(int i=0;i<n; i++){
        tab2D[i]=(int *)malloc(n*sizeof(int));
    }

    return tab2D;
}

void wypelnij(int ** tab, int n ){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            tab[i][j]=((i+1)*(j+1));
    }

}
char pod(int n){
    for(int i=0; i<n;i++){
        putchar('_');
    }
}

void usuntab(int *** atab, int n ){
    for(int i; i<n; i++){
        free((*atab)[i]);

    }
    free(*atab);
    *atab=NULL;
}
#endif //UNTITLED6_FUNC_H
