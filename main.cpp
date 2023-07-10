#include <iostream>
void uzupelnij_tablice(int *tab, int ile);
void wypisz_tablice(int *tab, int ile);
int licz_sume_tablicy(int *tab, int ile);
int znajdz_najwieksza_wartosc(int *tab, int ile);
int* stworz_tablice(int ile);
int *odwroc_tablice(int *tab, int ile);


using namespace std;

int main()
{
    cout << "ile chcesz stworzyc elementow w tablicy?";
    int ile;
    cin >> ile;
    int * tablica = stworz_tablice(ile);
    uzupelnij_tablice(tablica, ile);
    wypisz_tablice(tablica, ile);
    int* tablica2 = odwroc_tablice(tablica, ile);
    cout << "tablica2 to:  " << tablica2 <<endl;

    delete[] tablica2;
    delete[] tablica;
    return 0;
}

int* stworz_tablice(int ile){
    int * array = new int[ile];
    return array;
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
    int najwieksza_wartosc = 0;
    int najw;
    for(int i = 0; i<ile; i++){
        if(tab[i] > najwieksza_wartosc){
            najwieksza_wartosc = tab[i];
        }
    }
    return najwieksza_wartosc;
}

int *odwroc_tablice(int *tab, int ile){
    int temp = 0;
    int new_array[ile];
    for(int i = 0; i<ile; i++){
        new_array[ile -i -1] = tab[i];
        cout << "iteracja nr: " << i << "wartosc: " << new_array[i] <<endl;
    }
    return new_array;
}

