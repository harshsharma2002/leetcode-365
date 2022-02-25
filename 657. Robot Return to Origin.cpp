class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int> p={0,0};
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                p.second++;
            }
            else if(moves[i]=='D'){
                p.second--;
            }
             else if(moves[i]=='L'){
                p.first++;
            }
            else{
                p.first--;
            }
        }
        if(p.first==0&&p.second==0)
            return true;
        else
            return false;
    }
};
