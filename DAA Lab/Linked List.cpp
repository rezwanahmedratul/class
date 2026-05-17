#include <iostream>
#include <vector>
using namespace std;

// Node using struct
struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
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
}

// Insert at beginning
void insertBegin(Node*& head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Delete a node by value
void deleteNode(Node*& head, int value)
{
    if (head == nullptr) return;

    // If head is to be deleted
    if (head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr) return; // not found

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// Reverse linked list
void reverseList(Node*& head)
{
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

// Traversal using STL-like vector for simplicity
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

// Main function
int main()
{
    Node* head = nullptr;

    // Insert operations
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertBegin(head, 5);

    cout << "Linked List: ";
    printList(head);

    // Delete operation
    deleteNode(head, 20);
    cout << "After Deletion: ";
    printList(head);

    // Reverse operation
    reverseList(head);
    cout << "After Reverse: ";
    printList(head);

    return 0;
}
