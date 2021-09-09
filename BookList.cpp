#include "BookList.h"
#include <stdlib.h>
// empty constructor
BookList::BookList()
{
    capacity = 0;
    booksCount = 0;
}
//////////////////////////////////////////////////////////////////////////
//copy constructor
BookList::BookList(const BookList &anotherList)
{
    capacity = anotherList.capacity;
    booksCount = anotherList.booksCount;
    for (int i = 0 ; i < booksCount;i++){
      books[i]=anotherList.books[i];
    }
}
/////////////////////////////////////////////////////////////////////////////
// parameters constructor
BookList::BookList(int capacity )
{
    this->capacity = capacity;
    books = new Book[capacity];
    booksCount = 0;
}
//////////////////////////////////////////////////////////////////////////
//add book to booklist
void BookList::addBook(Book book){
          books[booksCount]  = book;
          books[booksCount].setId(booksCount+1);
          booksCount++;
  }
/////////////////////////////////////////////////////////////////////////////
// search by name if found return book
 // else return null
Book* BookList::searchBook(string name)
{
    for (int i = 0 ; i < booksCount;i++){
       if (books[i].getTitle()== name){
              return &books[i];
         }
    }
     return NULL;
}
///////////////////////////////////////////////////////////////////
// search by id if found return book
 // else return null
Book* BookList::searchBook(int id)
{
    for (int i = 0 ; i <booksCount; i++)
    {
        if ((books[i]).getId()== id )
        {
            return &books[i];
        }
    }
      return NULL;
}
/////////////////////////////////////////////////////
// delete book from booklist
void BookList::deleteBook(int id)
{
    for (int i = 0 ; i < booksCount; i++){
        if ((books[i]).getId()== id ){
            while (i <booksCount-1){
                books[i]=books[i+1];
                books[i].setId(i+1);
                i++;
            }
            booksCount--;
            capacity--;
            break ;
        }
    }
}
/////////////////////////////////////////////////////////////////////////
// this function return the book that have highest rate
Book BookList::getTheHighestRatedBook()
{
    double Highest_Rate = 0.0 ;
    int index =  0 ;
    for (int i = 0 ; i < booksCount;i++){
         if (books[i].getAverageRating()> Highest_Rate){
                       Highest_Rate = books[i].getAverageRating();
                       index = i ;
        }
    }
    return books[index];
}
//////////////////////////////////////////////////////////////////////
// this function print all books that have the same user
void BookList::getBooksForUser(User user)
{
    for (int i = 0 ; i < booksCount ; i++){
        if (books[i].getAuthor()== user){
                cout<<books[i];
        }
    }
}
////////////////////////////////////////////////////////////////
// this function return book if index is exist
Book& BookList::operator[](int position)
{
         if(position<0 || position >= booksCount){
            cout<<"Position Error";
            exit (1 ); // the program will stop if position not found
        }
           return books[position];
}
///////////////////////////////////////////////////////////////
 // cout operator overloading
ostream &operator<<(ostream &output, BookList &booklist)
{
    for (int i = 0 ; i < booklist.booksCount ; i++){
        output<<booklist.books[i]<<endl;
    }
    return output;
}
////////////////////////////////////////////////
 // to delete the dynamic array from memory
BookList::~BookList()
{
    delete [] books;
}
////////////////////////////////////////////////
