#include <iostream>
#include "peQueen.h"

using namespace std;

int main()
{
    int n;
    cout << "Board size: ";
    cin >> n;

    cout << "Size: " << n << endl;

    peQueen qp(n);

    //QTime myTime;
    //myTime.start();
    cout << "valid placements: " << qp.ValidPlacements() << endl;
    //cout << "time: " << myTime.elapsed() << "ms\n";

    return 0;
}
