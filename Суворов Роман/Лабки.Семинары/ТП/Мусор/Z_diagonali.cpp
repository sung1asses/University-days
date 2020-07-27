#include <iostream>
#include <iomanip>
using namespace std;
int
main ()
{
  srand (time (0));
  int n;
  cout << "n=";
  cin >> n;
  int arr[n][n];

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      arr[i][j] = rand()%9-1;
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }



  for(int i=0; i<n; i++){
    bool flag = true;
    for(int j=0; j<n; j++){
      if(arr[i][j]<0)flag=false;
    }
    if(flag){
      int prod = 1;
      for(int j=0; j<n; j++){
        prod *= arr[i][j];
      }
      cout << "Proizvedenie " << i+1 << " stroki: " << prod << endl;
    }
    else 
      cout << i+1 << " stroka soderjit otricatel'niy element!" << endl;
  }

  int sum_arr[n+n-1];

  for(int i=0; i<n+n-1; i++){
    sum_arr[i] = 0;
  }

  for(int i=0; i<n; i++){
    for(int j=n-1; j>=0; j--){
      sum_arr[i+n-1-j]+=arr[i][j];
    }
    cout << endl;
  }

  cout << "Summi elementow diagonaley: "<< endl;
  for(int i=0; i<n+n-1; i++){
    cout << sum_arr[i] << " ";
  }

  int max = sum_arr[0];
  for(int i=0; i<n+n-1; i++){
    if(i==n && sum_arr[i]>max) max = sum_arr[i];
  }

  cout << "\n\nmaximum: " << max;

  return 0;
}
