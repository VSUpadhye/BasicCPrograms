#include <iostream>

using namespace std;

int main()
{
    int no_of_small_rooms {0}, no_of_large_rooms {0};
    const int price_per_small_room {25}, price_per_large_room {35};
    const float tax_rate {0.06}, estimate_validity {30.0};

    cout << "Carpet cleaning service" << endl;
    cout << "Charges:\nFor small rooms: $" << price_per_small_room << endl;
    cout << "For large rooms: $" << price_per_large_room << endl;
    cout << "Sales tax rate: " << tax_rate << endl;
    cout << "Estimates are valid for: " << estimate_validity << " Days" <<endl;

    cout << "==================================================" << endl;
    cout << "How many small rooms would you like cleaned: ";
    cin >> no_of_small_rooms;
    cout << "How many large rooms would you like cleaned: ";
    cin >> no_of_large_rooms;

    cout << "Total estimates:\n";
    cout << "Cost for cleaning rooms: $" << (no_of_large_rooms * price_per_large_room) + (no_of_small_rooms * price_per_small_room) << endl;
    cout << "Tax: $" << ((no_of_large_rooms * price_per_large_room) + (no_of_small_rooms * price_per_small_room)) *tax_rate << endl;
    cout << "==================================================" << endl;
    cout << "Total cost: $" << ((no_of_large_rooms * price_per_large_room) + (no_of_small_rooms * price_per_small_room)) + ((no_of_large_rooms * price_per_large_room) + (no_of_small_rooms * price_per_small_room)) *tax_rate<< endl;

    return 0;
}