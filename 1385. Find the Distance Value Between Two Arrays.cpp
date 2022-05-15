class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        
        for (int i = 0; i < arr1.size(); i++) {
            int start = 0;
            int end = arr2.size() - 1;
            int target = arr1[i];
            int closest = -1;
            
            while (start <= end) {
                int mid = (start + end) >> 1;
                if (closest == -1 or (abs(arr2[closest] - target) > abs(arr2[mid] - target)))
                    closest = mid;
                if (arr2[mid] > target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            ans += (abs(arr2[closest] - target) > d);
        }
        return ans;
    }
};
