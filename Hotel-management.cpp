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
void voidOrder(RoomReservation *&roomReservations, FoodOrder *&foodOrders)
{
    int choice;
    do
    {
        cout << setw(40) << "Choose the order you want to void \n\n"
             << setw(35) << "1. Void room Order\n"
             << setw(35) << "2. Void food Order\n"
             << setw(29) << "0. Back\n"
             << "Input your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "choosed room\n";
            // Example: Void a room order
            if (roomReservations != nullptr)
            {
                RoomReservation *temp = roomReservations;
                roomReservations = roomReservations->next;
                delete temp;
            }
            cout << setfill('*') << setw(60) << "*" << endl;
            cout << " Room invoice Succesfully voided!!!!\n";
            cout << setw(60) << "*" << endl
                 << setfill(' ');
            break;
        case 2:
            cout << "choosed food\n";
            // Example: Void a food order
            if (foodOrders != nullptr)
            {
                FoodOrder *temp = foodOrders;
                foodOrders = foodOrders->next;
                delete temp;
            }
            cout << setfill('*') << setw(60) << "*" << endl;
            cout << " Food invoice Succesfully voided!!!!\n";
            cout << setw(60) << "*" << endl
                 << setfill(' ');
            break;
        case 0:
            cout << setfill('*') << setw(60) << "*" << endl;
            cout << " Succesfully Voided !!!!\n";
            cout << setw(60) << "*" << endl
                 << setfill(' ');
            return;
        default:
            cout << "Invaild input\n";
        }
    } while (choice);
}
void saveToFile(RoomReservation *&roomReservations, FoodOrder *&foodOrders)
{
    // Open File
    ofstream outdata;

    outdata.open("Room_store.csv", ios::app);
    while (roomReservations != nullptr)
    {
        outdata << roomReservations->roomType << ','
                << roomReservations->checkInTime << ','
                << roomReservations->checkOutTime << ','
                << roomReservations->name << ','
                << roomReservations->contactInfo << ','
                << roomReservations->paymentDetails << endl;

        roomReservations = roomReservations->next;
    }

    outdata.close();

    outdata.open("Food_store.csv", ios::app);
    while (foodOrders != nullptr)
    {
        outdata << foodOrders->foodItem << ','
                << foodOrders->paymentDetails << endl;

        foodOrders = foodOrders->next;
    }

    outdata.close();
    cout << setfill('*') << setw(60) << "*" << endl;
    cout << " Succesfully Saved service History on the same directory at './Food_store.csv' and './Room_store.csv'!!!!\n";
    cout << setw(60) << "*" << endl
         << setfill(' ');
}
// Main function
int main()
{
    RoomReservation *roomReservations = nullptr;
    FoodOrder *foodOrders = nullptr;
    bool isroomreserved = false;
    int choice;
    do
    {
        cout << setw(40) << "Welcom Arif Hotel\n\n"
             << setw(35) << "1. Order Food\n"
             << setw(35) << "2. Order Room\n"
             << setw(39) << "3. Change Service\n"
             << setw(35) << "4. Void Order\n"
             << setw(37) << "5. Save Service\n"
             << setw(45) << "6. View Service History\n"
             << setw(29) << "0. Exit\n"
             << "Input your choice: ";
        cin >> choice;

        // This block tries to find any exception or undisier behavior.
        try
        {
            switch (choice)
            {
            case 1:
                cout << "Choosed Food\n";
                if (isroomreserved)
                    orderFood(foodOrders);
                else
                    throw isroomreserved; // If room is not reserved, then it says it has boolean type exception.
                break;
            case 2:
                cout << "Choosed Room\n";
                makeRoomReservation(roomReservations);
                isroomreserved = true;
                break;
            case 3:
                cout << "Change service\n";
                changeServices(roomReservations, foodOrders);
                break;
            case 4:
                cout << "Void Order\n";
                voidOrder(roomReservations, foodOrders);
                break;
            case 5:
                cout << "Save Service\n";
                saveToFile(roomReservations, foodOrders);
                break;
            case 6:
                cout << "View History\n";
                displayServiceHistory(roomReservations, foodOrders);
                break;
            case 0:
                return 0;
            default:
                cout << "Invaild input\n";
            }
        }
        // Catch any boolean type exception.
        catch (bool)
        {
            // Message to Print.
            cout << setfill('*') << setw(60) << "*" << endl;
            cout << " Please make Room Reservation first!!!!\n";
            cout << setw(60) << "*" << endl
                 << setfill(' ');
        }

    } while (choice);

    // Clean up allocated memory
    while (roomReservations != nullptr)
    {
        RoomReservation *temp = roomReservations;
        roomReservations = roomReservations->next;
        delete temp;
    }

    while (foodOrders != nullptr)
    {
        FoodOrder *temp = foodOrders;
        foodOrders = foodOrders->next;
        delete temp;
    }

    return 0;
}
