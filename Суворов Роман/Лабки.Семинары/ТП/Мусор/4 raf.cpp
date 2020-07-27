#include <iostream>

using namespace std;
int main(){
    const int m = 3, n = 5;
    float A[m][n];

    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            A[i][j] = rand()%10;

    cout << "Ishodniy massiv: \n";

    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    for(int k=0; k < n; k++){

        int min, temp;
        for (int i = 0; i < m - 1; i++) 
        {
            min = i;
            for (int j = i + 1; j < m; j++)
            {
              if (A[j][k] < A[min][k])
                min = j;
            }
            temp = A[i][k];
            A[i][k] = A[min][k];
            A[min][k] = temp;
        }
    }

    cout << "\nSortyrovanniy massiv: \n";

    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
}
