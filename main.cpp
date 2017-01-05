#include <iostream>
#include <iomanip>

int main() {

    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    const double COMMISSION_RATE = .02;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;

    double amount_paid = SHARES_BOUGHT * PURCHASE_PRICE;
    double purchase_commission = amount_paid * COMMISSION_RATE;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Joe bought " << SHARES_BOUGHT << " shares at $"
        << PURCHASE_PRICE << " for $" << amount_paid << std::endl;
    std::cout << "Joe paid 2% commission to his broker for the purchase which amounted to $" << purchase_commission
        << std::endl;

    double amount_sold = SHARES_SOLD * SALE_PRICE;
    double sale_commission = amount_sold * COMMISSION_RATE;
    std::cout << "Joe sold his " << SHARES_SOLD << " shares at $" << SALE_PRICE << " for $" << amount_sold
        << std::endl;
    std::cout << "Joe paid 2% commission to his broker for the sale which amounted to $" << sale_commission
        << std::endl;

    double profit = amount_sold - amount_paid - purchase_commission - sale_commission;
    std::cout << "The profit Joe received for this transaction was $" << profit << std::endl;

    return 0;
}