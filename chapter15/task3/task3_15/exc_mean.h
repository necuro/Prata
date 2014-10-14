// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>

class bad_hmean : public std::logic_error
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : logic_error(""),v1(a), v2(b){}
    virtual const char* what() const throw();
};

const char* bad_hmean::what() const throw()
{
    std::ostringstream strs;
    strs << v1;
    std::string str = "hmean(";
    str += strs.str();
    str += ", ";
    strs.str("");
    strs << v2;
    str += strs.str();
    str += "): invalid arguments: a = -b\n";

return str.c_str();
}

class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) :  logic_error(""), v1(a), v2(b){}
    virtual const char* what() const throw();
};

const char* bad_gmean::what() const throw()
{
return "gmean() arguments should be >= 0\n";
}
