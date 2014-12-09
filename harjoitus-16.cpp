//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream>
using namespace std;
struct data
{
	int kenka;
	char etu[20], suku[30], osoite[30], posti[9];
	float matka;
};

int main(){

	data info;
	cout << "Laita etunimi, sukunimi, kotiosoite, postinumero, kenkannumero ja koulumatka\n";
	cin >> info.etu >> info.suku >> info.osoite >> info.posti >> info.kenka >> info.matka;

	cout << info.etu << endl << info.suku << endl << info.osoite << endl << info.posti << endl << info.kenka << endl << info.matka << endl << endl;

	
}