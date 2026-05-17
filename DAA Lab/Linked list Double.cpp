#include <iostream>
#include <vector>
using namespace std;

// Node for Doubly Linked List
struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Insert at end
void insertEnd(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at beginning
void insertBegin(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (head != nullptr)
    {
        head->prev = newNode;
        newNode->next = head;
    }

    head = newNode;
}

// Delete a node by value
void deleteNode(Node*& head, int value)
{
    if (head == nullptr) return;

    Node* temp = head;

    while (temp != nullptr && temp->data != value)
    {
        temp = temp->next;
    }

    if (temp == nullptr) return; // not found

    // If head node
    if (temp == head)
    {
        head = temp->next;
        if (head != nullptr)
            head->prev = nullptr;
    }
    else
    {
        if (temp->prev != nullptr)
            temp->prev->next = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;
    }

    delete temp;
}

// Reverse doubly linked list
void reverseList(Node*& head)
{
    Node* temp = nullptr;
    Node* current = head;

    while (current != nullptr)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr)
        head = temp->prev;
}

// Traversal (using STL vector for simplicity)
vector<int> traverse(Node* head)
{
    vector<int> result;

    Node* temp = head;
    while (temp != nullptr)
    {
        result.push_back(temp->data);
        temp = temp->next;
    }

    return result;
}

// Print function
void printList(Node* head)
{
    vector<int> elements = traverse(head);

    for (int val : elements)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertBegin(head, 5);

    cout << "Doubly Linked List: ";
    printList(head);

    deleteNode(head, 20);
    cout << "After Deletion: ";
    printList(head);

    reverseList(head);
    cout << "After Reverse: ";
    printList(head);

    return 0;
}
