#include <iostream>
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    // Constants for water billing rates and taxes
    const int RATE1 = 150;  // Rate for first 10 units
    const int RATE2 = 175;  // Rate for next 10 units (11 to 20)
    const int RATE3 = 200;  // Rate for units beyond 20
    const float SURCHARGE = 0.15;  // 15% surcharge
    const float VAT = 0.18;  // 18% VAT

    // User inputs for balance and water consumption
    float balance;
    int units;

    // (i) Input prompts for account balance and water units consumed
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    // (ii) Calculate total cost based on tiered pricing
    float totalCost = 0;
    if (units <= 10) {
        totalCost = units * RATE1;
    } else if (units <= 20) {
        totalCost = (10 * RATE1) + (units - 10) * RATE2;
    } else {
        totalCost = (10 * RATE1) + (10 * RATE2) + (units - 20) * RATE3;
    }

    // (iii) Apply 15% surcharge
    float surchargeAmount = totalCost * SURCHARGE;
    totalCost += surchargeAmount;

    // Apply 18% VAT
    float vatAmount = totalCost * VAT;
    totalCost += vatAmount;

    // Display total cost breakdown
    cout << fixed << setprecision(2);  // Set decimal precision to 2 places
    cout << "Total cost before VAT and surcharge: " << totalCost - vatAmount - surchargeAmount << " UGX" << endl;
    cout << "Surcharge (15%): " << surchargeAmount << " UGX" << endl;
    cout << "VAT (18%): " << vatAmount << " UGX" << endl;
    cout << "Total cost including VAT and surcharge: " << totalCost << " UGX" << endl;

    // (iv) Check if the user's balance is sufficient
    if (balance >= totalCost) {
        // (v) Transaction successful, calculate and show remaining balance
        float remainingBalance = balance - totalCost;
        cout << "Transaction successful. Remaining balance: " << remainingBalance << " UGX" << endl;
    } else {
        // Insufficient balance
        cout << "Error: Insufficient balance. You only have " << balance << " UGX." << endl;
        cout << "You need " << totalCost << " UGX to cover the total cost." << endl;
    }

    return 0;
}
