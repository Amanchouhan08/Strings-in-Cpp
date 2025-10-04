//Sort a String
string sort(string s) {
    // complete the function here
    sort(s.begin(),s.end());
    return s;

 /*
       for(int i=0;i<s.size()-1;i++){
         for(int j=i+1;j<s.size();j++){
             if(s[j]<s[i]){
                 swap(s[j],s[i]);
              }
          }
       }
     return s;
*/
    
}
