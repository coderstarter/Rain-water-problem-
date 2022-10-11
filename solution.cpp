long long trappingWater(int arr[], int n){
        // code here
        vector<int> maxl(n);
        vector<int> maxr(n);
        maxl[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            maxl[i]=max(maxl[i-1],arr[i]);
        }
        maxr[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            maxr[i]=max(maxr[i+1],arr[i]);
        }
        vector<int> water(n);
        for(int i=0;i<n;i++)
        {
            water[i]=min(maxl[i],maxr[i])-arr[i];
        }
        long long sum=0;
        for(int ele : water)
        {
            sum += ele;
        }
        return sum;
    }
    
    
    
