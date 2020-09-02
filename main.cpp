#include <iostream>
using namespace std;
//#include<stdio.h>
//int main() {

 // int answer = 1 + 1;
  
//  std::cout << "Hello World!\n";
 // std::cout<<answer;
//}

void change1(int number){
  number++;
}

void change2(int *number){
  (*number)++;
}

void change3(int &number){
  number++;
}


int main(){
  int n1 = 1;
  int n2 = 1;
  int n3 = 1;


  change1(n1);
  change2(&n2);
  change3(n3);

  std::cout <<"n1 is:"<<n1<<endl;
  std::cout <<"n2 is:"<<n2<<endl;
  std::cout <<"n3 is:"<<n2<<endl;
  return 0;
}