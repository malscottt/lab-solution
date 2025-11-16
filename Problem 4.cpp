#include <iostream>
using namespace std;

int main() {
    // Variables for distances
    double eye1, nose_chin1;
    double eye2, nose_chin2;
    double eye3, nose_chin3;

    // Variables for ratios
    double ratio_1;
    double ratio_2;
    double ratio_3;

    // Variables for differences
    double diff_1_2;
    double diff_1_3;
    double diff_2_3;

    cout << "Enter values in cm.\n\n";

    // Input for image 1
    cout << "Enter eye distance and nose to chin distance for image 1:\n";
    cin >> eye1 >> nose_chin1;

    // Input for image 2
    cout << "Enter eye distance and nose to chin distance for image 2:\n";
    cin >> eye2 >> nose_chin2;

    // Input for image 3
    cout << "Enter eye distance and nose to chin distance for image 3:\n";
    cin >> eye3 >> nose_chin3;

    // Compute ratios
    ratio_1 = eye1 / nose_chin1;
    ratio_2 = eye2 / nose_chin2;
    ratio_3 = eye3 / nose_chin3;

    // Compute differences
    diff_1_2 = abs(ratio_1 - ratio_2);
    diff_1_3 = abs(ratio_1 - ratio_3);
    diff_2_3 = abs(ratio_2 - ratio_3);

    cout << "\n";

    // Find the smallest difference (best match)
    if (diff_1_2 < diff_1_3 && diff_1_2 < diff_2_3) {
        cout << "Best match is between image 1 and image 2." << endl;
    }
    else if (diff_1_3 < diff_1_2 && diff_1_3 < diff_2_3) {
        cout << "Best match is between image 1 and image 3." << endl;
    }
    else {
        cout << "Best match is between image 2 and image 3." << endl;
    }

    return 0;
}

/*## Explanation:

**1. Input Section : **
-Reads eye distance and nose - to - chin distance for each of the 3 images

* *2. Compute Ratios : **
-Calculates the ratio for each image : `eye_distance / nose_chin_distance`

* *3. Compute Differences : **
-Finds absolute differences between all pairs of ratios
- `diff_1_2`: difference between image 1 and 2
- `diff_1_3`: difference between image 1 and 3
- `diff_2_3`: difference between image 2 and 3

* *4. Find Best Match : **
-Compares all three differences
- The smallest difference indicates the best match(most similar faces)

## Sample Output :
```
Enter values in cm.

Enter eye distance and nose to chin distance for image 1:
5.7 5.3
Enter eye distance and nose to chin distance for image 2 :
6.0 5.0
Enter eye distance and nose to chin distance for image 3 :
6.0 5.6

    Best match is between image 1 and image 3. */