class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> calcu;

        int n = tokens.size();

        for(int i = 0 ; i < n ; i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                int s = stoi(tokens[i]);
                calcu.push(s);
            }else{
                string str = tokens[i];

                if(str == "+"){
                    int a = calcu.top();
                    calcu.pop();
                    int b = calcu.top();
                    calcu.pop();
                    int c = b + a;
                    calcu.push(c);
                }else if(str == "-"){
                    int a = calcu.top();
                    calcu.pop();
                    int b = calcu.top();
                    calcu.pop();
                    int c = b - a;
                    calcu.push(c);
                }else if(str == "*"){
                    int a = calcu.top();
                    calcu.pop();
                    int b = calcu.top();
                    calcu.pop();
                    int c = b * a;
                    calcu.push(c);
                }else{
                    int a = calcu.top();
                    calcu.pop();
                    int b = calcu.top();
                    calcu.pop();
                    int c = b / a;
                    calcu.push(c);  
                }
            }
        }
        return calcu.top();
    }
};
