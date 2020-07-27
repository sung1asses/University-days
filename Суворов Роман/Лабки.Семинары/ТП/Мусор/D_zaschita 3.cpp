#include <iostream>
using namespace std;
int main(){

int *arr;

int size;

cout << "Number of elements: ";

cin >> size;

if (size <= 0) {

cerr << "Invalid size" << endl;

return 1;

}

arr = new int[size];

for (int i = 0; i < size; i++) {

cout << "arr[" << i << "] = ";

cin >> arr[i];

}

int negative;

int pos;

int max = arr[0];

for (int i = 1; i < size; i++) {

if (arr[i] > max) {

max = arr[i];

pos = i;

}

}

cout << "Max number: " << max << endl;
bool flag = false;
for (int i = 0; i < size; i++){
if(flag) arr[i] = -arr[i];
if(arr[i]==max)flag=true;
cout << arr[i] << ", ";

}

return 0;
}

