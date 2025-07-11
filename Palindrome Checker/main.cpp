#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void ispalindrome(string p){
 stack<char> s;
 queue<char> q;
 int n = size(p);
 for(int i = 0; i < n; i++){
 s.push(p[i]);
 q.push(p[i]);
 }
 while(!s.empty()){
 if(tolower(s.top()) != tolower(q.front())){
 cout << "Not palindrome";
 return;
 }
 s.pop(); q.pop();
 }
 cout << "Palindrome";
}
int main() {
 string p = "Level";
 ispalindrome(p);
}
