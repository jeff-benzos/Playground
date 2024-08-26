#include <iostream>
using namespace std;
void rectangularStar(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << "*";
    }
    cout << endl;
  }
}

void rightAngledTriangle(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << "*";
    }
    cout << endl;
  }
}

void rightAngledNumPyramid(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << j + 1;
    }
    cout << endl;
  }
}

void rightAngledNumPyramid2(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << i + 1;
    }
    cout << endl;
  }
}

void invertedRightPyramid(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = n; j > i; --j) {
      cout << "*";
    }
    cout << endl;
  }
}

void invertedRightPyramid2(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i; ++j) {
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

void centeredPyramid(int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 2 * n - 1; ++j) {
      if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void invertedCenteredPyramid(int n) {
  for (int i = n - 1; i >= 0; --i) {
    for (int j = 0; j < 2 * n - 1; ++j) {
      if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void mirroredCenteredPyramid(int n) {
  for (int i = 0; i < 2 * n; ++i) {
    if (i < n) {
      for (int j = 0; j < 2 * n - 1; ++j) {
        if (j >= (2 * n - 1) / 2 - i && j <= (2 * n - 1) / 2 + i) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    } else {
      for (int j = 0; j < 2 * n - 1; ++j) {
        if (j >= i - ((2 * n - 1) / 2 + 1) && j <= (2 * n - 1) / 2 + 2*n - i - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }

    cout << endl;
  }
}

void mirroredRightAngledTriangle() {
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 3; i >= 0; --i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
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
  getchar();
  return 0;
}