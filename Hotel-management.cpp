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