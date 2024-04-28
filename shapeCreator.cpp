#include <iostream>

using namespace std;

void printSquare(int side)
{
    for (int i = 0; i < side; ++i)
    {
        for (int j = 0; j < side; ++j)
        {
            cout << "# ";
        }
        cout << endl;
    }
}

void printTriangle(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "# ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Choose a shape to print:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        break;
    }
    case 2:
    {
        int side;
        cout << "Enter the side length of the square: ";
        cin >> side;
        printSquare(side);
        break;
    }
    case 3:
    {
        int height;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        printTriangle(height);
        break;
    }
    default:
        cout << "Invalid choice!";
    }

    return 0;
}
