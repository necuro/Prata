#include <iostream>

double* fill_array(double ar[], int* limit);
void show_array(const double*, const double*);
void revalue(double, double*, const double*);

int main()
{
    int Max = 5;
    using namespace std;
    double properties[Max];

    fill_array(properties, &Max);

    show_array(properties, properties + Max);

    if (Max > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, properties + Max);
        show_array(properties, properties + Max);
    }

    cout << "Done\n";
    return 0;
}

double* fill_array(double ar[], int* limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i != *limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           *limit = i;
           break;
        }
        else if (temp < 0)     // signal to terminate
        { 
            *limit = i;
            break;
        }
        ar[i] = temp;
    }

    *limit = i;
    return  &ar[i + 1];
}

// the following function can use, but not alter,
// the array whose address is ar

void show_array(const double* begin,const double* end)
{
    using namespace std;
    const double* pt;
    int i = 0;
    for ( pt = begin; pt != end; pt++ )
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *pt << endl;
    }
}


// multiplies each element of ar[] by r
void revalue(double r, double* begin, const double* end)
{
//    double tmp = *begin;
    double* pt = begin;
    for ( pt; pt != end; pt++ )
        *pt *= r;
}

