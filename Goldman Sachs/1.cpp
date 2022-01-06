// link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#

// soln-
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        unordered_map<string, vector<string>> mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            string temp = s[i];
            sort(temp.begin(), temp.end());
            if(mp.find(temp) != mp.end()){
                mp[temp].push_back(s[i]);
            }else{
                mp[temp].push_back(s[i]);
            }
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            vector<string> temp;
            for(auto itt:it.second) temp.push_back(itt);
            ans.push_back(temp);
        }
        return ans;
    }
};