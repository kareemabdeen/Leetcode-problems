class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       map<int,int>mp; // using map not ordered one in order to make the nums be sorted ascendingly 
       for(auto &num : nums)
           mp[num]++;
       
       int maxi=-1 , ans=-1; 
       for(auto & m :mp)
       {
             //num             its freq 
           if(m.first%2==0 and m.second > maxi)
           {
               ans=m.first; 
               maxi=m.second;
           }
       }
       return ans ;
    }
};