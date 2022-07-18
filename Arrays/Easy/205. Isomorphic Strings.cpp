que - Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int arr[256]={0};
for(int i=0;i<s.size();i++){
if(arr[s[i]]==0){
arr[s[i]]=t[i];
}else if(arr[s[i]]!=t[i]){
return false;
}
}
int arr1[256]={0};
for(int i=0;i<t.size();i++){
if(arr1[t[i]]==0){
arr1[t[i]]=s[i];
}
else if(arr1[t[i]]!=s[i]){
return false;
}
}
return true;
}
    
};