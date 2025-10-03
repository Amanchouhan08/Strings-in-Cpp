//"String Rotated by 2 Places" this is a problem
class Solution {
  public:
  
    void rotate_clockwise(string &s){
        char c=s[s.size()-1];
        int index=s.size()-2;
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
    }
    
    void rotate_anticlockwise(string &s){
         char c=s[0];
        int index=1;
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=c;
    }
    
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()){
            return 0;
        }
        
        string clockwise=s1;
        rotate_clockwise(clockwise);
        rotate_clockwise(clockwise);
        if(clockwise==s2){
            return 1;
        }
        
        string anticlockwise=s1;
        rotate_anticlockwise(anticlockwise);
        rotate_anticlockwise(anticlockwise);
        if(anticlockwise==s2){
            return 1;
        }
        
        return 0;
        
    }
};
