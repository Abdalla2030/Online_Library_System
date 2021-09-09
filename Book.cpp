#include "Book.h"
// assign this count by initial value
 int Book:: count=0;
 // empty constructor to assign initial value to the class
 Book::Book()
{
    title = "";
    isbn = "";
    count++;
    if (count == 1){id = 1; }
    else{ id = count; }
    category ="";
    averageRating = 0.0;
    User author;
    NumRates = 0 ;
    SumRates = 0 ;
}
// parameters constructor
 Book :: Book(string tit, string is, string cate){
    title = tit ;
    isbn  = is ;
    category = cate ;
    count++;
    if (count == 1){ id = 1; }
    else { id = count; }
    averageRating = 0.0;
   User author;
   NumRates = 0 ;
   SumRates = 0 ;
 }
 // copy constructor
Book::  Book(const Book& book){
    title = book.title;
    isbn = book.isbn;
    id = book.id;
    category = book.category;
    author = book.author;
    averageRating = book.averageRating ;
    NumRates = book.NumRates;
    SumRates = book.SumRates;
}
// this function to set the title
void Book::setTitle(string tit)
{
    title=tit ;
}
 // this function return the title
string Book::getTitle()
{
    return title;
}
// this function to set the isbn
void Book::setISBN(string isn)
{
    isbn= isn ;
}
 // this function return the isbn
string Book::getISBN()
{
    return isbn;
}
// this function to set the id
void Book::setId(int ID)
{
    id = ID;
}
 // this function return the id
int Book::getId()
{
    return id;
}
// this function to set the category
void Book::setCategory(string cate)
{
    category=cate;
}
 // this function return the category
string Book::getCategory()
{
    return category;
}
// this function to set the the object author
 void Book :: setAuthor(User user){
     author = user ;
 }
  // this function return the object author
  User Book :: getAuthor(){
      return author ;
  }
  // this function to calculate the averageRating
   void Book :: rateBook(int rating){
       NumRates++;
       SumRates+=rating ;
       averageRating = SumRates/NumRates ;
   }
     // this function return the averageRating
    double Book :: getAverageRating (){
           return averageRating;
    }
   // this function return true if two object are equals
  // and return false otherwise
   bool Book::operator==(const Book &book)
{
    return(title == book.title && isbn ==book.isbn && id == book.id && category == book.category && author == book.author);
}
// this is cin operator overloading
istream &operator>>( istream &input, Book &book ){
     cout<<"Enter the book information in this order "<<endl;
     cout<<"Title "<<"Isbn "<<"Category(Space separated)"<<endl;
     input>>book.title>>book.isbn>>book.category;
     book.averageRating = 0.0;
return input;
}
// this is cout operator overloading
ostream &operator<<(ostream &output, const Book &book ){
output<<"========Book "<<book.id<<" info ========"<<endl;
    output<<"Title : "<<book.title;
    output<<"| Isbn : " <<book.isbn;
    output<<"| Id : " <<book.id;
    output<<"| Category " <<book.category;
    output<<"| Avg Rating: "<<book.averageRating<<endl;
    cout<<endl;
    // if book have author print auther
    if (book.author.getName()!=""){
            cout<<book.author;
   }
    cout<<"=============================="<<endl;
    return output;
}
//////////////////////////////////////////////////////////////////////////////
