#include<bits/stdc++.h>
using namespace std;

void CountingSort(int arr[],int n,int k )
{
    int i ,j;
    int count[k+1],b[n];

    for(i=0;i<=k;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        count[arr[i]]++; 

    }

    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    for(i=n-1;i>=0;i--)
    {
         b[--count[arr[i]]]=arr[i];

    }

    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
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
    int n,k=0;

    printf("input the array length\n");

    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {

        cin>>ar[i];
        if(k<ar[i])
        {
            k=ar[i];
        }

    }

   CountingSort(ar,n,k);

    display(ar,n);


}

