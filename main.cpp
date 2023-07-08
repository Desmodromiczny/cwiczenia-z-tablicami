#include <iostream>
void uzupelnij_tablice(int *tab, int ile);
void wypisz_tablice(int *tab, int ile);
int licz_sume_tablicy(int *tab, int ile);
int znajdz_najwieksza_wartosc(int *tab, int ile);


using namespace std;

int main() {

    cout << "ile chcesz stworzyc elementow w tablicy?";
    int ile;
    cin >> ile;
    //dynamiczna alokacja tablicy
    int *tablica = new int[ile];
    uzupelnij_tablice(tablica, ile);
    wypisz_tablice(tablica, ile);
    cout << "suma to " << licz_sume_tablicy(tablica, ile);
    return 0;
}


void uzupelnij_tablice(int *tab, int ile)
{
    for(int i =0; i<ile; i++) {
        *(tab + i) = i;
    }
}

void wypisz_tablice(int *tab, int ile)
{
    for(int i = 0; i< ile; i++) {
        cout << "element nr: " << i << "to: " << *(tab + i) << endl;
    }
}

int licz_sume_tablicy(int *tab, int ile){
    int suma = 0;
    for(int i = 0; i<ile;i++){
        suma = suma + *(tab + i);
    }
    return suma;
}

int znajdz_najwieksza_wartosc(int *tab, int ile){
    int najwieksza_wartosc;
    for(int i = 0; i>ile; i++){

    }
    return najwieksza_wartosc;
}
