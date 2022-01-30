#include <iostream>
#include <type_traits>
#include <cmath>
#include <memory>
#include "Linkedlist.h"
#ifndef HASHTABLE_HASHTABLE_H
#define HASHTABLE_HASHTABLE_H

template <class T>
class HashTable {
private:
    int HASH_TABLE_SIZE;
    int size;
    struct Node{
        T element;
        string number;
        Node * next;
    };
    Node** head;
public:
    /**
    * funkcja hashująca DJB
    *
    * @param T value - hashowane słowo
     * @param int number - numer przypisany do słowa
    * @return hash dla podanych wartości
    */
    int hash(const T& value, string number) //funkcja hashująca DJB
    {
        if  constexpr(std::is_arithmetic_v<T> || std::is_same_v<T,char>){
            return value%HASH_TABLE_SIZE;
        }
        else if constexpr(std::is_same_v<T,std::string>){
            int temp = 0;
            unsigned long hash = 5381;
                for (auto c : value) {
                    hash = (hash << 5) + hash + c;
                }
                for (auto c : number) {
                    hash = (hash << 5) + hash + c;
                }
                return hash % HASH_TABLE_SIZE;
        }
    }
    /**
    * konstruktor Hashtable
    *
    * @param int tablesize - rozmiar hashtable
    *
    */
    explicit HashTable(int tableSize){
        HASH_TABLE_SIZE = tableSize*3;
        size = 0;
        head = new Node*[HASH_TABLE_SIZE];
        for(int i = 0 ; i < HASH_TABLE_SIZE ; i++)
            head[i] = NULL;
    }

    ~HashTable(){
        makeEmpty();
    }
    /**
    * wstawia wartość do hashtable
    *
    * @param T value - słowo
    *@param int number - numer przypisany do słowa
    * @return true przy powodzeniu, false przy błędzie
    */
    bool insert(const T& value, string number){ //wstawia wartość do hashtable
        Node* newNode = new Node();
        newNode->element = value;
        newNode->number = number;
        newNode->next = NULL;
        int slot = hash(value, number);
        Node* k = head[slot];
        if(k != NULL){
        }
        if(k == NULL){
            head[slot] = newNode;
            size++;
            return true;
        }
        if(k->element == newNode->element){
            return false;
        }
        return true;
    }
    /**
    * usuwa wartość z hashtable
    *
    * @param T value - usuwana wartość
    *
    * @return true przy powodzeniu, false przy błędzie
    */
    bool remove(const T& value){ //usuwa wartość z hashtable
        int index = hash(value);

        Node* temp = head[index];
        Node* temp2 = head[index];
        if(temp == NULL)
            return false;

        if constexpr(std::is_same_v<T,std::string>){
            if(temp->element == value)
            {
                head[index] = temp->next;
                delete temp;
                return true;
            }

            while(temp->element != value )
            {
                temp = temp->next;
                if(temp == NULL)
                    break;
            }
            if(temp == NULL)
                return false;

            while(temp2->next != temp)
            {
                temp2 = temp2->next;
            }

            temp2->next = temp->next;
            delete(temp);
            return true;
        }
        else
            return false;
    }
        /**
    * sprawdza, czy w hashtable jest dane słowo
    *
    * @param T value - szukane słowo
    *
    * @return true przy powodzeniu, false przy błędzie
    */
    bool contains(const T& value){ //sprawdza, czy hashtable posiada dane słowo
        int slot = hash(value);

        Node* temp = head[slot];

        if(temp == NULL)
            return false;

        if(std::is_same_v<T,std::string>){
            while(temp->element != value)
            {
                if(temp == NULL)
                    break;

                temp = temp->next;
            }
        }
        if(temp == NULL)
            return false;

        return true;
    }
        /**
    * znajduje słowa dla podanego numeru
    *
    * @param int number - numer
    *
    * @return LinkedList() ze znalezionymi słowami
    */
    LinkedList find(string number){ //pobiera z hashtable wszystkie słowa o podanym numerze
        LinkedList list;
        Node* temp = head[0];
        for(int i= 0; i < HASH_TABLE_SIZE ; i++) {
            temp = head[i];
            if(temp == NULL){
                continue;
            }
            if(temp->number == number){
                list.push_back(temp->element);
            }
        }
        return list;
    }

    /**
    * czyści hashtable
    *
    *
    *
    *
    */
    void makeEmpty(){ //czyści hashtable
        for(int i = 0 ; i < HASH_TABLE_SIZE; i ++){
            Node* temp = head[i];
            Node* temp2;
            while(temp != NULL){
                temp2 = temp;
                temp = temp->next;
                delete temp2;
            }
        }
    }
    /**
    * wyświetla hashtable
    *
    *
    *
    *
    */
    void printHashTable(){ //wyświetla hashtable
        for(int i = 0 ; i < HASH_TABLE_SIZE; i ++){
            Node* temp = head[i];
            while(temp != NULL){
                std::cout << "Index: " << i << " Value: " << temp->element << std::endl;
                temp = temp->next;
            }
        }
    }
};


#endif //HASHTABLE_HASHTABLE_H
