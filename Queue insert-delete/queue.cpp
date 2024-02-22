#include <iostream>
using namespace std;

#define max 30

class queue {
    int q[max], front, rear;

public:
    queue() {
        front = -1;
        rear = -1;
    }

    void insert(int value) {
        if (front == 0 && rear == max - 1) {
            cout << "OVERFLOW";
        } else if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        } else if (rear == max - 1 && front != 0) {
            rear = 0;
        } else {
            rear = rear + 1;
        }
        q[rear] = value;
    }

    void remove() {
        if (front == -1) {
            cout << "UNDERFLOW";
        }
        int value = q[front];
        cout << "Deleted element is: " << q[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == max - 1) {
            front = 0;
        } else {
            front = front + 1;
        }
    }

    void display() {
        int i;
        cout << endl;
        if (front == -1 && rear == -1) {
            cout << "Queue is empty";
        } else if (front < rear) {
            for (i = front; i <= rear; i++) {
                cout << q[i] << " "<<endl;
            }
        } else {
            for (i = front; i < max; i++) {
                cout << q[i] << " "<<endl;
            }
            for (i = 0; i <= rear; i++) {
                cout << q[i] << " "<<endl;
            }
        }
    }
};

int main() {
    queue ob;
    while (true) {
        cout << "Enter 1 to insert" << endl;
        cout << "Enter 2 to delete" << endl;
        cout << "Enter 3 to display" << endl;
        cout << "Enter 4 to exit" << endl;

        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter a value to insert: ";
                int n;
                cin >> n;
                ob.insert(n);
                break;
            case 2:
                ob.remove();
                break;
            case 3:
                ob.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice; please try again." << endl;
        }
    }
}

