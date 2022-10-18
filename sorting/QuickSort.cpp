/*
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. 
It picks an element as a pivot and partitions the given array around the picked pivot. 
There are many different versions of quickSort that pick pivot in different ways. 

Always pick the first element as a pivot. --> easy and convinient 
Always pick the last element as a pivot (implemented below)
Pick a random element as a pivot.
Pick median as the pivot.

The key process in quickSort is a partition(). 
count all the smaller elements than the pivot swap the pivot with [s+cnt] index
then rearrange the elements such that the all left are smaller and right one are greater bye using while
1.while(i < pivotIndex && j > pivotIndex)
2.while(arr[i] <= pivot) i++;
3.while(arr[j] > pivot) j++;
4.if(i < pivotIndex && j > pivotIndex)  swap(arr[i++], arr[j--]);

time complexity avg/best : O(nlogn)
worst case : O(n^2)
space complexity : O(n)

*/

#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
