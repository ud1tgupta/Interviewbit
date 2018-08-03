int Solution::maxSubArray(const vector<int> &A) {
    int max_current, max_global;
    max_current = max_global = A.at(0);
    for(auto i=A.begin()+1; i!=A.end(); i++){
        max_current = max(*i,*i+max_current);
        max_global = max(max_current,max_global);
    }
    return max_global;
}
