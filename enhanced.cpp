#include<iostream>
#include<stack>
#include<queue>
using namespace std;
bool isPalindrome(const string& input) {
    stack<char> s;
    queue<char> q;

    //converting to lowercase
    for (char c : input) {
        if (isalnum(c)) {
            char lower = tolower(c);
            s.push(lower);
            q.push(lower);
        }
    }

    // Compare front queue and back stack (as in characters)
    while (!s.empty()) {
        if (s.top() != q.front()) {
            return false;
        }
        s.pop();
        q.pop();
    }

    return true;
}
int main() {
    string userInput;

    cout << "Enter a word or a sentence to check for palindrome: "<<endl;
    getline(cin, userInput);

    if (userInput.empty()) {
        cout << "Input is empty. Please enter a valid string.\n";
        return 1;
    }

    if (isPalindrome(userInput)) {
        cout << "The input is a palindrome.\n";
    } else {
        cout << "The input is not a palindrome.\n";
    }

    return 0;
}
