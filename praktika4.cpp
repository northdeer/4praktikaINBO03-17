#include <iostream>

using namespace std;
void createmass(int *firstEl,int secEl)
{
	firstEl = new int[secEl];
}
void sorting (int *array)
{
    int el;
    for (int i = 0; i <= 12;i++)
    {
        if ((array[i] % 2 != 0) && (array[i + 1] % 2 == 0))
        {
            el = array[i];
            array[i] = array[i + 1];
            array[i + 1] = el;    
        }
    }
}


int main()
{
int size;
int *arr;

createmass(arr,12);
for (int i=0;i<12;i++)
{
	cout << "Set " << i+1 << " element: " << endl;
	cin >> arr[i];
}
sorting (arr);
for (int i=0;i<12;i++)
{    
	cout << "a["<< i << "]=" << " " << arr[i]  << endl;
}	
	delete [] arr;

return 0;
}	
