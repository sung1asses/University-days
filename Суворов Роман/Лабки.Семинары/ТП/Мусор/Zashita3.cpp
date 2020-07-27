#include <iostream>

using namespace std;
int main(){
    const int m = 5, n = 6;
    int M[n];
    float A[n][m];

    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            A[i][j] = rand()%10-5;

    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    cout << "M:\n";
    for (int i = 0; i < n; i++)
    {
        int pos = 0;
        for (int j = 0; j < m; j++)
           if (A[j][i]>0)
              pos++;
        M[i] = pos;
        cout << M[i] << "\t";
    }
}
