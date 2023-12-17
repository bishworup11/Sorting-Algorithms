#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int hi)
{
    int pivot;
    int p=low;
    pivot=arr[hi];
    for(int i=low;i<hi;i++)
    {
        if(arr[i]<=pivot)
        {

            swap(arr[i],arr[p]);
            p++;
        }


    }
    swap(arr[p],arr[hi]);
    return p;

}

void QuickSort(int arr[],int low ,int hi )
{
    int pi;

    if(low<hi)
    {

        pi=partition(arr,low,hi);
       // cout<<pi<<" ";
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,hi);

    }


}

void display(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;

    printf("input the array length\n");

    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {

        cin>>ar[i];
    }
     QuickSort(ar,0,n-1);

    display(ar,n);


}


