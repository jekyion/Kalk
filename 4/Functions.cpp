void Matrix::Kol()
{
    cout << N << endl;
}

void Matrix::Row()
{
    cout << M << endl;
}


Matrix::~Matrix()
{
    delete [] Tab;
}

Matrix::Matrix(int m, int n)
{
    delete [] this->Tab;
    this->Tab = new double *[n];
    int i, j;
    for( i = 0; i < n; i++ )
    {
        Tab[i] = new double [m];
        for( j = 0; j < m; j++)
            this->Tab[i][j] =((rand()%200)-100);
    }
    this->M = m;
    this->N = n;
}

Matrix::Matrix(double **PodTab, int m, int n)
{
    delete [] this->Tab;
    this->Tab = new double *[n];
    int i, j;
    for( i = 0; i < n; i++ )
    {
        Tab[i] = new double [m];
        for( j = 0; j < m; j++)
            this->Tab[i][j] = PodTab[i][j];
    }
    this->M = m;
    this->N = n;
}

Matrix::Matrix( double **Kopia )
{
    int i, j;
    *Kopia = new double [N];
    for( i = 0; i < N; i++ )
    {
        Kopia[i] = new double [M];
        for( j = 0; j < M; j++ )
           this->Tab[i][j] = Kopia[i][j];
    }
}

void Matrix::Wypisz()
{
    int i, j;
    for( i = 0; i < this->N; i++ ){
        for( j = 0; j < this->M ; j++){
            cout << this->Tab[i][j] << " ";
        }
    cout << endl;
    }
}

void Matrix::Losowa(int m, int n)
{
    delete [] this->Tab;
    this->Tab = new double *[n];
    int i, j;
    for( i = 0; i < n; i++ )
        Tab[i] = new double [m];
    this->M = m;
    this->N = n;

    for( i = 0; i < this->N; i++ ){
        for( j = 0; j < this->M ; j++){
            double Liczba = ((rand()%11));
            Liczba = Liczba * (0.1);
            this->Tab[i][j] = Liczba;
        }
    }
}

void Matrix::ChangeMatrix(int m, int n)
{
    int i, j;
    double **PH = new double *[N];
    for( i = 0; i < N; i++ )
    {
        PH[i] = new double [M];
        for( j = 0; j < M; j++ )
           PH[i][j] = this->Tab[i][j];
    }

    delete [] this->Tab;
    this->Tab = new double *[n];
    for( i = 0; i < n; i++ )
    {

        this->Tab[i] = new double [m];
        for( j = 0; j < m; j++){
            if( (i > N-1) || (j > M-1) ){
                this->Tab[i][j] = ((rand()%200)-100);
            } else {
                this->Tab[i][j] = PH[i][j];
            }
        }
    }
    this->M = m;
    this->N = n;
}


bool Matrix::operator== (const Matrix & b) const
{
    int i, j;
    for(i = 0 ; i < N ; i++)
    {
        for(j = 0; j < M ; j++)
        {
            if( !(Tab[i][j] == b.Tab[i][j]) ){ return false; }
        }
    }
    return true;
}

bool Matrix::operator!= (const Matrix & b) const
{
    int i, j;
    for(i = 0 ; i < N ; i++)
    {
        for(j = 0; j < M ; j++)
        {
            if( !(Tab[i][j] == b.Tab[i][j]) ){ return true; }
        }
    }
    return false;
}

void Matrix::operator>> (const Matrix & b)
{
    M = b.M;
    N = b.N;
    delete [] Tab;
    Tab = new double *[N];
    int i, j;
    for( i = 0; i < N; i++ )
    {
        Tab[i] = new double [M];
        for( j = 0; j < M; j++)
            Tab[i][j] = b.Tab[i][j];
    }
}

std::ostream & operator<< (std::ostream & out, const Matrix & c) {
   int i, j;
    for( i = 0; i < c.N; i++ ){
        for( j = 0; j < c.M ; j++){
            out << c.Tab[i][j] << " ";
        }
    out << endl;
    }
   return out;
}

double& Matrix::operator[](int a)
{
    int m, n;
    n = a / N;
    m = a % N;
    return Tab[n][m];
}

double& Matrix::operator()(int a)
{
    int m, n;
    n = a / N;
    m = a % N;
    return Tab[n][m];
}

Matrix& Matrix::operator= (Matrix& b)
{
    N = b.N;
    M = b.M;
    int i, j;
    for(i = 0; i < b.N ; i++ )
    {
        for(j = 0; j < b.M ; j++ )
        {
            Tab[i][j] = b.Tab[i][j];
        }
    }
    return *this;
}

Matrix& Matrix::operator+ (double b)
{
    int i, j;
    for(i = 0; i < N ; i++ )
    {
        for(j = 0; j < M ; j++ )
        {
            Tab[i][j] = Tab[i][j] + b;
        }
    }
    return *this;
}

Matrix& Matrix::operator+= (double b)
{
    int i, j;
    for(i = 0; i < N ; i++ )
    {
        for(j = 0; j < M ; j++ )
        {
            Tab[i][j] = Tab[i][j] + b;
        }
    }
    return *this;
}

Matrix& Matrix::operator- (double b)
{
    int i, j;
    for(i = 0; i < N ; i++ )
    {
        for(j = 0; j < M ; j++ )
        {
            Tab[i][j] = Tab[i][j] - b;
        }
    }
    return *this;
}

Matrix& Matrix::operator-= (double b)
{
    int i, j;
    for(i = 0; i < N ; i++ )
    {
        for(j = 0; j < M ; j++ )
        {
            Tab[i][j] = Tab[i][j] - b;
        }
    }
    return *this;
}

Matrix& Matrix::operator- (const Matrix& b )
{
    int i, j;
    if( (N == b.N) && (M == b.M) )
    {
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < M ; j++ )
            {
                Tab[i][j] -= b.Tab[i][j];
            }
        }
        return *this;
    }
    cout << "odejmowanie macierzy" << endl;
    return *this;
}

Matrix& Matrix::operator+ (const Matrix& b )
{
    int i, j;
    if( (N == b.N) && (M == b.M) )
    {
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < M ; j++ )
            {
                Tab[i][j] += b.Tab[i][j];
            }
        }
        return *this;
    }
    cout << "Dodawanie macieerzy" << endl;
    return *this;
}

Matrix& Matrix::operator-= (const Matrix& b )
{
    int i, j;
    if( (N == b.N) && (M == b.M) )
    {
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < M ; j++ )
            {
                Tab[i][j] -= b.Tab[i][j];
            }
        }
        return *this;
    }
    cout << "Odejmowanie macierzy" << endl;
    return *this;
}

Matrix& Matrix::operator+= (const Matrix& b )
{
    int i, j;
    if( (N == b.N) && (M == b.M) )
    {
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < M ; j++ )
            {
                Tab[i][j] += b.Tab[i][j];
            }
        }
        return *this;
    }
    cout << "Dodawaniee macierzy" << endl;
    return *this;
}

Matrix& Matrix::operator* (double b)
{
    int i, j;
    for(i = 0; i < N ; i++ )
    {
        for(j = 0; j < M ; j++ )
        {
            Tab[i][j] = Tab[i][j] * b;
        }
    }
    return *this;
}

Matrix& Matrix::operator* (Matrix& b)
{
    int i, j, k;
    double sum;
    Matrix PH(N, b.M);
    if( N == b.M )
    {
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < b.M ; j++ )
            {
                sum = 0;
                for(k = 0; k < M ; k++ )
                {
                    sum += (Tab[i][k] * b.Tab[k][j]);
                }
                PH.Tab[i][j] = sum;
            }
        }
        for(i = 0; i < N ; i++ )
        {
            for(j = 0; j < b.M ; j++ )
            {
                Tab[i][j] = PH.Tab[i][j];
            }
        }
        M = b.M;
        return *this;
    }
    cout << "Mnozenie macieerzy" << endl;
    return *this;
}


