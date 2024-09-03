#include <iostream>
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
                if (j >= i - ((2 * n - 1) / 2 + 1) && j <= (2 * n - 1) / 2 + 2 * n - i - 1)
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

void mirroredRightAngledTriangle()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 3; i >= 0; --i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int sum(int start, vector<int>& arr)
{
    if (arr.empty()) return 0;
    if (start == arr.size() - 1) return arr[start];
    return arr[start] + sum(start + 1, arr);
}

int countElements(int start, vector<int>& arr)
{
    if (arr.empty()) return 0;
    if (start == arr.size() - 1) return 1;
    return 1 + countElements(start + 1, arr);
}

int findMax(int start, vector<int>& arr)
{
    if (arr.empty()) return 0;
    if (start == arr.size() - 1) return arr[start];
    int max = arr[start];
    return std::max(max, findMax(start + 1, arr));
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
    //mirroredRightAngledTriangle();
}

int main()
{
    vector<int> arr{ 1,2,6,4,5,3 };
    std::cout << sum(0, arr)<< endl;
    std::cout << countElements(0, arr)<< endl;
    std::cout << findMax(0, arr)<< endl;
    getchar();
    return 0;
}
