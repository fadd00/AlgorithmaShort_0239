#include<iostream>

using namespace std;

int arr[20];
int n;
int i;

void LinearShort(){
    char ch;
    int ctr;
    int item;

do
{
    cout << "\nEnter the element you want to search: "; // step 1
    cin >> item;

    ctr = 0;
    i = 0; //step 2
} while (i < n);// step 3
{
    ctr++;
    if (arr[i] == item)
    {
        cout << "\n " << item << "found at position " << (i+1) < endl; // step 6
        break;
    }
    i++;//step 4
}
}


int main()
{
    return 0;
}