#ifndef UNTITLED2_LINKEDLIST_H
#define UNTITLED2_LINKEDLIST_H

#include <stddef.h>
#include <string>
using namespace std;
class LinkedList{
private:
    int size =0;
    struct Node{
        string value;
        Node *next;
    };
    Node *header;
public:
    LinkedList();
    virtual ~LinkedList();
    bool insert(int index, string a); //wstawia do listy, zwraca true lub false
    void toString(); //wyświetla listę
    int getLength(); //zwraca długość listy
    string retrieve(int index); //zwraca wartość o podanym indexie
    void remove_value(string value); //usuwa wartość z listy
    Node *first(); //zwraca wskaźnik na pierwszą wartość
    Node *last(); //zwraca wskaźnik na ostatnią wartość
    bool remove (int index); //usuwa wartość pod indexem
    bool isEmpty(); //usuwa wszystkie elementy w liście
    bool push_back(string element); //wstawia wartość na koniec listy
};


#endif //UNTITLED2_LINKEDLIST_H
