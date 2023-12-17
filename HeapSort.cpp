#include<bits/stdc++.h>
using namespace std;

void Heapify(int ar[], int n, int i)
{
    int largeI = i;
    int leftChild = (i * 2) + 1;
    int rightChild = (i * 2) + 2;

    if (leftChild <= n && ar[leftChild] > ar[largeI])
    {
        largeI = leftChild;
    }

    if (rightChild <= n && ar[rightChild] > ar[largeI])
    {
        largeI = rightChild;
    }


    if (i != largeI)
    {
        swap(ar[largeI], ar[i]);
        Heapify(ar, n, largeI);
    }


}

void HeapSort(int ar[], int n)
{
    for (int i = (n - 1) / 2; i >= 0; i--)
    {
        Heapify(ar, n, i);
    }
    for (int i = n; i >= 0; i--)
    {

        swap(ar[i], ar[0]);
        Heapify(ar, i - 1, 0);
    }


}



void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    printf("input the array length\n");

    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    HeapSort(ar, n - 1);

    display(ar, n);


}


