#ifndef PEQUEEN_H
#define PEQUEEN_H


class peQueen
{
public:
    peQueen(const int n);

    unsigned long long ValidPlacements();
    long ValidPlacementsBit();

    int Solutions();

private:
    unsigned long long Factorial(unsigned long long n);
    int NumberSetBits(int n);

    int m_Size;
};

#endif // PEQUEEN_H
