#include <bits/stdc++.h>
using namespace std;

void reverseSentence(string s) {
    
    stack<string> str;
    
    for(int i=0; i<s.size(); i++) {
        
        string word="";
        while(s[i]!=' ' && i<s.size()) {
            word+=s[i];
            i++;
        }
        str.push(word);
    }
    
    while(!str.empty()) {
        cout<<str.top()<<" ";
        str.pop();
    } 
    cout<<'\n';  
}

int main() {
        
    string s;
    getline(cin,s);   
    reverseSentence(s);
       
    return 0;
}
