#include <iostream> 

// Вар 3
int main() 
{ 
    setlocale(LC_ALL, "Russian"); 

    // const int n = 10;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     std:: cin >> a[i]; 
    // }

    // int prod = 1, min = 600000, min_ind = -1;
    // for (int i = 0; i < n; i++) {
    //     if ((-2 <= a[i]) & (a[i] <= 20)) {
    //         prod *= a[i];
    //         if (a[i] < min) {
    //             min = a[i];
    //             min_ind = i;
    //         }
    //     }
    // }

    // std:: cout << prod << ' ' << min << ' ' << min_ind << std:: endl;
    int n, sum;
    std:: cin >> n;
    int i;
    while (n > 0) {
        i = n % 10;
        if (i % 2 == 0) sum += i;
        n /= 10;
    }
    std:: cout << sum << std:: endl;
    return 0; 
}
