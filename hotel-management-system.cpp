#include <iostream>
#include <vector>
#include <string>

using namespace std;

class HotelSystem{
Private:
    struct Booking{
    String name, roomType;
    int nights;
};

vector <Booking> bookings;
Public:
    void run(){
        int choice;
        while(true){
            showMenu();
            choice =
getUserChoice();
            handlechoice(choice);
            if (choice == 4)
                break;
        }
}
Private:
    void showMenu() {
        cout << "\n--- Hotel Menu ---\n"
            <<"1. Book Room\n"
            <<"2. View Bookings\n"
            <<"3. Checkout\n"
            <<"4. Exit\n"
            <<"Choose:";
}
    int getUserChoice(){
        int choice;
        cin>> choice;
        return choice;
    }
    void handleChoice(int choice){
        switch (choice){
            case 1: bookRoom();
                break;
            case 2: viewBookings();
                break;
            case 3: checkout();
                break;
            case 4: cout << "Goodbye!\n";
                break;
            default: cout << "Invalid option.\n";
        }
    }
    void bookRoom(){
        Booking b = getBookingDetails();
        bookings.push_back(b);
        cout<< "Booked for " << b.name << "!\n";
    }
    Booking getBookingDetails(){
        Booking b;
        cin.ignore();
        cout <<
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
