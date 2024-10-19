class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=1;
        int end=arr.size()-1;
        while(start<=end)
        {
            int mid= start+(end-start)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
                return mid;
            if(arr[mid-1]<arr[mid])
                start=mid+1;
            if(arr[mid]>arr[mid+1])
                end=mid-1;
        }
        return -1;
    }
};
