#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n )
{
    int i , j, min;

    for (i = 0; i <= n - 1; i++)
    {
        min = i;

        for (j = i; j <=n - 1; j++)
        {

            if (arr[min] > arr[j])
            {
                min = j;


            }
        }

        int temp;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    selectionSort(ar, n);

    display(ar, n);


}

