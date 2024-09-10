#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void rectangularStar(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTriangle(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledNumPyramid(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void rightAngledNumPyramid2(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void invertedRightPyramid(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = n; j > i; --j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedRightPyramid2(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void space() { cout << '\n'; }

/*
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 */

void centeredPyramid(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2 * n - 1; ++j)
        {
            if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void invertedCenteredPyramid(int n)
{
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j < 2 * n - 1; ++j)
        {
            if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void mirroredCenteredPyramid(int n)
{
    for (int i = 0; i < 2 * n; ++i)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n - 1; ++j)
            {
                if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - 1; ++j)
            {
                if (j >= i - ((2 * n - 1) / 2 + 1) &&
                    j <= (2 * n - 1) / 2 + 2 * n - i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}

void mirroredRightAngledTriangle(int n)
{
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < 2 * n - 1 - i; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

void rightAngledTriangleBinary(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            // i even, j even
            if (i % 2 == 0 && j % 2 == 0)
                cout << '1' << ' ';
                // i even, j odd
            else if (i % 2 == 0 && j % 2 != 0)
                cout << '0' << ' ';
                // i odd, j even
            else if (i % 2 != 0 && j % 2 == 0)
                cout << '0' << ' ';
                // i odd, j odd
            else if (i % 2 != 0 && j % 2 != 0)
                cout << '1' << ' ';
        }
        cout << endl;
    }
}

void vShape(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2 * n; ++j)
        {
            if (j < i + 1)
            {
                cout << j + 1;
            }
            else if (j >= 2 * n - i - 1)
            {
                cout << 2 * n - j;
            }
            else
            {
                cout << ' ';
            }
        }

        cout << endl;
    }
}

void rightAngledTriangleDecimal(int n)
{
    int num = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << num++ << ' ';
        }
        cout << endl;
    }
}

void rightAngledTriangleLetters(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << static_cast<char>('A' + j);
        }
        cout << endl;
    }
}

void rightAngledTriangleLettersReverse(int n)
{
    for (int i = n; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << static_cast<char>('A' + j);
        }
        cout << endl;
    }
}

void rightAngledTriangleSingleLetterRows(int n)
{
    int modifier = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << static_cast<char>('A' + modifier);
        }
        ++modifier;
        cout << endl;
    }
}

void centeredLetterPyramid(int n)
{
    for (int i = 0; i < n; ++i)
    {
        int modifier = 0;
        for (int j = 0; j < 2 * n - 1; ++j)
        {
            if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i)
            {
                cout << static_cast<char>('A' + modifier);
                if (j < n - 1)
                {
                    ++modifier;
                }
                else
                {
                    --modifier;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void rightAngledTriangleLettersStartWithN(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << static_cast<char>('A' + n - 1 - i + j);
        }
        cout << endl;
    }
}

void emptyDiamond(int n)
{
    for (int i = 0; i < 2 * n; ++i)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n; ++j)
            {
                if (j < n - i || j >= n + i)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n; ++j)
            {
                if (j < n + 1 + i - 2 * n || j >= 2 * n + (n - i - 1))
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}

void hourglass(int n)
{
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n; ++j)
            {
                if (j < i + 1 || j >= 2 * n - i - 1)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        else
        {
            for (int j = 0; j < 2 * n; ++j)
            {
                if (j < 2 * n - (i + 1) || j >= 2 * n - (2 * n - (i + 1)))
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}

void emptySquare(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void numberSquare(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        for (int j = 0; j < 2 * n - 1; ++j)
        {
            int top = i;
            int bottom = 2 * n - 2 - i;
            int left = j;
            int right = 2 * n - 2 - j;

            cout << n - std::min(std::min(top, bottom), std::min(left, right)) << " ";
        }
        cout << endl;
    }
}

int sum(int start, vector<int>& arr)
{
    if (arr.empty())
        return 0;
    if (start == arr.size() - 1)
        return arr[start];
    return arr[start] + sum(start + 1, arr);
}

int countElements(int start, vector<int>& arr)
{
    if (arr.empty())
        return 0;
    if (start == arr.size() - 1)
        return 1;
    return 1 + countElements(start + 1, arr);
}

int findMax(int start, vector<int>& arr)
{
    if (arr.empty())
        return 0;
    if (start == arr.size() - 1)
        return arr[start];
    int max = arr[start];
    return std::max(max, findMax(start + 1, arr));
}

std::vector<int> extractDigits(int n)
{
    if (n == 0)
    {
        return {0};
    }

    std::vector<int> digits;
    do
    {
        const int dgt = n % 10u;
        digits.push_back(dgt);
        n /= 10;
    }
    while (n > 0);

    std::reverse(digits.begin(), digits.end());
    return digits;
}

void reverseInputNumber(int n)
{
    bool metNonZero = false;
    while (n > 0)
    {
        const int dgt = n % 10;
        n /= 10;

        if (dgt == 0)
        {
            if (!metNonZero) continue;
        }

        metNonZero = true;
        cout << dgt;
    }
    if (!metNonZero)
    {
        cout << 0;
    }
}

void isNumberPalindrome(int n)
{
    int inverse = 0;
    int exp = 0;
    const int ncopy = n;

    while (n > 0)
    {
        int dgt = n % 10;
        inverse += dgt * static_cast<int>(std::pow(10, exp));
        n /= 10;
        ++exp;
    }

    const auto isPalindrome = inverse == ncopy ? "is palindrome" : "is not palindrome";
    cout << ncopy << " " << isPalindrome;
}

void GCD(int n, int m)
{
    if (n == 0 || m == 0)
    {
        cout << "GCD is " << std::max(n,m);
        return;
    }
    if (n > m) return GCD(n % m, m);
    return GCD(n, m % n);
}

void printSomethingNTimesRecursive(int i, int n)
{
    cout << i << ". Something\n";
    if (i == n)
    {
        return;
    }

    printSomethingNTimesRecursive(i + 1, n);
}

void printNumsFromOneTillNRecursive(int n)
{
    static int i = 1;
    cout << i << endl;
    if (i == n)
    {
        return;
    }
    ++i;

    printNumsFromOneTillNRecursive(n);
}

void printNumsFromNTillOneRecursive(int n)
{
    cout << n << endl;
    if (1 == n)
    {
        return;
    }

    --n;

    printNumsFromNTillOneRecursive(n);
}

int sumOfFirstNNumbers(int n)
{
    if (1 == n)
    {
        return 1;
    }
    return n + sumOfFirstNNumbers(n-1);
}

int factorial(int n)
{
    if (n == 1) return 1;

    return n * factorial(n - 1);
}

void partition()
{
}

void quicksort(vector<int> arr)
{
}

void patterns()
{
    rectangularStar(5);
    space();
    rightAngledTriangle(5);
    space();
    rightAngledNumPyramid(5);
    space();
    rightAngledNumPyramid2(5);
    space();
    invertedRightPyramid(5);
    space();
    invertedRightPyramid2(5);
    space();
    centeredPyramid(5);
    space();
    invertedCenteredPyramid(5);
    space();
    mirroredCenteredPyramid(5);
    space();
    mirroredRightAngledTriangle(5);
    space();
    rightAngledTriangleBinary(5);
    space();
    vShape(5);
    space();
    rightAngledTriangleDecimal(5);
    space();
    rightAngledTriangleLetters(5);
    space();
    rightAngledTriangleLettersReverse(5);
    space();
    rightAngledTriangleSingleLetterRows(5);
    space();
    centeredLetterPyramid(5);
    space();
    rightAngledTriangleLettersStartWithN(5);
    space();
    emptyDiamond(5);
    space();
    hourglass(5);
    space();
    emptySquare(5);
    space();
    numberSquare(4);
}

int main()
{
    printSomethingNTimesRecursive(1, 5);
    space();
    printNumsFromOneTillNRecursive(10);
    space();
    printNumsFromNTillOneRecursive(10);
    space();
    cout << sumOfFirstNNumbers(10) << endl;
    space();
    cout << factorial(5) << endl;
    space();
    getchar();
    return 0;
}
