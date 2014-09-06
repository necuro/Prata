#include <QCoreApplication>
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person* per[3];

    per[0] = new Gunslinger("Ant", "Meln", 15);
    per[1] = new PokerPlayer("Serg", "Kos");
    per[2] = new BadDude("Den", "Bond", 12);

    per[0]->Show();
    per[1]->Show();
    per[2]->Show();

//    delete [] per;



    return a.exec();
}
