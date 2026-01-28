#include <iostream>

// Include your class headers here.  Please use PascalCase for naming.

using namespace std;

int main()
{
    cout << "=== CS 302 Project 1: Transporters ===" << endl;
    cout << endl;

    // ------------------------------------------------------------
    // Create a Train and load it with Cargo
    // ------------------------------------------------------------

    cout << "Creating train..." << endl;

    // Create a train.


    // The train should be empty when first created.
    // Demonstrate this by outputting:
    //  - whether the train is empty
    //  - how many cargo items it currently holds



    // Let's load our train!
    cout << "Loading cargo onto train..." << endl;

    // Create several Cargo objects.
    // Each cargo should have:
    //  - a type (string)
    //  - a weight (double)



    // Load cargo onto the train.
    // After loading, the train should no longer be empty.



    // Display the number of cargo items on the train.
    // Also display whether the train is empty.



    // Output train-specific functionality.
    // For example:
    //  - total weight of all cargo
    //  - any other behavior unique to a train



    // Demonstrate unloading one cargo item.
    // Then display the updated cargo count.



    // Demonstrate moving the train.
    // The move function may output its own message.



    cout << endl;

    // ------------------------------------------------------------
    // Create a Bus and load it with People
    // ------------------------------------------------------------

    cout << "Creating bus..." << endl;

    // Create a bus.


    // The bus should be empty when first created.
    // Demonstrate this with output.



    // Set the fare for the bus.



    cout << "Loading passengers onto bus..." << endl;

    // Create several Person objects.
    // Each person should have:
    //  - a name
    //  - a height
    //
    // Intentionally create people in an order
    // that is NOT sorted by height.



    // Load people onto the bus.
    // The bus should automatically keep passengers
    // sorted from shortest to tallest.



    // Display the number of passengers on the bus.
    // Also display whether the bus is empty.



    // Output bus-specific functionality.
    // For example:
    //  - total fare collected
    //  - any other behavior unique to a bus



    // Demonstrate unloading one passenger.
    // Then display the updated passenger count.



    // Demonstrate moving the bus.
    // The move function may output its own message.



    cout << endl;

    // ------------------------------------------------------------
    // Demonstrate emptying transporters
    // ------------------------------------------------------------

    cout << "Emptying train and bus..." << endl;

    // Empty the train.


    // Empty the bus.



    // Demonstrate that both transporters are now empty.
    // Output both:
    //  - empty status
    //  - item count



    cout << endl;
    cout << "=== End of Program ===" << endl;

    return 0;
}
