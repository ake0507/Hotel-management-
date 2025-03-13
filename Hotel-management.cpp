#include <iostream>

#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to represent a room reservation
struct RoomReservation
{
    string roomType;
    string checkInTime;
    string checkOutTime;
    string name;
    string contactInfo;
    string paymentDetails;
    RoomReservation *next;
};
// Structure to represent a food order
struct FoodOrder
{
    string foodItem;
    string paymentDetails;
    FoodOrder *next;
};

// Function to make a room reservation
void makeRoomReservation(RoomReservation *&head)
{
    RoomReservation *newReservation = new RoomReservation;
    cout << "Enter Room type: ";
    cin >> newReservation->roomType;
    cout << "Enter Check In Time: ";
    cin >> newReservation->checkInTime;
    cout << "Enter Check Out Time: ";
    cin >> newReservation->checkOutTime;
    cout << "Enter Name: ";
    cin >> newReservation->name;
    cout << "Enter Contact Info: ";
    cin >> newReservation->contactInfo;
    cout << "Enter Payment Details: ";
    cin >> newReservation->paymentDetails;
    newReservation->next = head;
    head = newReservation;
    cout << setfill('*') << setw(60) << "*" << endl;
    cout << " Succesfully make Reservation!!!!\n";
    cout << setw(60) << "*" << endl
         << setfill(' ');
}
// Function to order food
void orderFood(FoodOrder *&head)
{
    FoodOrder *newOrder = new FoodOrder;
    cout << "Enter Food: ";
    cin >> newOrder->foodItem;
    cout << "Enter Payment Details: ";
    cin >> newOrder->paymentDetails;
    newOrder->next = head;
    head = newOrder;
    cout << setfill('*') << setw(60) << "*" << endl;
    cout << " Succesfully Orderd Food !!!!\n";
    cout << setw(60) << "*" << endl
         << setfill(' ');
}
// Function to display service history
void displayServiceHistory(RoomReservation *roomReservations, FoodOrder *foodOrders)
{
    // Display room reservation history
    cout << setfill('*') << setw(60) << "*" << endl;

    cout << "\nRoom Reservation History:\n";
    while (roomReservations != nullptr)
    {
        cout << "Room Type: " << roomReservations->roomType << ", Check-in: " << roomReservations->checkInTime
             << ", Check-out: " << roomReservations->checkOutTime << ", Name: " << roomReservations->name << "\n";
        roomReservations = roomReservations->next;
    }

    // Display food order history
    cout << "\nFood Order History:\n";
    while (foodOrders != nullptr)
    {
        cout << "Food Item: " << foodOrders->foodItem << ", Payment Details: " << foodOrders->paymentDetails << "\n";
        foodOrders = foodOrders->next;
    }
    cout << setw(60) << "*" << endl
         << setfill(' ');
}

// Function to change services
void changeServices(RoomReservation *&roomReservations, FoodOrder *&foodOrders)
{

    int choice;
    int inRoom;
    do
    {
        cout << setw(40) << "Choose the order you want to Change \n\n"
             << setw(35) << "1. Change room Order\n"
             << setw(35) << "2. Change food Order\n"
             << setw(29) << "0. Back\n"
             << "Input your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << setw(40) << "Choose the order you want to Change in Room \n\n"
                 << setw(35) << "1. Change Room type\n"
                 << setw(35) << "2. Change Check out\n"
                 << setw(30) << "3. Change Name\n"
                 << setw(45) << "4. Change Contact Information\n"
                 << setw(29) << "0. Back\n"
                 << "Input your choice: ";
            cin >> inRoom;
            switch (inRoom)
            {
            case 1:
                // Example: Change room type
                if (roomReservations != nullptr)
                {
                    cout << "Change Room Type: ";
                    cin >> roomReservations->roomType;
                    cout << setfill('*') << setw(60) << "*" << endl;
                    cout << " Succesfully changed Room Type!!!!\n";
                    cout << setw(60) << "*" << endl
                         << setfill(' ');
                }
                break;

            case 2:
                // Example: Change Check out Time
                if (roomReservations != nullptr)
                {
                    cout << "Change Check out time: ";
                    cin >> roomReservations->checkOutTime;
                    cout << setfill('*') << setw(60) << "*" << endl;
                    cout << " Succesfully Changed Check out time!!!!\n";
                    cout << setw(60) << "*" << endl
                         << setfill(' ');
                }
                break;

            case 3:
                // Example: Change Name
                if (roomReservations != nullptr)
                {
                    cout << "Change Name: ";
                    cin >> roomReservations->name;
                    cout << setfill('*') << setw(60) << "*" << endl;
                    cout << " Succesfully Changed Name!!!!\n";
                    cout << setw(60) << "*" << endl
                         << setfill(' ');
                }

                break;

            case 4:
                // Example: Change Contact Information
                if (roomReservations != nullptr)
                {
                    cout << "Change Contact Information: ";
                    cin >> roomReservations->contactInfo;
                    cout << setfill('*') << setw(60) << "*" << endl;
                    cout << " Succesfully Changed Contact Information!!!!\n";
                    cout << setw(60) << "*" << endl
                         << setfill(' ');
                }
                break;
            case 0:
                break;
            default:
                cout << "Invaild input\n";
            }

            break;
        case 2:
            cout << "choosed food\n";
            if (foodOrders != nullptr)
            {
                cout << "Change the food: ";
                cin >> foodOrders->foodItem;
                cout << setfill('*') << setw(60) << "*" << endl;
                cout << " Succesfully Changed Food order!!!!\n";
                cout << setw(60) << "*" << endl
                     << setfill(' ');
            }
            break;
        case 0:
            return;
        default:
            cout << "Invaild input\n";
        }
    } while (choice);
}
