#pragma once
#include <iostream>

template <typename T>
struct Node {
public:
    T value;
    struct Node<T> *next = nullptr;
};

template <typename T>
class LinkedList {
private:
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    LinkedList();

    T search(int addr);
    void insert(int addr, T _value);
    void erase(int addr);
    int get_size();
    void push_back(T _value);
    // void pop_back();
};

template <typename T>
T LinkedList<T>::search(int addr) {
    Node<T> *curr = head;
    for (int i = 0; i < addr; i++) {
        curr = curr->next;
    }

    return curr->value;
}

template <typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <typename T>
void LinkedList<T>::insert(int addr, T _value) {
    Node<T> *new_node = new Node<T>;

    size++;
    new_node->value = _value;
    new_node->next = nullptr;

    Node<T> *curr = head;
    for (int i = 0; i < addr; i++) {
        curr = curr->next;
    }

    if (curr == head) {
        head = new_node;
        tail = new_node;
    }
    else if (curr == nullptr) {
        tail->next = new_node;
        tail = new_node;
    }
    else {
        new_node->next = curr->next;
        curr->next = new_node;
    }
}

template <typename T>
void LinkedList<T>::erase(int addr) {
    Node<T> *curr = head;
    Node<T> *prev = nullptr;

    for (int i = 0; i < addr; i++) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == head) {
        if (size <= 1) {
            delete curr;
            head = nullptr;
            tail = nullptr;
        }
        else {
            head = curr->next;
            delete curr;
        }
    }
    else if (curr == tail) {
        prev->next = curr->next;
        delete curr;
        tail = prev;
    }
    else {
        prev->next = curr->next;
        delete curr;
    }
    size--;
}

template <typename T>
int LinkedList<T>::get_size() {
    return size;
}

template <typename T>
void LinkedList<T>::push_back(T _value) {
    Node<T> *new_node = new Node<T>;

        new_node->next = nullptr;
        new_node->value = _value;

        if (tail == nullptr) {
            head = new_node;
            tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
        size++;
}