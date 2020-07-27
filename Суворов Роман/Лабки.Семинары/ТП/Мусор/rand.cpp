#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int i,max=-100;
int a[10] {};
srand(time(NULL));
for ( i = 0; i < 10; i++)
{
a[i] = rand() %10;
}
cout  << "Массив: ";
for ( i = 0; i < 10; i++)
{
cout << a[i] <<  " ";
}
for (int i = 0; i < 10; i++)
{
if (a[i] > max)
{
max = a[i];
}
}for (i=0;i<10;i++)
{
if(a[i]!=max)a[i]=0;
}
cout << endl << "Максимальный элемент массива:" << max;
cout << endl << "Массив после обработки: ";
for (i=0; i<10; i++)
cout << a[i] << " ";
cout << endl;
return 0;
}
