/*
The selection sort algorithm sorts an array by repeatedly finding the minimum element 
(considering ascending order) from the unsorted part and putting it at the beginning. 

The algorithm maintains two subarrays in a given array.

The subarray which already sorted. 
The remaining subarray was unsorted.
In every iteration of the selection sort, the minimum element (considering ascending order) 
from the unsorted subarray is picked and moved to the sorted subarray. 

time complexity both best & worst => O(n^2);
space = O(1);
usecase = when array size is small;

*/


void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
