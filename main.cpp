// Zadanie maturalne

// Litera grecka i jest to symbol oznaczający wiele rzeczy, np. różnicę między dwoma wyrażeniami lub
// liczbami. Ze wzoru Delta jest potrzebna do obliczenia miejsc zerowych funkcji kwadratowych.

// Rozwiązanie:
#include <iostream>

using namespace std;

int delta(int a,int b,int c)
{
	int d;
	d=b*b-4*a*c;
	return d;
}
main()
{
	int a,b,c;
	cout<<"Podaj a ";
	cin>>a;
	cout<<"Podaj b ";
	cin>>b;
	cout<<"Podaj c ";
	cin>>c;
	cout<<"delta = "<<delta(a,b,c);
}

// Spróbuj sam napisać podobny kawałek kodu.
