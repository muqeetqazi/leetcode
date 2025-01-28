class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> stack;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
                int idx = stack.top();
                stack.pop();
                answer[idx] = i - idx;
            }
            stack.push(i);
        }

        return answer;
    }
};
