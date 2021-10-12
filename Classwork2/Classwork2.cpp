// Classwork2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
   
    cout << "Vvedit kilkist elementiv: ";
    cin >> n;
   

    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "vedit " << i+1 << " element: ";
        cin >> A[i];
    }
    
    int max = A[0];
    for (int i = 0; i < n; i++) {
        if (max < A[i]) max = A[i];
        
    }
    cout << "max element: " << max << endl;
    
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) break;
        s = s + A[i];
       
    }
    cout << "your sum: " << s<<endl;
    int a,b;
    cout << "lim A: ";
    cin >> a;
    cout << "lim B: ";
    cin >> b;
    for (int i = 0, j; i < n; i++)
    {
        if (a <= abs(A[i]) && abs(A[i]) <= b)
        {
            for (j = i; j < n ; j++)
                A[j] = A[j + 1];
            A[n-1] = 0;
            i = i - 1;
        }
       
    }
    for (int i = 0; i < n; i++) {
        cout << A[i]<<endl;
    }
}

