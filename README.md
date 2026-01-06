# Fleet Inventory Tracker

This project is a vehicle management simulation I wrote in C. It focuses on **Memory Management** using `unions` and `structs`.

## How it works
The program manages a fleet of cars. The cool part is how it decides the status of a car:
* **The Logic:** If the rental price is entered as `0`, the system automatically marks the car as **"Available"**. If a price is entered, it marks it as **"Rented/Occupied"**.
* **Memory Optimization (Union):** I used a `union` for the status message (`aracDurum`). Since a car's status message is temporary and overwritable, using a union saves memory compared to a standard struct variable.
* **Safe Coding:** I used `snprintf` to format the status strings safely, preventing buffer overflow issues.

## How to Run
1.  Compile the `main.c` file using a C compiler (like GCC).
2.  Run the executable.
3.  Enter the vehicle details (Brand, Model, Year).
4.  Enter the Rental Fee (Enter `0` to see the "Available" status in action).
5.  The program will print a formatted status report.

## Technical Details
* **Language:** C
* **Key Concepts:** Struct vs Union, Logic Flow, String Formatting.
