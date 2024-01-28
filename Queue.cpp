#include<iostream>
using namespace std;
const int capacity = 4;
int i = 0; // iterator for the Deque of the elements
int j = -1;
int topElement = -1;
int rearElement = -1;
int Queue[capacity];

void Enque();
void Deque();
void TopElement();
void RearElement();

int main() {
    char ch;
    do {
        int choice;
        cout<<"Please make your choice for a specific function\n\n";
       cout<<"1: Enque \n";
       cout<<"2: Deque \n";
       cout<<"3: TopElement \n";
        cout<<"4: RearElement \n";
         cout<<"Enter Choice: ";
       cin>>choice;

        switch (choice) {
            case 1:
                Enque();
                break;
            case 2:
                Deque();
                break;
            case 3:
                TopElement();
                break;
            case 4:
                RearElement();
                break;
            default:
                cout<<"Invalid Input\n";
        }

        cout<<"Try Once again? Enter Y or N\n";
       cin>>ch;

    } while ((ch == 'y') || (ch == 'Y'));

    return 0;
}

void Enque() {
    if (i > capacity-1) {
        cout<<"Queue is Full\n";
    } else {
        while (i <= capacity-1) {
             cout<<"Enter data to Enque: ";
           cin>>Queue[i];
            rearElement++;
            i++;
            break;
        }
    }
}

void Deque() {
    if (j > capacity-1) {
         cout<<"Queue is Empty\n";
    } else {
        while (j < capacity-1) {
            cout<<Queue[j];
            j++;
            topElement++;
            break;
        }
    }
}

void TopElement() {
    if (topElement < 0) {
        printf("Queue is Empty\n");
    } else {
         cout<<Queue[topElement];
    }
}

void RearElement() {
    if (rearElement < 0) {
        cout<<"The Queue is Empty\n";
    } else {
        cout<<Queue[rearElement];
    }
}
