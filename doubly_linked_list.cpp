#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->prev = nullptr;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void display() {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr) {
            cout << current->data << " ";
        if(current -> next != nullptr)
            temp = current->next;
            current = current->next;
        }
        cout << endl;
    //Reverse traversal
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);

    myList.display();

    return 0;
}

