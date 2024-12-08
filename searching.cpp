#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size ,int target, bool findfirst){
    int kiri = 0;
    int kanan = size-1;
    int result = -1;

    while (kiri<=kanan)
    {
        int tengah = kiri+(kanan-kiri)/2;

        if (arr[tengah] == target)
        {
            result = tengah;
            if (findfirst)
            {
                kanan = tengah -1;
            } else
            {
                kiri = tengah +1;
            }
        }else if (arr[tengah] < target)
        {
            kiri = tengah + 1;
        }else
        {
            kanan = tengah-1;
        }
    }
    return result;
    
}

int main(){

    int size;
    cout << "Size : ";
    cin >> size;

    int *myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i+1 << "] : ";
        cin >> myArray[i];
    }

    sort(myArray,myArray+size);
    cout << "Sorted array : ";

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i]<< " ";
    }
    
    cout<<endl;
    
    int target;
    cout<< "Please enter the element to Search : ";
    cin >> target;

    int firstIndex = binarySearch(myArray,size,target,true);
    int lastIndex = binarySearch(myArray,size,target,false);

    if (firstIndex != -1)
    {
        cout << "Element found at index " << firstIndex << " and at index " << lastIndex <<endl;
        cout <<endl;
    } else
    {
        cout << "Element not found, please try again later"<<endl;
    }
    
    

    return 0;
}