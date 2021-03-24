#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class User
{
public:
    User();
    User(string u, int array[], int num);
    string getUsername() const;
    void setUsername(string u);
    int getRatingAt(int index);
    bool setRatingAt(int index, int value);
    int getNumRatings() const;
    void setNumRatings(int r);
    int getSize() const;

private:
    string username;
    int ratings[87];
    int numRatings;
    int size;
};

////////////////////////////////////////

////////////////////////////////////////

User::User() // default constructor
{
    username = ""; // inital value
    numRatings = 0; // initial value
    size = 50; // initial value
    ratings[50]; // initial value
    for(int i = 0; i < 50; i++) // loops throught array
    {
        ratings[i] = 0; // sets all 50 values to 0 initialy
    }
}

User::User(string u, int _ratings[50], int num)  // paraiterized constructor
{
    username = u; // sets name
    if(num < size)
    {
        numRatings = num; // sets the value of ratings
    }
    
    for(int i = 0; i < 50; i++) // loops through ratings array
    {
        if(i < num)
        {
            ratings[i] = _ratings[i]; // sets the ratings array to be the input values
            numRatings++; // increase the value of numRatings
        }
        else
        {
            ratings[i] = 0;
        }
    }
}


string User::getUsername() const // returns username
{
    return username;
}

void User::setUsername(string u) // sets the username
{
    username = u;
}

int User::getRatingAt(int index) // gets the rating at a specified point
{
    if(index >= 50)
    {
        return -1;
    }
    if(true)
    {
        return ratings[index]; // returns the rating at that index
    }
    else if(false)
    {
        return -1;
    }
}

bool User::setRatingAt(int index, int value) // sets the rating
{
    if((index <= 50) && (value >= 0 && value <= 5)) // checks the index and value to be valid
    {
        ratings[index] = value; // puts a value in the index of the array
        return true; // true if this works
    }
    else
    {
        return false; // false if it doesn't work
    }
}

int User::getNumRatings() const // gets the number of ratings
{
    return numRatings;
}

void User::setNumRatings(int num) // sets the number of ratings
{
    numRatings = num;
}

int User::getSize() const // gets the size of the array
{
    return size;
}

////////////////////////////////////////

////////////////////////////////////////
class Book
{
public:
    Book();
    Book(string t, string a);
    void setTitle(string t);
    void setAuthor(string a);
    string getTitle() const;
    string getAuthor() const;

private:
    string title;
    string author;
};

////////////////////////////////////////

////////////////////////////////////////
Book::Book()
{
    title = "";
    author = "";
}

Book::Book(string t, string a)
{
    title = t;
    author = a;
}

void Book::setTitle(string t)
{
    title = t;
}

void Book::setAuthor(string a)
{
    author = a;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

////////////////////////////////////////

////////////////////////////////////////
class Library
{
public:
    Library();
    int getSizeBook();
    int getSizeUser();
    int getNumBooks();
    int getNumUsers();
    int readBooks(string fileName);
    int readRatings(string fileName);
    void printAllBooks();
    int getCountReadBooks(string u);
    double calcAvgRating(string t);
    int addUser(string u);
    int checkOutBook(string u, string t, int raring);
    void viewRatings(string u);
    int getRating(string u, string t);
    void getRecommendations(string u);

private:
    int sizeBook;
    int sizeUser;
    Book books[50];
    User users[100];
    int numBooks;
    int numUsers;
};

////////////////////////////////////////

////////////////////////////////////////
Library::Library()
{
    numBooks = 0;
    numUsers = 0;
    sizeBook = 50;
    sizeUser = 100;
}
int Library::getSizeBook()
{
    return sizeBook;
}

int Library::getSizeUser()
{
    return sizeUser;
}

int Library::getNumBooks()
{
    return numBooks;
}

int Library::getNumUsers()
{
    return numUsers;
}

int split (string line, char c, string strArray[], int maxStrings)
    {
        if (line.length() == 0)
        {
            return 0;
        }
        string word = "";
        int count = 0;
        line = line + c;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == c) 
            {
            	if (word.length() == 0) continue;
                if(count > maxStrings)
                {
                    return -1;
                }
                strArray[count] = word;
                count++;
                word = "";
            }
            else
            {
                word = word + line[i];
            }
        }
        return count;
    }
    
    string lowerCase(string t)
    {
        string user = t;
        for(unsigned int i=0;i<user.length();i++) // loops through the string
        {
            user[i] = tolower(t[i]); // converts uppercase to lowercase letters
        }
        return user;
    }
    
int Library::readBooks(string fileName) 
{
    ifstream myfile;
    myfile.open(fileName); // open files
    int lineindex = 0;
    int maxStrings = 2;
    int i = numBooks; // inital number of books in the array
    
    if (myfile.is_open()) // what to do when the file is open
    {
        string line = "";
        
        if(numBooks != sizeBook)
        {
            while(getline(myfile, line)) // loop throught the lines of the text document
            {
                string strArray[2];
                split(line, ',', strArray, maxStrings); // split the lines by ","
               
               if(line == "")
               {
                   continue;
               }
                
               if(i <= sizeBook)
               {
                   books[i].setAuthor(strArray[0]); // first split string gets appended to the authors array
                   books[i].setTitle(strArray[1]); // rest of the string gets appended to the titles array
                   numBooks++; // books stored gets updated
                   i++; // itterator updated
               }
            }
            return i; // number of authors and titles in the arrays
        }
        else
        {
            return -2;
        }
    }
    
    else // what to do if the file doesn't open
    {
        return -1;
    } 
    myfile.close(); // closes the file
} 
        // if(numBooks == sizeBook)
        // {
        //     return -2;
        // }
        
        // while(getline(myfile, line)) // loop throught the lines of the text document
        // {
        //     string strArray[2];
        //     split(line, ',', strArray, maxStrings); // split the lines by ","
           
        //   if(line == "")
        //   {
        //       continue;
        //   }
            
        //   if(i < sizeBook)
        //   {
        //       books[i].setAuthor(strArray[0]); // first split string gets appended to the authors array
        //       books[i].setTitle(strArray[1]); // rest of the string gets appended to the titles array
        //       numBooks++; // books stored gets updated
        //       i++; // itterator updated
        //   }
        // }
        // return i; // number of authors and titles in the arrays
    // }
    
    else // what to do if the file doesn't open
    {
        return -1;
    } 
    myfile.close(); // closes the file
}

int Library::readRatings(string fileName)
{
    int maxCol = 50;
    
    ifstream myfile;
    myfile.open(fileName); // open file
    int lineindex = 0;
    int maxStrings = maxCol + 1;
    // int i = 0; 
    int i = numUsers;
    
    if(numUsers >= sizeUser)
    {
        return -2;
    }
    
    if (myfile.is_open())
    {
        string line = "";
        while(getline(myfile, line)) // loop through the lines in the file
        {
            string strArray[maxCol + 1];
            int num = split(line, ',', strArray, maxStrings); // split the lines by the comma
            if(line == "")
            {
                continue;
            }
            
            if(numUsers < sizeUser)
            {
                if(line.length() != 0)
                {
                    users[i].setUsername(strArray[0]);
                    for(int j = 0; j < num - 1 ; j++) // loop through the split line
                    {
                        users[j].setRatingAt(i, stoi(strArray[j + 1])); // answer for the index of the rating
                    }
                
                }
                i++;
                numUsers++;
            }
        }
        return i; // returns the number of the rating
    }
    else
    {
        return -1;
    } 
    myfile.close();
}

void Library::printAllBooks()
{
    // Book books[];
    // int numBooks;
    
    int i = 0;
    if(numBooks <= 0) // checks for books
    {
        cout << "No books are stored"; // output if no books present
    }
    else
    {
        cout << "Here is a list of books" << endl; // output before printing books
        
        for(int i = 0; i < numBooks; i++) // loop through the books
        {
            cout << books[i].getTitle() << " by ";
            cout << books[i].getAuthor() << endl; // output for the books and authors on their own lines

        }
    }
}

int Library::getCountReadBooks(string u)
{
    //read through lines split then look for the user. If found do stuff with it
}
    
double Library::calcAvgRating(string t)
{
    int pos1 = 0;
    bool found1;
    string title = t;
    double sum = 0;
    double count = 0;

    while(pos1 < numBooks && !found1) // same as the first one but with the tiles
    {
        if(lowerCase(books[pos1].getTitle()) == lowerCase(title)) // lowercase letters for titles too
        {
            found1 = true; // bool value if it is in the array
        }
        else
        {
            pos1++; // if not keep going throught the titles untill found
        }
    }

    if(found1 == true) // what to do once you found the title
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(users[i].getRatingAt(pos1) == '0') continue;
            else
            {
                sum = sum + users[i].getRatingAt(pos1);
                // sum = sum + stod(users[i].getRatingAt(pos1));
                count++;
            }
        }
        return sum / count;
        // return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        return -3;
    }
}

int Library::addUser(string u)
{
    int i;
    // bool answer;
    int currentSize = getNumUsers();
    
    for(i = 0; i < numUsers; i++)
    {
        if(users[i].getUsername() == u)
        {
            // answer = True
            return 0;
        }
        else continue;
    }
    if(currentSize < numUsers)
    {
        users[i].setUsername(u);
        numUsers++;
        return 1;
    }
    else
    {
        return -2;
    }
}

int Library::checkOutBook(string u, string t, int rating)
{
    int pos1 = 0;
    int pos2 = 0;
    bool found1;
    bool found2;
    // string user = lowerCase(u); // calls function to make the stringall lowercase  

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == lowerCase(u)) // what to do once found
        {
            found1 = true; // bool value if found
        }
        else
        {
            pos1++; // if not found keep looping through each name
        }
    }
    while(pos2 < numBooks && !found2) // same as the first one but with the tiles
    {
        if(lowerCase(books[pos2].getTitle()) == lowerCase(t)) // lowercase letters for titles too
        {
            found2 = true; // bool value if it is in the array
        }
        else
        {
            pos2++; // if not keep going throught the titles untill found
        }
    }

    if((found1 == true) && (found2 == true)) // what to do once you found both the user and the title
    {
        if((rating >= 0) && (rating >= 5))
        {
            users[pos1].setRatingAt(pos1, rating);
            return 1;
        }
        else
        {
            return -4;
        }
    }
    else
    {
        return -3;
    }
}

void Library::viewRatings(string u)
{
    int pos1 = 0;
    int pos2 = 0;
    bool found1;
    bool found2;
    string user = lowerCase(u); // calls function to make the stringall lowercase  

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == user) // what to do once found
        {
            found1 = true; // bool value if found
        }
        else
        {
            pos1++; // if not found keep looping through each name
        }
    }

    if((found1 == true)) // what to do once you found both the user and the title
    {
        for(int i = 0; i < numBooks; i++)
        {
            if(users[pos1].getRatingAt(i) == 0)
            {
                cout << u << " has not rated any books yet." << endl;
            }
            
            else
            {
                cout << "Here are the books that megan rated" << endl;
                cout << "Title : " << books[i].getTitle();
                cout << "Rating : " << users[pos1].getRatingAt(i) << endl;
                cout << "-----" << endl;
            }
        }
        
    }
    else
    {
        cout << u << " does not exist" << endl;
    }
}

int Library::getRating(string u, string t)
{
    int pos1 = 0;
    int pos2 = 0;
    // string title = t;
    bool found1;
    bool found2;
    string user = lowerCase(u); // calls function to make the stringall lowercase  

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == user) // what to do once found
        {
            found1 = true; // bool value if found
        }
        else
        {
            pos1++; // if not found keep looping through each name
        }
    }
    while(pos2 < numBooks && !found2) // same as the first one but with the tiles
    {
        if(lowerCase(books[pos2].getTitle()) == lowerCase(t)) // lowercase letters for titles too
        {
            found2 = true; // bool value if it is in the array
        }
        else
        {
            pos2++; // if not keep going throught the titles untill found
        }
    }

    if((found1 == true) && (found2 == true)) // what to do once you found both the user and the title
    {
        return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        return -3;
    }
}
void Library::getRecommendations(string u)
{
    int pos1 = 0;
    bool found1;
    double sum = 0;
    double count = 0;

    while(pos1 < numUsers && !found1) // same as the first one but with the tiles
    {
        if(lowerCase(users[pos1].getUsername()) == lowerCase(u)) // lowercase letters for titles too
        {
            found1 = true; // bool value if it is in the array
        }
        else
        {
            pos1++; // if not keep going throught the titles untill found
        }
    }

    if(found1 == true) // what to do once you found the title
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(users[i].getRatingAt(pos1) == '0') continue;
            else
            {
                sum = sum + users[i].getRatingAt(pos1);
                count++;
            }
        }
        // return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        cout << u << " does not exist.";
    }
}




////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////

int main()
{
    Library 17 = Library();
    
    17.readBooks("books.txt");
    17.printAllBooks();
}