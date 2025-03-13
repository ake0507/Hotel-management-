Hotel Management System
This C++ console application simulates a simple Hotel Management System, allowing users to manage room reservations and food orders. The system provides functionalities to make reservations, order food, modify services, void orders, view service history, and save records to files.

Features
Room Reservations: Users can reserve rooms by specifying room type, check-in and check-out times, personal details, and payment information.

Food Orders: Guests can place food orders by selecting food items and providing payment details.

Modify Services: Allows users to change room reservations or food orders, including room type, check-out time, guest name, contact information, or food items.

Void Orders: Users can cancel room reservations or food orders.

View Service History: Displays a history of all room reservations and food orders.

Save Records: Service histories can be saved to CSV files (Room_store.csv and Food_store.csv) for record-keeping.

Getting Started
Prerequisites
A C++ compiler (e.g., g++, clang++)
A terminal or command prompt
Compilation
To compile the program, navigate to the directory containing the source code and run:

bash

g++ -o hotel_management_system hotel_management_system.cpp
Replace hotel_management_system.cpp with the actual filename if it's different.

Execution
After compilation, run the executable:

bash

./hotel_management_system
On Windows:

bash
hotel_management_system.exe
Usage
Upon running the program, a menu will be displayed with the following options:

Order Food: Place a food order. Note: A room reservation must be made before ordering food.
Order Room: Make a new room reservation.
Change Service: Modify existing room reservations or food orders.
Void Order: Cancel existing room reservations or food orders.
Save Service: Save the current service history to CSV files.
View Service History: Display all past room reservations and food orders.
Exit: Close the application.
Navigate through the menu by entering the corresponding number for your desired action.

File Structure
Room_store.csv: Stores room reservation records in CSV format.
Food_store.csv: Stores food order records in CSV format.
These files are generated in the same directory as the executable upon saving the service history.

Error Handling
The program includes basic error handling to ensure room reservations are made before food orders. If an attempt is made to order food without a prior room reservation, an error message will prompt the user to make a room reservation first.

Notes
This application is a simple simulation and does not include advanced features such as database integration or a graphical user interface.
All data is stored temporarily during runtime and can be saved to CSV files for record-keeping.
The program uses basic C++ concepts, including structures, pointers, and file handling.
Contribution
Aklilu Desalegn
