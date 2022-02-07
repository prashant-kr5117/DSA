class Solution 

 { 

         public: 

     char findTheDifference(string s, string t) 

           { 

         int difference,i; 

         difference=0; 

         for(i=0;i<s.size();i++) 

                     { 

             difference -= s[i]; 

             difference += t[i]; 

         }  

         difference += t[t.size()-1]; 

         return (char)difference; 

     } 

 };
