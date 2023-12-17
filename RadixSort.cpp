#include<bits/stdc++.h>
using namespace std;

void CountingSort(int arr[],int n,int pos )
{
    int i ,j,k=9;
    int count[10],b[n];


    for(i=0;i<=k;i++)
    {
        count[i]=0;
    }



    for(i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;

    }

    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    for(i=n-1;i>=0;i--)
    {
             b[--count[(arr[i]/pos)%10]]=arr[i];

    }

    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
    }




}

void RadixSort(int arr[],int n,int max)
{
    for (int pos = 1; 0 <(max/pos); pos=pos*10)
    {
       
        CountingSort(arr,n,pos);
    }
}

void display(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
}

main()
{
    int n,max=0;

    printf("input the array length\n");

    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {

        cin>>ar[i];
        if(max<ar[i])
        {
            max=ar[i];
        }

    }

   RadixSort(ar,n,max);

    display(ar,n);


}

