class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else if(ops[i]=="D"){
                int a=2*s.top();
                s.push(a);
            }
            else if(ops[i]=="C"){
                s.pop();
            }
            else{
                int a=stoi(ops[i]);
                s.push(a);
            }
        }
        int sum=0;
        while(!s.empty()){
            cout<<s.top()<<" ";
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
