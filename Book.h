#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include<cstring>
#include<iostream>
#include <string.h>
#include "User.h"
using namespace std;
class Book
{
private:
 string title;
 string isbn;
 int id;
 string category;
 double averageRating;
 User author;
 // TO COUNT THE NUMBER  CALL OF RateBook FUNCTION
 int NumRates ;
 // TO SUM ALL RATING OF ALL BOOK
 double SumRates ;
public:
static int count;
 Book();
 Book(string title, string isbn, string category);
 Book(const Book& book);
 void setTitle(string title);
 string getTitle();
 void setISBN(string isbn);
 string getISBN();
 void setId(int id);
 int getId();
 void setCategory(string category);
 string getCategory();
 void setAuthor(User user);
 User getAuthor();
 void rateBook(int rating);
 double getAverageRating ();
 bool operator==(const Book& book);
 friend ostream &operator<<(ostream &output, const Book &book );
 friend istream &operator>>( istream &input, Book &book );
};
#endif // BOOK_H_INCLUDED
