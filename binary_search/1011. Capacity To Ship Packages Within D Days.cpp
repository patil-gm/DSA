/*
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, 
we load the ship with packages on the conveyor belt (in the order given by weights). 
We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and 
splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
*/

class Solution {
public:
    int shipWithinDays(vector<int>& weight, int days) {
      
        int end=accumulate(weight.begin(),weight.end(),0);
        int start=0,mid;
        int n=weight.size();

        int ans=INT_MAX;

        while(start<=end){
          
            mid=(start+end)/2;
            int temp=0,cnt=1;

            for(int i=0;i<n;i++){
              
                if(weight[i]>mid){
                  cnt=INT_MAX;
                  break;}
              
                temp+=weight[i];
              
                if(temp>mid){
                    cnt++;
                    temp=weight[i];
                }
            }
          
            if(cnt<=days){
                ans=min(ans,mid);
            }
          
            if(cnt>days)start=mid+1;
            else end=mid-1;
        }

        return ans;
    }
};
