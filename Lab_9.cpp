#include <iostream>
#include <string>

using namespace std;

// Struct for holding infomation about a computer
struct computerType
    {
        string manufacturer;
        string modelType;
        string processorType;
        int ram;
        int hddGB;
        int year;
        double price;
    } computerType; // Variable declared right after the struct

int main()
{
    // User prompt to ask for information about computer
    // and store that into each variable within the struct
    cout << "-------------------------------------\n";
    cout << "Enter your computers INFO as PROMPTED\n";
    cout << "-------------------------------------\n";

    cout << "Manufacturer: ";
    cin >> computerType.manufacturer;
    cout << endl;

    cout << "Model: ";
    cin >> computerType.modelType;
    cout << endl;

    cout << "CPU: ";
    cin >> computerType.processorType;
    cout << endl;

    cout << "RAM: ";
    cin >> computerType.ram;
    cout << endl;

    cout << "HDD Size(Gb): ";
    cin >> computerType.hddGB;
    cout << endl;

    cout << "Year: ";
    cin >> computerType.year;
    cout << endl;

    cout << "Price: $ ";
    cin >> computerType.price;
    cout << endl;

    // Output that infomation to the user
    cout << "Thank you, this information will be shared "
         << "with retailers to better provide you with ads."
         << "\n\n";

    cout << "Information provided:\n"
         << "Manufacturer: " << computerType.manufacturer << endl
         << "Model: " << computerType.modelType << endl
         << "CPU: " << computerType.processorType << endl
         << "RAM: " << computerType.ram << endl
         << "HDD(Gb): " << computerType.hddGB << endl
         << "Year: " << computerType.year << endl
         << "Price: $" << computerType.price << endl;


    return 0;
}
