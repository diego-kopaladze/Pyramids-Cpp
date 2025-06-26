#include <iostream>
using namespace std;

// --------- Your pattern functions ---------

void SimplePyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) cout << " ";
        for (int k = 1; k <= i; ++k) cout << "* ";
        cout << endl;
    }
}

void FlippedSimplePyramid(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            if (j >= i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}

void InvertedPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) cout << "* ";
        cout << endl;
    }
}

void FlippedInvertedPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; j++) cout << " ";
        for (int k = n; k >= i; --k) cout << "*";
        cout << endl;
    }
}

void Triangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) cout << " ";
        for (int k = 1; k <= i; ++k) cout << "* ";
        cout << endl;
    }
}

void InvertedTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; j++) cout << " ";
        for (int k = n; k >= i; --k) cout << " *";
        cout << endl;
    }
}

void HalfDiamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = 1; j <= n - i; ++j) cout << "* ";
        cout << endl;
    }
}

void FlippedHalfDiamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) cout << " ";
        for (int k = 1; k <= i; ++k) cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = 1; j <= i; ++j) cout << " ";
        for (int k = 1; k <= n - i; ++k) cout << "*";
        cout << endl;
    }
}

void DiamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) cout << " ";
        for (int k = 1; k <= i; ++k) cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = 1; j <= i + 1; ++j) cout << " ";
        for (int k = n - 1; k >= i; --k) cout << "* ";
        cout << endl;
    }
}

void HourGlassPattern(int n) {
    for (int i = 1; i <= n - 1; ++i) {
        for (int k = 1; k <= i; ++k) cout << " ";
        for (int j = n; j >= i; --j) cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) cout << " ";
        for (int k = 1; k <= i; ++k) cout << "* ";
        cout << endl;
    }
}

void NumberPyramid(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
}

void RotatedNumberPyramid(int n) {
    int count = 0, k = 0;
    for (int i = 1; i <= n; ++i) {
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
            ++count;
        }
        while (k != 2 * i - 1) {
            if (count <= n - 1) {
                cout << i + k << " ";
                ++count;
            }
            ++k;
        }
        count = k = 0;
        cout << endl;
    }
}

void PalindromePyramid(int n) {
    int rows = n, count = 0, count1 = 0, k = 0;
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
            ++count;
        }
        while (k != 2 * i - 1) {
            if (count <= rows - 1) {
                cout << i + k << " ";
                ++count;
            } else {
                ++count1;
                cout << i + k - 2 * count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        cout << endl;
    }
}

void alphabet(int n) {
    int num = 65; // ASCII for 'A'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            char ch = char(num);
            cout << ch << " ";
        }
        num++;
        cout << endl;
    }
}

void contalpha(int n) {
    int num = 65; // ASCII for 'A'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            char ch = char(num);
            cout << ch << " ";
            num++;
        }
        cout << endl;
    }
}

// ---------------------------------------

void print_menu() {
    cout << "\nPick a pattern:\n";
    cout << "1. Simple Pyramid\n";
    cout << "2. Flipped Simple Pyramid\n";
    cout << "3. Inverted Pyramid\n";
    cout << "4. Flipped Inverted Pyramid\n";
    cout << "5. Triangle\n";
    cout << "6. Inverted Triangle\n";
    cout << "7. Half Diamond Pattern\n";
    cout << "8. Flipped Half Diamond Pattern\n";
    cout << "9. Diamond Pattern\n";
    cout << "10. Hour Glass Pattern\n";
    cout << "11. Number Pyramid\n";
    cout << "12. Rotated Number Pyramid\n";
    cout << "13. Palindrome Pyramid\n";
    cout << "14. Alphabet Pyramid\n";
    cout << "15. Continuous Alphabet Pyramid\n";
    cout << "16. Examples of All Pyramids (size=4)\n";
    cout << "0. Quit\n";
}

void run_pattern(int choice, int size) {
    switch (choice) {
        case 1: SimplePyramid(size); break;
        case 2: FlippedSimplePyramid(size); break;
        case 3: InvertedPyramid(size); break;
        case 4: FlippedInvertedPyramid(size); break;
        case 5: Triangle(size); break;
        case 6: InvertedTriangle(size); break;
        case 7: HalfDiamondPattern(size); break;
        case 8: FlippedHalfDiamondPattern(size); break;
        case 9: DiamondPattern(size); break;
        case 10: HourGlassPattern(size); break;
        case 11: NumberPyramid(size); break;
        case 12: RotatedNumberPyramid(size); break;
        case 13: PalindromePyramid(size); break;
        case 14: alphabet(size); break;
        case 15: contalpha(size); break;
        default: cout << "Invalid choice\n"; break;
    }
}

int main() {
    int choice;
    do {
        print_menu();
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program. Bye!\n";
            break;
        }
        else if (choice == 16) {
            int example_size = 4;
            cout << "\n--- Examples of All Pyramids (size=4) ---\n\n";

            for (int i = 1; i <= 15; ++i) {
                cout << "Pattern " << i << ":\n";
                run_pattern(i, example_size);
                cout << endl;
            }
        }
        else if (choice >= 1 && choice <= 15) {
            int size;
            cout << "Enter size: ";
            cin >> size;
            run_pattern(choice, size);
            cout << endl;
        }
        else {
            cout << "Invalid choice, try again.\n";
        }
    } while (true);

    return 0;
}
