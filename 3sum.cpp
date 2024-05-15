class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;

        for(int i=0 ; i<n ;i++)
        {
            int l=i+1;
            int r=n-1;

            while(l<r)
            {
                int k = a[i]+a[l]+a[r];
                if(k==0)
                {
                    ans.push_back({a[i],a[l],a[r]});
                    while(l<r && a[l] == a[l+1]) l++;
                    l++;
                    
                }else
                {
                    if(k<0)l++;
                    else r--;
                }
            }
            while(i<n-1 && a[i]==a[i+1])i++;
        }
        return ans;
    }
};