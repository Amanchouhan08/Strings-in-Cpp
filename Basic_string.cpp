#include<iostream>
using namespace std;
int main(){
    string s="Aman";
    cout<<s<<endl;
   /* string s1;
    cin>>s1; //after space and tab it will not take input
    cout<<s1<<endl;  */
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;
    cout<<s2.size()<<endl;   //return size of the s2
    string s3=s+s2; //Add string s and s2
    cout<<s3;
    return 0;
}

//for print single \ then use double \\.
// \ means it will not read his just next one and read start from next second.
