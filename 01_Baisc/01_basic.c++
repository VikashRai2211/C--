#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    cout << "Enter two integers: ";
    cin >> a >> b;
    sum = a + b;
    cout << "Sum: " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1 << endl;
    } else if (n2 >= n1 && n2 >= n3) {
        cout << "Largest number: " << n2 << endl;
    } else {
        cout << "Largest number: " << n3 << endl;
    }
    return 0;
}
