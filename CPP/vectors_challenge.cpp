#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Declaring vectors
    vector <int> vector1 {};
    vector <int> vector2 {};

    //Adding values to vectors
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1:\n";
    cout << "The number at 0: " << vector1.at(0) << endl;
    cout << "The number at 1: " << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2:\n";
    cout << "The number at 0: " << vector2.at(0) << endl;
    cout << "The number at 1: " << vector2.at(1) << endl;
    cout << "The size of vector 2 is: " << vector2.size() << endl;

    //Declaring a 2D vector
    vector <vector <int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Printing the vector 2D
    cout << "Vector_2D: \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    //Changing the value of vector1.at(0)
    vector1.at(0) = 1000;

    //Printing the vector_2d again
    cout << "Vector_2D after editing vector1: \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "Vector 1 after editing:\n";
    cout << "The number at 0: " << vector1.at(0) << endl;
    cout << "The number at 1: " << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " << vector1.size() << endl;

    return 0;
}