// dvumernie massivi2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

    srand(time(NULL));
    int  n;
    bool sim;

    cin >> n;
    


    int a[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 1 + rand() % 9;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n";

    sim = true;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (a[i][j] != a[j][i]) 
                sim = false;
        }
    }
    
    if (sim) cout << "YES";
    else cout << "NO";
   // в основном будет NO, т.к. числа рандомные, должно оооочень повезти, чтобы было YES.

}


