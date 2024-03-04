class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int front = 0,score =0,back = tokens.size()-1;
        while(front <= back){
            if(score == 0 && tokens[front] > power){
                return 0;
            }
            else if(score > 0 && tokens[front] > power){
                if(front == back)
                    break;
                    score--;
                    power += tokens[back];
                    back--;
                }else{
                    power -= tokens[front];
                    score++;
                    front++;
            }
        }
        return score;
    }
};
