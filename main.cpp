#include <iostream>
using namespace std;

int main(){
  //declare a variable
  int age = 16;
  cout << "Age is: " << age << endl; //16

  //Create a reference for the variable age
  int &my_age = age;
  cout << "My age is: " << my_age << endl; //16

  //Create a pointer for the variable age
  int* frnd_age = &age;
  cout << "Friend's age is: " << frnd_age << endl; //HexD

  //Dereference the pointer
  int sis_age = *frnd_age;

  cout << "Sister's age is: " << sis_age << endl; 
}