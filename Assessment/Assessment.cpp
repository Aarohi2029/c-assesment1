#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string customerName;
    int choice, quantity;
    double totalBill = 0.0;
    
     cout << "                  ----------Tops Tech. Fast Food----------" << endl;

    cout << "Please enter your name: ";
    getline(cin, customerName);

    cout << "Hello " << customerName << "!" << endl;

    cout << "\nWhat would you like to order?" << endl;
    
    
    cout << "\n\n\n1) Pizzas" << endl;
    cout << "2) Burgers" << endl;
    cout << "3) Sandwich" << endl;
    cout << "4) Rolls" << endl;
    cout << "5) Biryani" << endl;
    cout << "\nPlease enter your choice: ";
    cin >> choice;
 
 //switch case
    switch (choice) {
    	case 1:
                cout << "\nPizza Menu:\n";
                cout << "1. Margherita Pizza - Rs.200\n";
                cout << "2. Garden delight Pizza- Rs.250\n";
                cout << "3. Cheesy-7 Pizza- Rs.300\n";
                cout << "\nEnter your choice: ";
                int subchoice;
                cin >> subchoice;
                cout << "\nEnter quantity: ";
                cin >> quantity;
                
				// switch case
                switch (subchoice) {
                    case 1:
                        totalBill = 200 * quantity;
						break;
                    case 2:
                       totalBill = 250 * quantity;
                        break;
                    case 3:
                        totalBill = 300 * quantity;
                        break;
					        
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
            case 2:
                cout << "\nBurger Menu:\n";
                cout << "1. Cheeseburger - Rs.120\n";
                cout << "2. Veggie Burger - Rs.180\n";
                cout << "\nEnter your choice: ";
                int subChoice;
                cin >> subChoice;
                cout << "\nEnter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                   case 1:
                    totalBill = 120 * quantity;
                    break;
                    case 2:
                    totalBill = 180 * quantity;
                    break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
        case 3:
            cout << "1) Club Sandwich Rs.240" << endl;
            cout<<"2) cheese grill sandwitch Rs.130"<<endl;
            int sandwichChoice;
            cin >> sandwichChoice;

            cout << "\nPlease enter the quantity: ";
            cin >> quantity;

            switch (sandwichChoice) {
                case 1:
                    totalBill = 240 * quantity;
                    break;
                    case 2:
                    totalBill = 130 * quantity;
                    break;
                    
                default:
                    cout << "Invalid sandwich choice." << endl;
                    return 1; // Exit the program with an error code
            }
            break;
            case 4:
                cout << "\nRolls Menu:\n";
                cout << "1. Aloo chilly Roll - Rs.170\n";
                cout << "2. Veg Paneer Roll - Rs.230\n";
                cout << "\nEnter your choice: ";
                int sub;
                cin >> sub;
                cout << "\nEnter quantity: ";
                cin >> quantity;
                switch (sub) {
                    case 1:
                         totalBill = 170 * quantity;
                        break;
                    case 2:
                        totalBill = 230 * quantity;
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
                case 5:
                cout << "\nBiryani Menu:\n";
                cout << "1. veg Biryani - Rs.210\n";
                cout << "2. Paneer tika Biryani - Rs.270\n";
                cout << "\nEnter your choice: ";
                cin >> subChoice;
                cout << "\nEnter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        totalBill = 210 * quantity;
                        break;
                    case 2:
                       totalBill = 270 * quantity;
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;

        default:
            cout << "Invalid choice." << endl;
            return 1; // Exit the program with an error code
    }

    cout << fixed << setprecision(2);
    cout << "\n\nYour total bill is: Rs." << totalBill << endl;
    cout << "\nYour order will be delivered in 40 minutes." << endl;

    char additionalOrder;
    cout << "\nThank you for ordering from Tops Tech Fast Food. Would you like to order anything else? (Y/N): ";
    cin >> additionalOrder;

    if (additionalOrder == 'Y' || additionalOrder == 'y') {
        // Add code for additional orders if needed
        cout << "Additional ordering functionality not implemented in this example." << endl;
    } else {
        cout << "\nThank you. Have a great day!" << endl;
    }

    
}
