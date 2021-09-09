#ifndef USERLIST_H_INCLUDED
#define USERLIST_H_INCLUDED
#include<cstring>
#include<iostream>
#include <string.h>
#include "User.h"
using namespace std;
class UserList
{
 private:
 User* users;
 int capacity;
 int usersCount;
 public:
UserList();
 UserList(int capacity);
 void addUser(User user); // at the end of the array.
 User* searchUser(string name);
 User* searchUser(int id);
 void deleteUser(int id);
 friend ostream &operator<<( ostream &output, UserList &userList );//to display all books
 ~UserList();
};
#endif // USERLIST_H_INCLUDED
