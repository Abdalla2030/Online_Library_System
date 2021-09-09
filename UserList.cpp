#include "UserList.h"
// empty constructor
UserList::UserList(){
capacity = 0 ;
usersCount = 0 ;
}
// parameters constructor
UserList::UserList (int capacity ){
    this ->capacity = capacity ;
    users = new User[capacity];
    usersCount = 0 ;
}
// add user to userlist
 void UserList:: addUser(User user){
   users[usersCount]  = user ;
   users[usersCount].setId(usersCount+1);
   usersCount++;
 }
 // search by name if found return user
 // else return null
User* UserList:: searchUser(string name){
      for (int i = 0 ; i < usersCount; i++){
              if ((users[i]).getName()== name ){
                   return &users[i];
            }
      }
      return NULL;
  }
// search by id if found return user
 // else return null
 User* UserList :: searchUser(int id){
 for (int i = 0 ; i < usersCount; i++){
              if ((users[i]).getId()== id ){
                   return &users[i];
            }
      }
     return NULL;
 }
 // delete user from userlist
 void UserList :: deleteUser(int id){
 for (int i = 0 ; i < usersCount; i++){
              if ((users[i]).getId()== id ){
                    while (i <usersCount-1){
                       users[i]=users[i+1];
                       users[i].setId(i+1);
                       i++;
                    }
              usersCount--;
              capacity--;
              break ;
          }
     }
 }
 // cout operator overloading
 ostream &operator<<( ostream &output,UserList &userList ){
  for (int i = 0 ; i < userList.usersCount ; i++){
    output<<userList.users[i];
 }
  return output;
 }
 // to delete the dynamic array from memory
 UserList:: ~UserList(){
  delete [] users ;
 }
 ////////////////////////////////////////////////


