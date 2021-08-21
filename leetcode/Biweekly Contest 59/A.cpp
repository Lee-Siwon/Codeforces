class Solution {
public:
    int minTimeToType(string word) {
        int answer=0;
        char now = 'a';
        for(int i=0;i<word.size();i++){
             char temp = word[i];
            int min=0;
            if(now<=temp){
                min=(temp-now)<(now+26-temp)?temp-now:now+26-temp;
            }
            else{
                min=(now-temp)<(temp+26-now)?now-temp:temp+26-now;
            }
            now = temp;
            answer+=min+1;
        }
        return answer;
    }
};
