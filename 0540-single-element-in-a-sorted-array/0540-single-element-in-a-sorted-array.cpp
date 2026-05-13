class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        if(n==1){
            return arr[0];
        }
        int st=0;
        int ed=n-1;
        
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(mid==0 && arr[0]!=arr[1]) return arr[mid];
            if(mid==n-1 && arr[n-1]!=arr[n-2]) return arr[mid];
            if(arr[mid]!=arr[mid-1]&& arr[mid]!=arr[mid+1]) return arr[mid];
            if(mid%2==0){ //for even size
                if(arr[mid]==arr[mid-1]){
                    ed = mid-1;
                }
                else{
                    st= mid+1;
                }
            }

            else{  //for odd size 
                if(arr[mid]==arr[mid-1]){
                    st = mid+1;
                }
                else{
                    ed = mid-1;
                }

            }
        } return -1;
    }
};