#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ZamienWielkoscLiter(const string& tekst)
{
    string wynik;

    for (char znak : tekst)
    {
        if (isupper(znak))
        {
            wynik += tolower(znak);
        }
        else if (islower(znak))
        {
            wynik += toupper(znak);
        }
        else
        {
            wynik += znak;
        }
    }

    return wynik;
}

int main()
{
    string tekst;
    cout << "Podaj tekst do zmiany wielkosci iter: ";
    getline(cin, tekst);

    string tekstZmieniony = ZamienWielkoscLiter(tekst);

    cout << "Tekst przed zamiana wielkosci liter: " << tekst << endl;
    cout << "Tekst po zamianie wielkosci liter: " << tekstZmieniony << endl;

    return 0;
}