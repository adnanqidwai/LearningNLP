#include <bits/stdc++.h>
using namespace std;

vector<int> getChars(string s){
    vector<int> ans;
    for(char& c: s) ans.push_back(c -'a' + 1);
    return ans;
}

int main(){
    string SRIJA = "srija", ADNAN = "adnan";
    vector<int> v1,v2;
    v1 = getChars(SRIJA);
    v2 = getChars(ADNAN);
    for(int i = 0; i < 5; i++){
        char c = (v1[i] & v2[i])+'a';
        cout<<c;
    }
}