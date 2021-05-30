#include <iostream>
using namespace std;
int calculator(int a, int b);
int main(){
     int a = 0;
     int b = 0;

     cout << "Give me two integers:" << endl;
     cin >> a >> b;
     cout << calculator(a,b);
     

}
int calculator(int a, int b){
     char s;
     int result;
     cout << "\n" << "Now what you want to do?(p for plus, m for minus, a for multiplication, d for division): " << endl;
     cin >> s;
     if (s == 'p'){
          result = a+b;
          return result; 
     }
     else if (s == 'm'){
          result = a-b;
          return result; 
     }
     else if (s == 'a'){
          result = a*b;
          return result;
     }
     else if (s == 'd'){
          result = a/b;
          return result;
          
     }
     else{
          return -1;
     }
}