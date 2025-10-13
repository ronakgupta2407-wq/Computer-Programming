// Student Percentage
#include<iostream>
using namespace std;
int main(){
     string N; // N = Name of student
     int R ; // R = Roll No. of student
     cout<<"Enter your Name:"<<endl;
     cin>> N;
     cout<<" Enter your roll no.:"<<endl;
     cin>> R;
     
     // Display of marks per subject
     
     double C,W,B,M,D;
     cout<<"Enter your marks obtained in Computer programming out of 100"<<endl;
     cin >> C;
     cout<<"Enter your marks obtained in Web Technology out of 100"<<endl;
     cin >> W;
     cout<<" Enter your marks obtained in Business out of 100"<<endl;
     cin >> B;
     cout<<" Enter your marks obtained in maths out of 100"<<endl;
     cin >> M;
     
     cout<<"Enter your marks obtained DLD out of 100 "<<endl;
     cin >> D;
     
     cout<<"Your Name:"<<N<<endl;
     cout<<"Your Roll No.:"<<R<<endl;
     cout<< "Your Percentage = "<< (C + W + B + M +D)/5<<endl;
     
    
   
    
}
