#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
int oikealuku, arvaus, yritys = 0;
srand(time(0));
oikealuku = rand() % maxnum + 1;
cout << "Arvauspeli " << endl;

do
{

    cout << "Arvaa luku 1-" << maxnum << " valilta" << endl;
    cin >> arvaus;
    yritys++;

    if (arvaus > oikealuku)
        cout << "Liian suuri arvaa uudelleen" << endl;
    else if (arvaus < oikealuku)
        cout << "Liian pieni arvaa uudelleen" << endl;



} while (arvaus != oikealuku);
return yritys;
}

int main()
{
    int maxnum;

    cout << "Anna korkein luku" << endl;
    cin >> maxnum;

    int tries = game(maxnum);

    cout << "Arvasit oikein " << tries << " yrityksen jalkeen" << endl;

    return 0;
}

