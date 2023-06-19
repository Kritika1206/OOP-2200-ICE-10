#include <iostream>
#include <vector>
using namespace std;

/*
 * Name: Kritika Singh
 * Student Number: 100859600
 * Date: July14, 2022
 * Program: Computer Programming
 *
 * Description:
 - The program creates a vector, type and size of author's choice, put values inside the vector or read values from the user.
 - Use at least 7 functions from the vector library and show an output when needed.
 */


int main()
{
    vector<int> myvector(3);

    myvector[0] = 9;
    myvector[1] = 78;
    myvector[2] = 192;

    cout << myvector[1] << endl;

    // 1 function
    cout << myvector.at(2) << endl;

    //2 function
    cout << myvector.size() << endl;

    //3  function
    myvector.push_back(988);
    cout << myvector.size() << endl;
    cout << myvector.size() << endl;
    cout << myvector.at(3) << endl;
    myvector.push_back(988444);

    // 4 function
    cout << myvector.back() << endl;

    // 5 function
    cout << myvector.front() << endl;

    // 6 function
    cout << myvector.empty() << endl;

    // 7 function
    myvector.clear();

    return 0;
}
