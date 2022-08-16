class Solution {
public:
    bool isIsomorphic(string s, string t) {
      unordered_map<char,char> s1;
unordered_map<char,char> t1;
int len = s.size();
for(int i = 0; i< len; i++){
char x = s[i];
char y = t[i];
if(s1.count(x) && s1[x] != y || t1.count(y) && t1[y] != x){
return false;
}
s1[x] = y;
t1[y] = x;
}
return true;
    }
};