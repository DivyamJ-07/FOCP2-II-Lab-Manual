#include <iostream>
#include <string>
using namespace std;

class TicketManager {
private:
    int bookingStatus[100][100];
    int ticketsBooked[100];

public:
    TicketManager() {
        for (int i = 0; i < 100; i++) {
            ticketsBooked[i] = 0;
            for (int j = 0; j < 100; j++) {
                bookingStatus[i][j] = 0;
            }
        }
    }

    bool bookTicket(int userId, int movieId) {
        if (bookingStatus[userId][movieId] == 1 || ticketsBooked[movieId] >= 100)
            return false;

        bookingStatus[userId][movieId] = 1;
        ticketsBooked[movieId]++;
        return true;
    }

    bool cancelTicket(int userId, int movieId) {
        if (bookingStatus[userId][movieId] == 0)
            return false;

        bookingStatus[userId][movieId] = 0;
        ticketsBooked[movieId]--;
        return true;
    }

    bool checkBooking(int userId, int movieId) {
        return bookingStatus[userId][movieId] == 1;
    }

    int availableSeats(int movieId) {
        return 100 - ticketsBooked[movieId];
    }

    void processQueries() {
        int totalQueries;
        cin >> totalQueries;

        while (totalQueries--) {
            string command;
            cin >> command;

            if (command == "BOOK") {
                int userId, movieId;
                cin >> userId >> movieId;
                cout << bookTicket(userId, movieId) << endl;
            }

            else if (command == "CANCEL") {
                int userId, movieId;
                cin >> userId >> movieId;
                cout << cancelTicket(userId, movieId) << endl;
            }

            else if (command == "IS_BOOKED") {
                int userId, movieId;
                cin >> userId >> movieId;
                cout << checkBooking(userId, movieId) << endl;
            }

            else if (command == "AVAILABLE_TICKETS") {
                int movieId;
                cin >> movieId;
                cout << availableSeats(movieId) << endl;
            }
        }
    }
};

int main() {
    TicketManager ticket1;
    ticket1.processQueries();
    return 0;
}