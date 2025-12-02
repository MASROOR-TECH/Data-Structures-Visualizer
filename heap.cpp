#include <vector>

extern "C" {

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertNode(int value) {
    Node* n = new Node();
    n->data = value;
    n->next = head;
    head = n;
}

int getListSize() {
    int count = 0;
    Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

int getValueAt(int index) {
    int i = 0;
    Node* temp = head;
    while (temp) {
        if (i == index)
            return temp->data;
        i++;
        temp = temp->next;
    }
    return -1;
}

}
