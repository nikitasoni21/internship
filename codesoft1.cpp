#include<iostream>
using namespace std;

int main(){
      int number;
      cout<<"  N U M B E R  G U E S S I N G  G A M E   "<<endl;
      cout<<" A random number is being selected between 1 - 10 ."<<endl<<" Guess the selected number! "<<endl;
      cout<<" Enter the number: ";
      cin>>number; 
      if(number>7){
        cout<<"Sorry ! You entered a bigger number.";
      }else if(number==7){
        cout<<" Congratulations ! You guessed it right.";

      }else{
        cout<<" Sorry you entered a smaller number.";

      }
     return 0;
}