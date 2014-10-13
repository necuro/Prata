#include "emp.h"

using namespace std;

//BEGIN abstr_emp
//C-Tor default
abstr_emp::abstr_emp(){}

//C-Tor with all values
abstr_emp::abstr_emp(const std::string& fn,
                    const std::string& ln,
                    const std::string& j) :
    fname(fn), lname(ln), job(j) {}

//C-Tor copy

abstr_emp::abstr_emp(const abstr_emp &em)
{
    fname = em.fname;
    lname = em.lname;
    job = em.job;
}

//Output abstr_emp
void abstr_emp::ShowAll() const
{
    cout << "First Name: " << fname << endl
         << "Last Name: " << lname << endl
         << "Job: " << job << endl;
}

//Input abstr_emp
void abstr_emp::SetAll()
{
    cout << "Enter First Name: ";
    cin >> fname;
    cout << "Enter Last Name: ";
    cin >> lname;
    cout << "Enter job: ";
    cin >> job;
}

//ostream abstr_emp
ostream& operator <<(ostream& os, const abstr_emp& e)
{
    e.ShowAll();
}

//D-Tor
abstr_emp::~abstr_emp() {}
//END abstr_emp


//BEGIN employee
//C-Tor default
employee::employee() : abstr_emp() {}

//C-Tor with all values
employee::employee(const std::string& fn,
                   const std::string& ln,
                   const std::string& j) :
                   abstr_emp(fn, ln, j) {}

//Output. Using base class
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

//Input. Using base class
void employee::SetAll()
{
    abstr_emp::SetAll();
}
//END employee


//BEGIN manager
//C-Tor default
manager::manager() : abstr_emp() {}

//C-Tor with all values
manager::manager(const std::string& fn,
                 const std::string& ln,
                 const std::string& j,
                 int ico) :
    abstr_emp(fn, ln, j), inchargeof(ico) {}

//C-Tor with base object and specific value
manager::manager(const abstr_emp &e, int ico) :
    abstr_emp(e), inchargeof(ico) {}

//C-Tor copy
manager::manager(const manager &m) : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

//Output manager
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Number of employees: " << inchargeof << endl;
}

//Input manager
void manager::SetInChargeOf()
{
    cout << "Enter number of employees: ";
    cin >> inchargeof;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    SetInChargeOf();
}
//END manager


//BEGIN fink
//C-Tor default
fink::fink() : abstr_emp() {}

//C-Tor with all values
fink::fink(const std::string& fn,
           const std::string& ln,
           const std::string& j,
           const std::string& rpo) :
    abstr_emp(fn, ln, j), reportsto(rpo) {}

//C-Tor with base object and specific value
fink::fink(const abstr_emp& e, const std::string& rpo) :
    abstr_emp(e), reportsto(rpo) {}

//C-Tor copy
fink::fink(const fink &e) : abstr_emp(e)
{
   reportsto = e.reportsto;
}

//Output fink
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports owner: " << reportsto << endl;
}

//Input fink
void fink::setReportsTo()
{
    cout << "Enter reports owner: ";
    cin >> reportsto;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    setReportsTo();
}
//END fink

//BEGIN highfink
//C-Tor default
highfink::highfink() : abstr_emp() {}

//C-Tor with all values
highfink::highfink(const string &fn,
                   const string &ln,
                   const string &j,
                   const string &rpo,
                   int ico) :
    abstr_emp(fn, ln, j),
    manager(fn, ln, j, ico),
    fink(fn, ln, j, rpo) {}

//C-Tor with abstract base and specific values for parents
highfink::highfink(const abstr_emp &e,
                   const string &rpo,
                   int ico) :
    abstr_emp(e),
    manager(e, ico),
    fink(e, rpo) {}

//C-Tor with base fink and value for manager
highfink::highfink(const fink &f,
                   int ico) :
    abstr_emp(f),
    manager(f, ico),
    fink(f) {}

//C-Tor with base manager and values for fink
highfink::highfink(const manager &m,
                   string rpo) :
    abstr_emp(m),
    manager(m),
    fink(m, rpo) {}

//C-Tor copy
highfink::highfink(const highfink &h) :
    abstr_emp(h),
    manager(h),
    fink(h) {}

//Output highfink
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Number of employees: " << manager::InChargeOf() << endl;
    cout << "Reports owner: " << fink::ReportsTo() << endl;
}

//Input highfink
void highfink::SetAll()
{
    abstr_emp::SetAll();
    SetInChargeOf();
    setReportsTo();
}
//END highfink



























