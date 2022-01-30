//
// Created by Konrad on 2022-01-29.
//
#include "Hashtable.h"
#ifndef HASHTABLE_T9DICTIONARY_H
#define HASHTABLE_T9DICTIONARY_H
using namespace std;

class T9Dictionary {
public:
    T9Dictionary(string address);
    virtual ~T9Dictionary();
    LinkedList getWords(string number);
private:
    void generateDictionary(string address);
    HashTable<string> * table;

};


#endif //HASHTABLE_T9DICTIONARY_H
