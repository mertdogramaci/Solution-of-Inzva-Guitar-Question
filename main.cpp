#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    stack<int> string1;
    string1.push(0);
    stack<int> string2;
    string2.push(0);
    stack<int> string3;
    string3.push(0);
    stack<int> string4;
    string4.push(0);
    stack<int> string5;
    string5.push(0);
    stack<int> string6;
    string6.push(0);

    int counter = 0;

    for (int i = 0; i < n; i++) {
        int string, fret;
        cin >> string >> fret;

        switch (string) {
            case 1:
                if (string1.top() == fret) {
                    continue;
                } else if (string1.top() < fret) {
                    string1.push(fret);
                    counter++;
                } else if (string1.top() > fret) {
                    while (string1.top() > fret) {
                        string1.pop();
                        counter++;
                    }
                    if (string1.top() != fret) {
                        string1.push(fret);
                        counter++;
                    }
                }
                break;
            case 2:
                if (string2.top() == fret) {
                    continue;
                } else if (string2.top() < fret) {
                    string2.push(fret);
                    counter++;
                } else if (string2.top() > fret) {
                    while (string2.top() > fret) {
                        string2.pop();
                        counter++;
                    }
                    if (string2.top() != fret) {
                        string2.push(fret);
                        counter++;
                    }
                }
                break;
            case 3:
                if (string3.top() == fret) {
                    continue;
                } else if (string3.top() < fret) {
                    string3.push(fret);
                    counter++;
                } else if (string3.top() > fret) {
                    while (string3.top() > fret) {
                        string3.pop();
                        counter++;
                    }
                    if (string3.top() != fret) {
                        string3.push(fret);
                        counter++;
                    }
                }
                break;
            case 4:
                if (string4.top() == fret) {
                    continue;
                } else if (string4.top() < fret) {
                    string4.push(fret);
                    counter++;
                } else if (string4.top() > fret) {
                    while (string4.top() > fret) {
                        string4.pop();
                        counter++;
                    }
                    if (string4.top() != fret) {
                        string4.push(fret);
                        counter++;
                    }
                }
                break;
            case 5:
                if (string5.top() == fret) {
                    continue;
                } else if (string5.top() < fret) {
                    string5.push(fret);
                    counter++;
                } else if (string5.top() > fret) {
                    while (string5.top() > fret) {
                        string5.pop();
                        counter++;
                    }
                    if (string5.top() != fret) {
                        string5.push(fret);
                        counter++;
                    }
                }
                break;
            case 6:
                if (string6.top() == fret) {
                    continue;
                } else if (string6.top() < fret) {
                    string6.push(fret);
                    counter++;
                } else if (string6.top() > fret) {
                    while (string6.top() > fret) {
                        string6.pop();
                        counter++;
                    }
                    if (string6.top() != fret) {
                        string6.push(fret);
                        counter++;
                    }
                }
                break;
            default:
                break;
        }
    }

    cout << counter << endl;
    return 0;
}
