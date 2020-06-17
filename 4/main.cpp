
#include "Header.hpp"
#include "Functions.cpp"




int main()
{
    double **Tab = new double *[2];
    Tab[0] = new double [2];
    Tab[1] = new double [2];
    Tab[0][0] = 10, Tab[1][0] = 10, Tab[0][1] = 10, Tab[1][1] = 10;
    Matrix A1(Tab,2,2);
    Matrix A2(2,2);
    A1.Wypisz();
    cout << "A1 - 1" <<endl<< endl;
    A1 -= 5;
    A1.Wypisz();
    cout << "A1 - 2" << endl<< endl;
    A2.Wypisz();
    cout << "A2 - 1" << endl<< endl;
    A2 = A2 + A1 + 5;
    A2.Wypisz();
    cout << "A2 - 2" << endl<< endl;
    A2 = A1 * 5;
    A2.Wypisz();
    cout << "A2 - 3" << endl<< endl;
    A2 * A1;
    A2.Wypisz();
    cout << "A2 - 4" << endl<< endl;
    bool x = A1 == A2;
    cout << x << "- Porownanie ==" << endl<< endl;
    x = A1 != A2;
    cout << x << "- Porownanie !=" << endl<< endl;
    A1.Wypisz();
    cout << "A1" << endl<< endl;
    A2 >> A1;
    cout << "A2 >> A1" << endl<< endl;
    A2.Wypisz();
    cout << "A2" << endl<< endl;
    A2 >> A2;
    cout << "A2" << endl<< endl;
    cout << A1[2] << " i " << A1(2)  << endl;
    cout << "[] i ()" << endl<< endl;


}
