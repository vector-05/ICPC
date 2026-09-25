#include <iostream>
#include <stdio.h>
#define ll long long int

int main() {

    // 2. Pseudo Pallindrome

    // input test cases (t)
    ll t;
    std::cin >> t;

    // input array data (looped) (main loop)
    for(int i = 0; i < t; i++) {

        // input n and d
        ll n, d;
        std::cin >> n >> d;

        // array (n)
        ll arr[n];

        // input array elements (looped)
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
        }

        // arr = [a0, a1, a2 ...., an+1]
        //        p1   p2->

        // flag
        int IsTrue = true;

        for (int outer = 0; outer < n; outer++) {

            ll *p1 = &arr[outer];
            
            for (int inner = outer + 1; inner < (n - outer); inner++) {

                ll *p2 = &arr[inner];

                if (abs(*p1 - *p2) <= d) {
                    std::swap(arr[inner], arr[n - 1 - outer]);
                    IsTrue = true;
                    break;
                }

            }

        }
        
        if (!(IsTrue)) {
                std::cout << "NO\n"; 
                break;
            } else {
                std::cout << "YES\n";
            }

    }

    return 0;
}