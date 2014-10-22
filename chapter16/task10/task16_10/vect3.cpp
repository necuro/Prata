// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool FillReview(Review* rr);
bool Expensive(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
void ShowReview(const std::shared_ptr<Review>& rr);

int main()
{
    srand(time(NULL));
    vector< std::shared_ptr<Review> > books;
    vector< std::shared_ptr<Review> > booksTmp;
    Review* temp = new Review;
    while (FillReview(temp))
        books.push_back(make_shared<Review>(*temp));

    if (books.size() > 0)
    {
    cout << "Select print type:\n"
         << "o: Original sequence\n"
         << "a: Alphabetical sequence\n"
         << "r: Rating sequence\n"
         << "g: Grow in price\n"
         << "l: Low in price\n"
         << "q: Quit\n"
         << "You choice:";
    char choice;
    while((cin >> choice) && (choice != 'q'))
    {
    booksTmp.clear();
    booksTmp.assign(books.begin(), books.end());
    while( !strchr("oarglq", choice) )
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Make your choise(o, a, r, g, l, q): ";
        cin >> choice;
    }

        switch(choice)
        {
//Original sequence
        case 'o':
            cout << "Thank you. You entered the following "
                 << books.size() << " ratings:\n"
                 << "Rating\tBook\tPrice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
//Sorted by alphabetocal titles
        case 'a':
            sort(booksTmp.begin(), booksTmp.end());
            cout << "Sorted by title:\nRating\tBook\tPrice\n";
            for_each(booksTmp.begin(), booksTmp.end(), ShowReview);
            break;
//Sorted by rating sequense
        case 'r':
            sort(booksTmp.begin(), booksTmp.end(), worseThan);
            cout << "Sorted by rating:\nRating\tBook\tPrice\n";
            for_each(booksTmp.begin(), booksTmp.end(), ShowReview);
            break;
//Sorted by price (more expensive)
        case 'g':
            sort(booksTmp.begin(), booksTmp.end(), Expensive);
            cout << "Sorted by price(Exp):\nRating\tBook\tPrice\n";
            for_each(booksTmp.begin(), booksTmp.end(), ShowReview);
            break;
//Sorted by price (more cheaper)
        case 'l':
            sort(booksTmp.begin(), booksTmp.end(), Expensive);
            cout << "Sorted by price(Exp):\nRating\tBook\tPrice\n";
            for_each(booksTmp.rbegin(), booksTmp.rend(), ShowReview);
            break;
//Quit
        case 'q':
            cout << "Bye.\n";
            return 0;
        default:
            cout << "Hello David!!!\n";
            break;
        };
    cout << "Make your choise(o, a, r, g, l, q): ";
    }
    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";


return 0;
}


bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
    if ( r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}


bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool Expensive(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if(r1->price > r2->price)
        return true;
    return false;
}


bool FillReview(Review* rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr->title);
    if (rr->title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    rr->rating = rand() % 100 + 1;
    std::cout << rr->rating << endl;
    std::cout << "Enter price: ";
    rr->price = rand() % 100 + 1;
    std::cout << rr->price << endl;
    return true;
}

void ShowReview(const std::shared_ptr<Review>& rr)
{
    std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}
