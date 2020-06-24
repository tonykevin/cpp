#include <iostream>

using namespace std;

int main() {
  // Define data types for user
  char name[20] = {""};
  int age= 0;
  float weight = 0;
  double profits= 0;

  // Get user data
  cout<<" 💻 User Sign up\n";
  cout<<" ───────────────\n";
  cout<<" 🔰 Name    : ";cin>>name;
  cout<<" 🔰 Age     : ";cin>>age;
  cout<<" 🔰 Weight  : ";cin>>weight;
  cout<<" 🔰 Profits : ";cin>>profits;

  // Show info
  cout<<"\n\n";
  cout<<" 📚 User profile\n";
  cout<<" ───────────────\n";
  cout<<" 👔 name    : "<< name    <<"\n";
  cout<<" 🌲 age     : "<< age     <<"\n";
  cout<<" 📋 weight  : "<< weight  <<"\n";
  cout<<" 💰 profits : "<< profits <<"\n";
  cout<<"\n\n";

  return 0;
}
