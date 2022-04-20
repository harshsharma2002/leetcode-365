class Solution {
public:
    int convertTime(string current, string correct) {
        int count=0;
        string h1=current.substr(0,2);
        string h2=correct.substr(0,2);
        
        string m1=current.substr(3,5);
        string m2=correct.substr(3,5);
        
        int a1=stoi(h1);
        int b1=stoi(h2);
        int a2=stoi(m1);
        int b2=stoi(m2);
        
        int b=a1*60+a2;
        int a=b1*60+b2;
        
        if(a1==b1&&a2==b2){
            return 0;
        }
        if(a-b>=60){
        while(a-b>=60){
            count++;
            b+=60;
        }
        }
        if(a-b>=15){
        while(a-b>=15){
            count++;
            b+=15;
        }
        }
        if(a-b>=5){
        while(a-b>=5){
            count++;
            b+=5;
        }
    }
        if(a-b>=1){
        while(a-b>=1){
            count++;
            b+=1;
        }
        }
        return count;
    }
};
