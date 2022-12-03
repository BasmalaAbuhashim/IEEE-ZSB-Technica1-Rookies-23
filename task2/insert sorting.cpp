//for ex write a program to sort an array using insertion sort algorithm. #include <stdio.h>
     #include <iostream>
     using namespace std;
    // define size 5
     void insertion_sort(int arr[], int n);
     int main()
     {
              int i, n;
              cout<<"\n Enter the number of elements in the array: "<<endl;
              cin>>n;
              int arr[n];
              cout<<"\n Enter the elements of the array: "<<endl;
              for(i=0;i<n;i++)
              {
                      cin>>arr[i];
              }
              insertion_sort(arr, n);
              cout<<"\n The sorted array is:  \n"<<endl;
              for(i=0;i<n;i++)
              cout<<arr[i]<<endl;
     }
     void insertion_sort(int arr[], int n)
     {
              int i, j, temp;
              for(i=1;i<n;i++)
              {
                temp = arr[i];
                j = i-1;
                while((temp < arr[j]) && (j>=0)){
                arr[j+1] = arr[j];
                j--; }
                arr[j+1] = temp;
              } 
}
