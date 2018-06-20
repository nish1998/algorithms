vector<int> Solution::plusOne(vector<int> &A) {
    if(A.size()==0){
        return {1};
    }
    int n= A.size();
    int carry=((A[n-1]+1)/10)%10;
    A[n-1] = (A[n-1]+1)%10;
    for(int i=n-2; i>=0; i--){
        int temp= (A[i]+carry)/10;
        A[i]=((A[i]+carry)%10);
        carry= temp%10;
    }

    vector<int> myvector;
    int start=0;
    if(carry==0){
        for(int j=0;j<n;j++){
            if(A[j]>0){
                start=j;
                break;
            }
        }
    }
    if(carry!=0){
        myvector.push_back(carry);
    }
    
    for(int i =start; i<n; i++){
        myvector.push_back(A[i]);
    }
    
    return myvector;
}
