int Solution::maxSubArray(const vector<int> &A) {
  std::vector <int> max,sum; 
  for (auto it = A.begin(); it != A.end(); ++it ){
    int a = 0;
    for(auto it1 = it; it1 != A.end(); ++it1 ){
        a = a + *it1;
        sum.push_back(a);
    }
    max.push_back(*max_element( sum.begin(), sum.end() ) );
  }
//   for (auto it = max.begin(); it != max.end(); ++it ){
//      cout<< *it<< " ";
//   }

  return *max_element(max.begin(), max.end() );    
}
