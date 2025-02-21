class Solution {
public:
    string simplifyPath(string path) {
        stack<string> pathofdirectory;
        stringstream ss(path);
        string token;
        
        while (getline(ss, token, '/')) { // Split path by '/'
            if (token == "" || token == ".") continue; // Ignore empty and "."
            if (token == "..") { 
                if (!pathofdirectory.empty()) pathofdirectory.pop(); // Go back if possible
            } else {
                pathofdirectory.push(token); // Store valid directory name
            }
        }
        
        // Construct the final path
        string result = "";
        while (!pathofdirectory.empty()) {
            result = "/" + pathofdirectory.top() + result;
            pathofdirectory.pop();
        }
        
        return result.empty() ? "/" : result; // Return root if empty
    }
};
