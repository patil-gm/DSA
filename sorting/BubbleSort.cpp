/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
we move largest element to end of the array by swapping it with neighbouring smaller element;
This algorithm is not suitable for large data sets 
as its average and worst-case time complexity is quite high.

**** we move i th largest element in i th iteration at right position ****

time complexity best case = O(n) place bool var under the first loop
time complexity worst case = O(n^2)

there are n-1 swapping rounds in B.S.
space complexity =
usecase = not suitable for large data sets as its average and worst-case time complexity is quite high.
*/


void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) //for round 1 to n-1
    {
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) //process element till n-i th index
        {
            
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
