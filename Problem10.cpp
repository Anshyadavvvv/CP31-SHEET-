#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        int total_points = 0;
    
    
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            char ch;
            cin >> ch;
            
           
            if (ch == 'X') {
                int ring_level = min({r, 9 - r, c, 9 - c}) + 1;
                total_points += ring_level;
            }
        }
    }
    
    cout << total_points << "\n";
    }
    
    return 0;
}