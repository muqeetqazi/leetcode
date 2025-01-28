class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                // Push numeric tokens as integers
                stack.push(stoi(tokens[i]));
            } else {
                // Pop the last two numbers from the stack
                int secondlast = stack.top();
                stack.pop();
                int last = stack.top();
                stack.pop();

                // Perform the operation and push the result back
                if (tokens[i] == "+") {
                    stack.push(last + secondlast);
                } else if (tokens[i] == "-") {
                    stack.push(last - secondlast);
                } else if (tokens[i] == "*") {
                    stack.push(last * secondlast);
                } else if (tokens[i] == "/") {
                    stack.push(last / secondlast);
                }
            }
        }
        return stack.top();
    }
};
