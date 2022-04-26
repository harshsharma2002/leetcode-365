class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
      bool flag=true;
      int n=num;
      while(n){
        int rem=n%10;
        v.push_back(rem);
        n/=10;
      }
      for(int i=v.size()-1;i>=0;i--){
        if(v[i]==6){
          flag=false;
          v[i]=9;
          break;
        }
      }
      if(flag)  return num;
      n=0;
      for(int i=v.size()-1;i>=0;i--){
        n=n*10+v[i];
      }
      return n;
    }
};
