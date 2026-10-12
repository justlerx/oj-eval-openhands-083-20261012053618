#include <iostream>

// Node structure for the singly circular linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    int n, m;
    std::cin >> n >> m;
    
    // Create a circular linked list with n nodes
    if (n == 0) return 0;
    
    Node* head = new Node(1);
    Node* current = head;
    
    // Create nodes with values 2 to n
    for (int i = 2; i <= n; i++) {
        Node* newNode = new Node(i);
        current->next = newNode;
        current = newNode;
    }
    
    // Connect the last node to the first node to make it circular
    current->next = head;
    
    // Set up pointers for deletion
    Node* prev = current;  // prev points to the last node
    current = head;        // current points to the first node
    
    // Process n-1 eliminations (we need to delete n-1 nodes)
    for (int i = 0; i < n - 1; i++) {
        // Move m-1 steps forward (since we're already on the first node to count)
        for (int j = 0; j < m - 1; j++) {
            prev = current;
            current = current->next;
        }
        
        // Delete the current node
        Node* toDelete = current;
        prev->next = current->next;
        int deletedValue = current->data;
        current = current->next;
        delete toDelete;
        
        std::cout << deletedValue << std::endl;
    }
    
    // Print the last remaining node
    std::cout << current->data << std::endl;
    
    // Clean up the last node
    delete current;
    
    return 0;
}