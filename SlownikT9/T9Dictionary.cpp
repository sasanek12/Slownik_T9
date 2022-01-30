//
// Created by Konrad on 2022-01-29.
//

#include <fstream>
#include <vector>
#include "T9Dictionary.h"
using namespace std;

/*! \mainpage Słownik T9
 *
 *Program implementuje słownik T9 przy wykorzystaniu struktur HashTable oraz LinkedList.\n
 *Struktury są oparte na programach pisanych na zajęcia z dodatkowymi modyfikacjami pozwalającymi na obsłużenie Słownika.\n
 * Program pobiera bazę słów wykorzystywanych w słowniku z pliku "słowa.txt" który należy umieścić w głównym folderze programu.\n
 */



/**
* konstruktor słownika
*
* @param string address - lokalizacja pliku txt ze słowami do wczytania
*/
T9Dictionary::T9Dictionary(string address) { //konstruktor słownika, przyjmuje adres pliku txt ze słowami
    generateDictionary(address);


}

T9Dictionary::~T9Dictionary() { //destruktor słownika

}
/**
* generator słownika
*
* @param string address - lokalizacja pliku txt ze słowami do wczytania
*
*/
void T9Dictionary::generateDictionary(string address) { //generuje słownik dla podanego adresu pliku.txt
    string line;
    int slownikSize = 0;
    ifstream file;
    file.open(address);
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            slownikSize++;
        }
        file.close();
    }
    table = new HashTable<string>(slownikSize);
    ifstream file2;
    file2.open(address);
    if (file2.is_open())
    {
        string number= "";
        vector<char> v;
        while ( getline (file2,line) )
        {
            v.insert(v.end(),line.begin(), line.end());
            for(int i=0; i< v.size(); i++){

                switch (v.at(i)) {
                    case 'a':
                        number += "2";
                        break;
                    case 'b':
                        number += "2";
                        break;
                    case 'c':
                        number += "2";
                        break;
                    case 'd':
                        number += "3";
                        break;
                    case 'e':
                        number += "3";
                        break;
                    case 'f':
                        number += "3";
                        break;
                    case 'g':
                        number += "4";
                        break;
                    case 'h':
                        number += "4";
                        break;
                    case 'i':
                        number += "4";
                        break;
                    case 'j':
                        number += "5";
                        break;
                    case 'k':
                        number += "5";
                        break;
                    case 'l':
                        number += "5";
                        break;
                    case 'm':
                        number += "6";
                        break;
                    case 'n':
                        number += "6";
                        break;
                    case 'o':
                        number += "6";
                        break;
                    case 'p':
                        number += "7";
                        break;
                    case 'q':
                        number += "7";
                        break;
                    case 'r':
                        number += "7";
                        break;
                    case 's':
                        number += "7";
                        break;
                    case 't':
                        number += "8";
                        break;
                    case 'u':
                        number += "8";
                        break;
                    case 'v':
                        number += "8";
                        break;
                    case 'w':
                        number += "9";
                        break;
                    case 'x':
                        number += "9";
                        break;
                    case 'y':
                        number += "9";
                        break;
                    case 'z':
                        number += "9";
                        break;

                }

            }
            table->insert(line,number);
            number = "";
            v.clear();
        }
        file2.close();
    }

}

LinkedList T9Dictionary::getWords(string number) {
    LinkedList result = table->find(number);
    return result;
}
