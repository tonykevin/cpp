#include <iostream>

using namespace std;
struct user{
   // Define data types for user
  public:
  char name[20] = {""};
  int age= 0;
  float weight = 0;
  double profits= 0;
  // Get user data
  void getinfo()
  {
    cout<<" 💻 User Sign up\n";
  cout<<" ───────────────\n";
  cout<<" 🔰 Name    : ";cin>>name;
  cout<<" 🔰 Age     : ";cin>>age;
  cout<<" 🔰 Weight  : ";cin>>weight;
  cout<<" 🔰 Profits : ";cin>>profits;
  }
  void putinfo()
  {
    
  // Show info
  cout<<"\n\n";
  cout<<" 📚 User profile\n";
  cout<<" ───────────────\n";
  cout<<" 👔 name    : "<< name    <<"\n";
  cout<<" 🌲 age     : "<< age     <<"\n";
  cout<<" 📋 weight  : "<< weight  <<"\n";
  cout<<" 💰 profits : "<< profits <<"\n";
  cout<<"\n\n";
  }
    
  
};
int main() {
  int n;
 cout<<"Enter number of users<<endl;<<cin>>n;
  struct u[n];
  for(int i=0;i<n;i++)
  {
    u[i].getinfo();
  }
  for(int i=0;i<n;i++)
  {
    u[i].putinfo();
  }
  
  

  
  


  return 0;
}
