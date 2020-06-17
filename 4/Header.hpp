#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Matrix
{

public:
    double **Tab;
    int M;
    int N;

    Matrix(){}

    ~Matrix();


    Matrix(int m, int n);

    Matrix(double **PodTab, int m, int n);

    Matrix( double **Kopia );


    void Wypisz();

    void Losowa(int m, int n);

    void Kol();

    void Row();

    void ChangeMatrix(int m, int n);

    Matrix& operator= (Matrix& b);

    Matrix& operator+ (double b);

    Matrix& operator+= (double b);

    Matrix& operator- (double b);

    Matrix& operator-= (double b);

    Matrix& operator- (const Matrix& b );

    Matrix& operator+ (const Matrix& b );

    Matrix& operator-= (const Matrix& b );

    Matrix& operator+= (const Matrix& b );

    Matrix& operator* (double b);

    Matrix& operator* (Matrix& b);

    bool operator== (const Matrix & b) const;

    bool operator!= (const Matrix & b) const;

    void operator>> (const Matrix & b);

    double& operator[](int);

    double& operator()(int);

    void operator() (const Matrix & b);

};

