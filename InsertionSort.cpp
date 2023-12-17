#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n )
{
    int i , j, min;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        int temp = arr[i];
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

main()
{
    int n;

    printf("input the array length\n");

    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }

    InsertionSort(ar, n);

    display(ar, n);


}


