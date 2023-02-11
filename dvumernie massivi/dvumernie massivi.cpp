// dvumernie massivi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int  n, m, p, q,b;

    cin >> n;
    cin >> m;


    int a[100][100];

    for (int k = 0; k < n; k++)
    {
        for (int v = 0; v < m; v++)
        {
            a[k][v] = 1 + rand() % 9;
            cout << a[k][v] << " ";
        }
        cout << endl;
    }

    cout << "\n";

    cin >> p;
    cin >> q;

    

    for (int i = 0; i < n; i++) {
        b = a[i][p];
        a[i][p] = a[i][q];
        a[i][q] = b;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;


}