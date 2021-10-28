#include<bits/stdc++.h>
using namespace std;

int findDup(vector<int> nums){
 
  unordered_map<int,int> map;
  
  for(int i=0;i<nums.size();i++){
    if(map.find(nums[i])==map.end()){
      map[nums[i]]=1;
    }
    else{
      nums[i]++;
    }
    
    for(auto &x:map){
      if(x.second>1){
        return x.first;
      }
    }
  return -1;
}
int main()
{
  vector<int> num(10,20,30,20,40);
  cout<<"Dupliacte number is "<<findDup(nums);
  return 0;
}
