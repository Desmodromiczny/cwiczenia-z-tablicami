#include <iostream>
#include <vector>



void uzupelnij_tablice(int *tab, int ile);
void wypisz_tablice(int *tab, int ile);
int licz_sume_tablicy(int *tab, int ile);
int znajdz_najwieksza_wartosc(int *tab, int ile);
int* stworz_tablice(int ile);
int* odwroc_tablice(int *tab, int ile);
bool palindrome(int *tab, int ile);
int NWD(int liczba1, int liczba2);
std::vector<int> zamiana_binarna(int liczba);

using namespace std;

vector<int> zamiana_binarna(int liczba){
    vector<int> liczba_binarna;
    while (liczba > 0){
        liczba_binarna.push_back(liczba % 2);
        liczba /= 2;
    }
    return liczba_binarna;
}



int main()
{
    /*cout << "ile chcesz stworzyc elementow w tablicy?";
    int ile;
    cin >> ile;
    int * tablica = stworz_tablice(ile);
    uzupelnij_tablice(tablica, ile);
    wypisz_tablice(tablica, ile);
    int* tablica2 = odwroc_tablice(tablica, ile);
    //wypisz_tablice(tablica2, ile);
    cout << palindrome(tablica, ile);
    delete[] tablica2;
    delete[] tablica;

*/
    //binarna liczba
    int liczba = 10;
    vector<int> binarna = zamiana_binarna(liczba);
    for (int i = 0 ; i < binarna.size(); i++){
        cout << binarna[i];
    }

    //NWD
    NWD(282, 78);
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
    int* new_array = new int[ile];
    for(int i = 0; i<ile; i++){
        new_array[ile -i -1] = tab[i];
    }
    return new_array;
}

bool palindrome(int *tab, int ile){
    int* temp = new int[ile];
    for(int i = 0; i<ile; i++){
        if(tab[i] == tab[ile-i-1])
        {
            continue;
            if(i=ile){
                return true;
            }
        }
        else return false;
    }

}

long int potega(int p, int w) {
    if (w == 0) return 1;
    else return p * potega(p, w - 1);
}

long int fib(int n) {
    if (n == 1 || n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}

long int silnia(int n) {
    if (n==0) return 1;
    else return n*silnia(n-1);

}

int NWD(int liczba1, int liczba2){
    //algorytm euklidesa
    int pom1;
    int temp = 0;
    if (liczba1 % liczba2 == 0){
        cout << "NWD TO: " << liczba2 << endl;
        return 1;
    }
    else{
        do {
            temp = liczba1 % liczba2;
            if(temp != 0) {
                pom1 = liczba2;
                liczba1 = pom1;
                liczba2 = temp;
                cout << temp << endl;
            }
            if(temp == 0){
                cout << "NWD = " << liczba2;
            }
        }
        while (temp != 0);
    }
}


int liczby_pierwsze(int ilosc_liczb){
    //funkcja, która znajdzie wszystkie liczby pierwsze w zakresie od 2 do podanej przez uzytkownika
    // czyli liczba ktora jest > 1 i ma tylko dwa dzielniki: 1 i samą siebie
    int* tablica = new int[ilosc_liczb];
    for(int i = 0; i < ilosc_liczb; i++)
    {
        tablica[i] = i;
    }
    for(int k = 0; k < ilosc_liczb; k++){
        if(tablica[k] % 3 )
    }
    delete[] tablica;




}



