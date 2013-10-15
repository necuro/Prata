#include <iostream>
#include <string>

int main()
{
   std::string lName;
   std::string fName;
   char grade;
   int age;

   std::cout << "What is your first name? ";
   getline(std::cin, lName);
   std::cout << "What is your last name? ";
   getline(std::cin, fName);
   std::cout << "What letter grade do you deserve? ";
   std::cin >> grade;
   std::cout << "What is your age? ";
   std::cin >> age;

   std::cout << "Name: " << lName + ", " + fName << std::endl;
   std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
   std::cout << "Age: " << age << std::endl;

   return 0;
}
