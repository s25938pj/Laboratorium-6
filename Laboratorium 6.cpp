#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <sstream>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::sort;
using std::stringstream;
using std::endl;

struct student
{
    string imie;
    int ocenaInformatyka;
    int ocenaMatematyka;
    int ocenaBiologia;
    int ocenaJPolski;
};
struct student2
{
    unsigned int numer = 0;
    string imie;
    string nazwisko;
};
bool sortowaniePoNumerze(student2 i, student2 j)
{
    return(i.numer < j.numer);
}

void Zadanie1()
{
    /*
     Napisz program, który obliczy, ile jest liczb naturalnych (tj.
	całkowitych, dodatnich) nie większych od n które są podzielne przez
	5 ale nie są podzielne przez 3. Liczba n ma być pobrana od
	użytkownika.
     */
    int n, x;
	int y = 0;
    cout << "Program obliczajacy liczbe podzielna przez 5 i niepodzielna przez 3\n";
    cout << "Podaj liczbe\n";
    cin >> n;

    n = n + 1;
    auto tab = new int[n];
    for(int i=0; i<n; i++)
    {
        tab[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (tab[i] % 5 == 0 && tab[i] % 3 != 0)
        {
            y++;
        }
    }
    n = n - 1;
    cout << "Liczba " << n << " jest podzielna przez 5, ale nie jest przez 3 " << y << " razy\n";
    delete[] tab;

}
void Zadanie2()
{
    /*
     Napisz program, który będzie symulował grupę 6 uczniów z kilku
	równoległych klas i ich wyniki w nauce z czterech przedmiotów. Program
	powinien wczytać sześciu uczniów o następujących właściwościach:
	• imię ucznia;
	• oceny z informatyki, matematyki, biologii i języka polskiego,
	a potem odpowiadał na pytania o ocenę z danego przedmiotu, gdzie
	najpierw pobiera od użytkownika numer ucznia, a następnie – numer
	przedmiotu.
     */
    struct student index[6];
    int i, zapytanie, nrUcznia, nrPrzedmiotu;

    for (i = 0; i < 6; i++)
    {
        cout << "Podaj imie ucznia nr " << i + 1 << ": ";
        cin >> index[i].imie;
        cout << "Podaj ocene z Informatyki: ";
        cin >> index[i].ocenaInformatyka;
        cout << "Podaj ocene z Matematyki: ";
        cin >> index[i].ocenaMatematyka;
        cout << "Podaj ocene z Biologi: ";
        cin >> index[i].ocenaBiologia;
        cout << "Podaj ocene z Jezyka Polskiego: ";
        cin >> index[i].ocenaJPolski;
        cout << "\n";
    }
    cout << "Podaj liczbe zapytan";
    cin >> zapytanie;
    cout << "\n";

	for (i = 0; i < zapytanie; i++)
	{
		cout << "Podaj nr ucznia[1..6]: ";
		cin >> nrUcznia;
		cout << "Podaj nr przedmiotu[1..4]: ";
		cin >> nrPrzedmiotu;
       cout << "Uczen: " << index[nrUcznia - 1].imie;

		if (nrPrzedmiotu == 1)
		{
            cout << ", Ocena z Informatyki: " << index[nrUcznia - 1].ocenaInformatyka << "\n";
		}
		if (nrPrzedmiotu == 2)
		{
            cout << ", Ocena z Matematyki: " << index[nrUcznia - 1].ocenaMatematyka << "\n";
		}
		if (nrPrzedmiotu == 3)
		{
            cout << ", Ocena z Biologi: " << index[nrUcznia - 1].ocenaBiologia << "\n";
		}
		if (nrPrzedmiotu == 4)
		{
            cout << ", Ocena z Jezyka Polskiego: " << index[nrUcznia - 1].ocenaJPolski << "\n";
		}
	}
	cout << "\n\n";

    
}
void Zadanie3()
{
    /*
     Napisz program do sortowania wektora struktur studentów według
	numerów indeksów. Struktura Student ma zawierać informacje o:
	imieniu, nazwisku i numerze indeksu.
     */
    vector<student2> vec =
    {
        {72165, "Leo", "Kowal"},
        {783,"Maciej","Demp"},
        {260000, "Alicja","Kolecka"},
        {15, "Katarzyna", "Szczaw"},
    };
    cout << "Wektor przed sortowaniem\n\n";
    for (auto const array:vec)
    {
        cout << array.numer << " " << array.imie << " " << array.nazwisko << "\n";
    }
    sort(vec.begin(), vec.end(), sortowaniePoNumerze);
    cout << "\n Wektor posortowany sortowaniem \n\n";
    for (auto const array : vec)
    {
        cout << array.numer << " " << array.imie << " " << array.nazwisko << "\n";
    }
}

void Zadanie4()
{
    /*
     Napisz program, który będzie dokonywał konkatenacji
	podanego przez użytkownika stringa n razy. Liczbę n także
	należy pobrać od użytkownika. 
	*/
    
    int ileRazyPolaczyc;
    string wyraz;

    cout << "Program dokonujacy konkatenacji podanego wyrazu.\n";
    cout << "Podaj dowolny wyraz: ";
    cin >> wyraz;
    cout << "Podaj ile razy chcesz polaczyc ze soba ten wyraz: ";
    cin >> ileRazyPolaczyc;

    if (ileRazyPolaczyc % 2 == 0) {

        for (int i = 0; i < ileRazyPolaczyc / 2; i++) {

            cout << wyraz ;
        }
    }
    else {

        for (int i = 0; i < ileRazyPolaczyc; i++) {

            cout << wyraz;
        }
    }

    cout << "\n";
    
}
int main()
{
    Zadanie1();
    Zadanie2();
    Zadanie3();
    Zadanie4();
}

