/*
START
Input array size : n;
Input the array a of size n;
Printing the unsorted original array;
Now calling the selection sort function on the array a by passing the array a and the size n;
Creating a min variable to store the ith element from array a 
Comparing the min with the jth element of array a 
if(a[j]<a[min]) storing min =j;
initialising temp variable as ith element of array a;
replacing ith element of array a as a[i]=a[min];
replacing a[min]=temp;
And traversing the entire array likewise untill the entire array is sort;
Printing the sorted array;
END
*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
  int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main(){

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
