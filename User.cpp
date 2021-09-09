#include "User.h"
// assign this count by initial value
int User:: count=0;
// empty constructor to assign initial value to the class
User::User(){
          name = "";
          age = 0 ;
          password="";
          email = "";
          count++;
          if (count == 1){id = 1 ; }
          else { id = count ;     }
}
// parameters constructor
User::User(string n, int a, string e, string p ){
          name = n ;
          age = a ;
          email = e ;
          password = p ;
          count++;
           if (count == 1){ id = 1 ; }
          else { id = count;  }
}
// copy constructor
User::User(const User&user ){
           name = user.name;
           age = user.age;
           password = user.password;
           email = user.email;
           id = user.id;
}
// this function return true if two object are equals
// and return false otherwise
bool User:: operator==(const User& user){
         if (name != user.name || email !=user.email || age != user.age || id != user.id){
                     return false ;
         }
         return true ;
}
// this function to set the name
void User:: setName(string n){
           name = n ;
}
// this function return the name
string User:: getName() const{
           return name;
}
// this function to set the password
void User:: setPassword(string p){
          password = p ;
}
// this function return the password
string User:: getPassword()const{
         return password ;
}
// this function to set the email
void User:: setEmail(string e){
      email = e ;
}
// this function return the email
string User:: getEmail()const {
      return email ;
}
// this function to set the age
void  User:: setAge(int ag){
         age = ag;
}
// this function return the age
 int  User:: getAge(){
        return age ;
 }
 // this function to set the id
 void  User:: setId(int ID){
        id = ID ;
 }
 // this function return the id
 int  User:: getId(){
       return id ;
 }
 ////////////////////////////////////////////////////////////////////////
 // THIS FUNCTION TO PRINT ALL ITEM IN THE USER CLASS
void User ::Display (){
cout<<"****************************************"<<endl;
cout<<"*   "<<"NAME = " <<name<<endl;
cout<<"*   "<<"AGE = " <<age << endl;
cout<<"*   "<<"ID = " <<id << endl;
cout<<"*   "<<"EMAIL = " << email << endl;
cout<<"****************************************"<<endl;
}
///////////////////////////////////////////////////////////////////////////////
// this is cin operator overloading
istream &operator>>( istream &input, User &user ){
cout<<"Enter the user information in this order "<<endl;
cout<<"Name "<<"Age " <<"Email " <<"Password  ";
cout<< " (Space separated )"<<endl;
 input>>user.name>>user.age>>user.email>>user.password;
return input;
}
// this is cout operator overloading
ostream &operator<<(ostream &output, const User &user ){
output<<"========User "<<user.id<<" info ========"<<endl;
output<<"Name : " << user.name ;
output<<" | Age : " <<  user.age ;
output<<" | Id : " << (user.id);
output<<" | Email : " << user.email <<endl;
cout<<"=============================="<<endl;
return output;
}
//////////////////////////////////////////////////////////////////////////////////////////

