#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n=0,m=0;
    while(n<10 || m<10){
        cout << "Vvedite razmer matrici bolshe 10x10\n";
        cin >> n >> m;
    }
    char arr[n][m][2];
    
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if((i+j)%2==0){
                arr[i][j][0] = '0';
                arr[i][j][1] = '0';
            }
            else{
                arr[i][j][0] = '1';
                arr[i][j][1] = '1';
            }
        }
    }
    
    
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j][0] << arr[i][j][1] << " ";
        }
        cout << endl;
    }
}
