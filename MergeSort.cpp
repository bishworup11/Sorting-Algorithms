#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int hi, int mid)
{

  int i = low;
  int j = mid + 1;
  int k = low;
  int b[hi];

  while (i <= mid && j <= hi)
  {
    if (arr[i] <= arr[j])
    {
      b[k] = arr[i];
      k++;
      i++;

    }

    else if (arr[j] < arr[i])
    {
      b[k] = arr[j];
      j++;
      k++;
    }

  }

  if (i > mid)
  {

    while (j <= hi)
    {

      b[k] = arr[j];
      k++;
      j++;

    }
  }

  else if (j > hi)
  {

    while (i <= mid)
    {

      b[k] = arr[i];
      k++;
      i++;


    }
  }



  for (int i = low; i <= hi; ++i)
  {
    arr[i] = b[i];
  }

}



void MergeSort(int arr[], int low , int hi )
{
  int mid;

  if (low < hi)
  {
    mid = (low + hi) / 2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, hi);

    merge(arr, low, hi, mid);

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
  MergeSort(ar, 0, n - 1);

  display(ar, n);


}


