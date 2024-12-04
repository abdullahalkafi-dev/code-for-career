#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    int jersey;
    string country;



  Cricketer(int jersey,string country){
    this->jersey=jersey;
    this->country=country;
  }
};

int main(){

 Cricketer* dhoni = new Cricketer(100,"India");
 Cricketer* kohli = new Cricketer(18,"India");
 *kohli =*dhoni;
  delete dhoni;
 cout<<kohli->jersey<<" " <<kohli->country;






    return 0;
}