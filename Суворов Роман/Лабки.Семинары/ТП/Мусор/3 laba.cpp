#include <iostream>

using namespace std;
int main(){
    const int m = 6;
    int M[m*m][3];
    float A[m][m];

    for(int i=0; i < m; i++)
        for(int j=0; j < m; j++)
            A[i][j] = rand()%100-5;
    cout << "Ishodniy: \n";
    for(int i=0; i < m; i++){
        for(int j=0; j < m; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
    for(int i=0; i < m; i++)
        for(int j=0; j < m; j++){
            M[i*m+j][0] = A[i][j];
            M[i*m+j][1] = i;
            M[i*m+j][2] = j;
        }

    for (int i = 0; i < m*m - 1; i++)
    {
        for (int j = (m*m - 1); j > i; j--)
        {
            if (M[j - 1][0] < M[j][0])
            {
                int temp0 = M[j - 1][0];
                M[j - 1][0] = M[j][0];
                M[j][0] = temp0;
                int temp1 = M[j - 1][1];
                M[j - 1][1] = M[j][1];
                M[j][1] = temp1;
                int temp2 = M[j - 1][2];
                M[j - 1][2] = M[j][2];
                M[j][2] = temp2;
            }
        }
    }

    for(int i=m-1; i >= 0; i--){
        int temp = A[i][i];
        A[i][i] = M[i][0];
        A[M[i][1]][M[i][2]] = temp;
    }

    cout << "Izmenenniy: \n";
    for(int i=0; i < m; i++){
        for(int j=0; j < m; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
}