//created by IT21315046
#include<iostream>
#include<cstring>
#define SIZE 3
using namespace std;

class user{
  protected:
    string name;
    string address;
    string email;
    int phone;

  public:
    user();
    void setDetails(string uname,string uaddress,string         
    uemail,int no);
    string getName();
    int getNumber();
    void displayDetails();

};

class unregisteredUser:public user{
    protected:
      int unregID;
    public:
      unregisteredUser();
      void setDetails(int uID,string uAddress,string uEmail,int         uNo);
      int getID();  
      string getName();
      int getNUmber();
      void displayDetails();
};