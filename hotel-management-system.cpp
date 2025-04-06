#include <iostream>
#include <vector>
#include <string>

using namespace std;

stuct Booking{
    string guestName;
    string roomType;
    int nights;
};

vector<Booking> bookings;
void displayMenu(){
    cout<< "1. Book a room"<<endl;
    cout<<"2. View bookings"<<endl;
    cout<<"3. Checkout (coming soon)"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice:";
}

void bookRoom(){
    Booking newBooking;
    cout<<"Enter guest name:";
    cin.ignore();
    getline(cin, newBooking.guestName);

    cout<<"Enter room type(Single/Double/Suite):";
    getline(cin, newBooking.roomType);

    cout<<"Enter number of nights:";
    cin>> newBooking.nights;
    bookings.push_back(newBooking);
    cout<<"Room booked successfully for"<<newBooking.guestName<<"!"<<endl;
}

void viewBookings(){
    if (bookings.empty()){
        cout<<"No bookings available."<<endl;
    return;
    }
    cout<<"\n---Current Bookings---"<<endl;
    for (size_t i=0; i < bookings.size(); i++){
        cout<<i+1 <<"." <<bookings[i].guestName<<"_"<<
        bookings[i].roomType<<"for"<<
        bookings[i].nights<<"night(s)"<<endl;
    }
}
int main(){
    int choice;

    while (true){
        displayMenu();
        cin>> choice;

        switch (choice){
            case 1:
                bookRoom();
                break;
            case 2:
                viewBookings();
                break;
            case 3:
                cout<<"Checkout feature coming soon!"<<endl;
                break;
            case 4:
                cout<<"Thank you for using the Hotel Management System."<<endl;
        }
    }
    return 0;
}