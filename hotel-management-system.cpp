#include <iostream>
#include <vector>
#include <string>

using namespace std;

class HotelSystem{
    struct Booking{
    string name;
    string roomType;
    int nights;
    };

    vector <Booking> bookings;

    void run() {
        int choice;
        while (true) {
            showMenu();
            choice = getUserChoice(choice);
            if (choice == 4)
                break;
        }
    }
    void showMenu() {
        cout << "\n--- Hotel Menu ---\n"
             << "1. Book Room\n"
             << "2. View Bookings\n"
             << "3. Checkout\n"
             << "4. Exit\n"
             << "Choose: ";
    }

    int getUserChoice() {
        int choice;
        cin >> choice;
        return choice;
    }

    void handleChoice(int choice) {
        switch (choice) {
            case 1: bookRoom();
            break;

            case 2: viewBookings();
            break;

            case 3: checkout();
            break;

            case 4: cout << "Goodbye\n";
            break;

            default: cout << "Invalid option\n";
        }
    }

    void bookRoom() {
        Booking b = getBookingDetails();
        bookings.push_back(b);
        cout << "Booked for" << b.name << "!\n";
    }

    Booking getBookingDetails() {
        Booking b;
        cin.ignore();
        cout << "Guest name: ";
        getline(cin, b.name);
        cout << "Room Type: ";
        getline(cin, b.roomType);
        cout << "Nights: ";
        cin >> b.nights;
        return b;
    }

    void viewBookings() {
        if (bookings.empty()) {
            cout << "No booking yet.\n";
            return;
        }
        cout << "In---Bookings---\n";
        for (int i = 0; i < bookings.size(); ++i) {
            printBooking(i, bookings [i];
        }
    }

    void printBooking (int index, const Booking& b) {
        cout << index + 1 << "." << b.name << "_" << b.roomType << "_" << b.nights << "night(s)\n";
    }

    void checkout() {
        if (bookings.empty()) {
            cout << "No bookings to checkout.\n";
            return;
    }

        viewBookings();
        int num = getCheckoutNumber();
        if (num < 1 || num > bookings.size()) {
            cout << "Invalid number.\n";
            return;
        }

        cout << "Checked out" << bookings[num -1].name << "\n";

        bookings.erase(bookings.begin() + num -1);
        }

        int getCheckoutNumber(){
            int num;
            cout << "Enter booking number to checkout:";
            cin >> num;
            return num;
        }
};

int main() {
    HotelSystem hotel;
    hotel.run();
    return 0;
}
            
