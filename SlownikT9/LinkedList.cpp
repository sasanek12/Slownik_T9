
#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;
LinkedList::LinkedList(){
    header = nullptr;
    size = 0;
}

LinkedList::~LinkedList() = default;

/**
* wstawia wartośc do Linkedlist
*
* @param int index - index wstawiania
* @param string a - string ze wstawianą wartością
*
* @return true przy powodzeniu, false przy błędzie
*/
 bool LinkedList::insert(int index,string a) {
    Node* new_node = new Node();
     if(!(index < size+1 || index < 0)){
         return false;
     }
    new_node->value = a;
    new_node->next = header;
    header = new_node;
    return true; //
}
/**
* wyświetla LinkedList
*
*
*
*
*
*/
 void LinkedList::toString() {
     Node* temp;
     temp = header;
     std::cout << "Lista: " << std::endl;
     while (temp != nullptr)
     {
         std::cout<<" "<<temp->value;
         temp = temp->next;
     }
     std::cout << std::endl;
     delete temp;
}
/**
* usuwa wartośc z Linkedlist
*
* @param int index - index usuwanej wartości
*
*
* @return true przy powodzeniu, false przy błędzie
*/
bool LinkedList::remove(int index) {
    Node* prev = nullptr;
    Node*temp = header;
    if(index == 0){
        header = temp->next;
        delete temp;
        return true;
    }
    else {
        for (int i = 0; i < index; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;
        return true;
    }
}
/**
* sprawdza czy LinkedList jest pusta
*
*
*
*
* @return true przy powodzeniu, false przy błędzie
*/
bool LinkedList::isEmpty() {
    if(header == nullptr){
        return true;
    }
    else {
        return false;
    }
}
/**
* zwraca długość LinkedList
*
*
*
*
* @return int długośc listy
*/
int LinkedList::getLength() {
    Node* temp = header;
    int i;
    for(i=0; temp->next != nullptr; i++){
        temp = temp->next;
    }
    i++;
    return i;
}
/**
* zwraca element z Linkedlist
*
* @param int index - index elementu
*
*
* @return element
*/
string LinkedList::retrieve(int index) {
    Node* temp = header;
    for(int i=0; i != index; i++){
        temp = temp->next;
    }
    return temp->value;
}
/**
* usuwa wartość Linkedlist
*
* @param string value - usuwana wartość
*
*
* @return true przy powodzeniu, false przy błędzie
*/
void LinkedList::remove_value(string value) {
    Node* temp = header;
    Node* next = new Node;
    Node* prev = new Node;
    while(temp->next != nullptr){
        if(temp->value == value){
            delete temp;
            prev->next = next;
            temp = next;
            next = temp->next;
        }
        else {
            prev = temp;
            temp = temp->next;
            next = temp->next;
        }
    }
}
/**
* zwraca wskaźnik na pierwszy element
*
* @return wskaźnik
*/
LinkedList::Node *LinkedList::first() {
    return header;
}
/**
* zwraca wskaźnik na ostatni element
*
* @return wskaźnik
*/
LinkedList::Node * LinkedList::last() {
    Node* temp = header;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    return temp;
}
/**
* wstawia element na koniec LinkedList
*
* @param string element - wstawiana wartość
*
*
* @return true przy powodzeniu, false przy błędzie
*/
bool LinkedList::push_back(string element){
    Node* new_node = new Node();
    Node* last = header;
    new_node->value  = element;
    new_node->next = nullptr;
    if(header == nullptr){
        header = new_node;
        return true;
    }
    while(last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
    return true;
}


