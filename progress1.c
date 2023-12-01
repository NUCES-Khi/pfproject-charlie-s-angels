/*
*
*
*
Programmers:
1. Zunaira Amjad (23k-0013)
2. Tanisha Kataria (23k-0067)
3. Rayyan Merchant (23k-0073)
Desc: Online cab service
*
*
*
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

//asking if logging in as driver or customer
char identification (char identity) {
    printf ("Press \"d\" if driver and \"c\" if user:");
    scanf ("%c" ,&identity);

return identity;
}
//WILL ADD IF STATEMENT IN MAIN FOR USER AND DRIVER AND MOVE ON FROM THERE

/*
*
*
DEALING WITH THE USER
*
*
*/
//asking user to set an username and password
void user_login_setup(int phone_number, char set_pass[8]){
    printf ("Enter the phone number\n");
    scanf ("%s" , phone_number);
    //validating the phone number (making sure it is 11 digits)
    int rem;
    int quotient;
    int count=0;
    //if the number isnt less than 10 in 8 attempts to make it a single integer than it is not equal to 11 digits
    do{
        rem = phone_number%10;
        quotient = phone_number/10;
        phone_number = quotient;
        count++;
    }while (phone_number>10);

    if (count != 8){
        printf ("Invalid Input. Make sure you enter the right number");
    }
    //if the number is verified than we ask for password
    else if (count == 8){
         printf ("Enter a unique 8 characters passowrd\n");
         scanf ("%s" , set_pass);
         int size = strlen(set_pass); //using string function to find the size of the input character
         //checking the size for the password for validity
         if (size != 8){
         printf ("Invalid password. Only allows 8 characters\n");
         }
    }
}
/*PROBLEMS:
1.STORE DATA IN FILING 
*/

//bool function to input and check phone number and password
bool user_login_input(char number, char pass[8]){
    printf ("Phone number:\t");
    scanf ("%d" , number);
    //calling the set email and password function
    char s_m[20],s_p[8];
    //validating the phone number (making sure it is 11 digits)
    int check_rem;
    int check_quotient;
    int check_count=0;
    //if the number isnt less than 10 in 8 attempts to make it a single integer than it is not equal to 11 digits
    do{
        check_rem = number%10;
        check_quotient = number/10;
        number = check_quotient;
        check_count++;
    }while (number>10);
    user_login_setup(s_m[20], s_p[8]);
    if (check_count == 8){
        if ((strcmp(s_p[20], pass[20])) == 0){
            printf ("WELCOME TO CALL-A-CAB\n");
            return true;
        }
        else {
            printf ("Invalid Input. Kindly make sure that your phone number and password is correct\n");
            return false;
        }
    }
}
/*PROBLEMS:
1. WILL STORE THE PREVIOUS DATA IN FILING AND THEN CHECK
*/ 

//asking user if already signed up or not
void signing_up(int su){
    printf ("If you already have an account press 1 and if not then press 0\n");
    scanf ("%d" ,&su);
    char pn,sp[20],n,p[20];
    if (su == 0){
        user_login_setup(pn,sp[20]);
    }
    else if (su == 1){
        user_login_input(n,p[20]);
    }
}

//taking the input of the type of vehicle form user
int vehicle_option(int c){
    //asking the user to choose options with the help of numbers
    printf ("Please select your vehicle of choice\n");
    printf ("1: Bike\t2: RideAC\t3: Ride\t4: Premium\t5: Ride Mini");
    scanf ("%d" ,&c);

return c;
}

//storing credit and debit card info for payment use
struct credit_card_info {
    int c_card_no;
    int c_expiry_date;
    int c_cvv_no;
};

//will use this function if the user is using credit card for the first time
void credit_card_info_input (struct credit_card_info cci) {
    printf ("Enter the card number\n");
    scanf ("%d\n" , &cci.c_card_no);
    printf ("Enter the expiry date of the card\n");
    scanf ("%d\n" , &cci.c_expiry_date);
    printf ("Enter the CVV/CVS number\n");
    scanf ("%d\n" , &cci.c_cvv_no);
}

struct debit_card_info {
    int d_card_no;
    int d_expiry_date;
    int d_cvv_no;
};

//will use this function if the user is using debit card for the first time
void debit_card_info_input (struct debit_card_info dci){
    printf ("Enter the card number\n");
    scanf ("%d\n" , &dci.d_card_no);
    printf ("Enter the expiry date of the card\n");
    scanf ("%d\n" , &dci.d_expiry_date);
    printf ("Enter the CVV/CVS number\n");
    scanf ("%d\n" , &dci.d_cvv_no);
}


//choosing payment methods
int payment_method (int pm){
    printf ("Enter your preferred method");
    printf ("1.CASH, 2.DEBIT CARD, 3.CREDIT CARD, 4.EASYPAISA");
    scanf ("%d" ,pm);
return pm;
}

struct locat {
    int location_pickup;
    int location_dropoff;
};
//finding the cost of the drive using predefined locations
int locat(struct locat locations, int location_info[4][2]){
    printf ("Choose the pick-up location:\n");
    printf ("1.FAST-NU\t", "2.MILLENIUM MALL\t", "3.LUCKY ONE\t", "4.ASKARI PARK\t\n");
    scanf ("%d\n" ,&locations.location_pickup);
    printf ("Choose the drop-off location:\n");
    printf ("1.FAST-NU\t", "2.MILLENIUM MALL\t", "3.LUCKY ONE\t", "4.ASKARI PARK\t\n");
    scanf ("%d\n" ,&locations.location_dropoff);
    int cost;
    location_info[4][2] = {{1,0}, {2,500}, {3,500}, {4,500}};
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (location_info[i][1] == locations.location_pickup){
                if (location_info[j][1] == locations.location_dropoff){
                    cost = location_info[i][1] + location_info[j][1];
                }
             }        
         }
     }
return cost;
}
/*PROBLEMS:
1. HOW WILL WE FIND OR INTIALIZE THE DISTANCE?
3. DECIDE LOCATIONS
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int isPeakTime() 
{
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    int currentHour = tm_info->tm_hour;
    int currentMinute = tm_info->tm_min;

    if ((currentHour >= 7 && currentHour < 9) ||    
        (currentHour >= 16 && currentHour < 18)) 
    {  
        return 1; // Peak time
    }

    return 0; // Not peak time
}

int calculatePrice(struct Transportation *transport, bool isPeakTime) 
{ 
    float finalPrice = transport->basePrice;

    if (isPeakTime) 
    {
        finalPrice *= transport->peakFactor;
    }

    return finalPrice;
}
/*
void generateBill(char userName[20], char driverName[20], float finalPrice, char pickupLocation[50], char dropoffLocation[50]) 
{
    printf("\n---------------------- Ride Hailing Bill -----------------------\n\n");
    printf("User Name: %s\n", userName);
    printf("Driver Name: %s\n", driverName);
    printf("Pickup Location: %s\n", pickupLocation);
    printf("Dropoff Location: %s\n", dropoffLocation);
    printf("Final Price: $%.2f\n", finalPrice);
    printf("\n----------------------------------------------------------------\n");
}
*/

void simulatePaymentProcessing(float finalPrice, int paymentMethod) 
{
    switch (paymentMethod) 
    {
        case 1:
            printf("Payment successful! You have paid with cash.\n");
            break;
        case 2:
            printf("Payment successful! You have paid with a debit card.\n");
            break;
        case 3:
            printf("Payment successful! You have paid with a credit card.\n");
            break;
        case 4:
            printf("Payment successful! You have paid with Easypaisa.\n");
            break;
        default:
            printf("Invalid payment method. Exiting...\n");
            exit(1);
    }
}


void rateDriver(struct CabDriver *driver) 
{
    int rating;
    printf("Rate your driver (1 to 5): ");
    scanf("%d", &rating);

    if (rating >= 1 && rating <= 5) 
    {
        driver->rating = (driver->rating + rating) / 2.0; // Calculate average rating
        printf("Thank you for your rating!\n");
    } else 
    {
        printf("Invalid rating. Please enter a number between 1 and 5.\n");
        rateDriver(driver); // Recursively ask for a valid rating
    }
}


// Enhanced function to generate the bill
void generateBill(struct User user, struct CabDriver driver, struct Transportation transport, float finalPrice) {
    printf("\n---------------------- Ride Hailing Bill -----------------------\n\n");
    
    printf("User Details:\n");
    printf("Name: %s\n", user.name);
    printf("Phone Number: %s\n", user.phoneNumber);
    printf("Contact Details: %s\n", user.contactDetails);

    printf("\nDriver Details:\n");
    printf("Name: %s\n", driver.name);
    printf("Phone Number: %s\n", driver.phoneNumber);
    printf("Email: %s\n", driver.email);
    printf("Cab Number: %s\n", driver.cabNumber);
    printf("Rating: %.2f\n", driver.rating);

    printf("\nRide Details:\n");
    printf("Destination: %s\n", transport.destination);
    printf("Vehicle Type: %s\n", transport.vehicleType);
    printf("Base Price: $%.2f\n", transport.basePrice);
    printf("Peak Factor: %.2f\n", transport.peakFactor);
    printf("Final Price: $%.2f\n", finalPrice);

    printf("\n----------------------------------------------------------------\n");
}


#include <stdio.h>

// Structure to represent feedback
struct DriverFeedback 
{
    int rating;
    char comments[100];
};

// Function to gather feedback from the driver
void provideDriverFeedback(struct CabDriver *driver) 
{
    struct DriverFeedback feedback;

    // Get rating from the driver
    printf("Rate your experience as a driver (1 to 5): ");
    scanf("%d", &feedback.rating);

    // Get comments from the driver
    printf("Provide comments (optional): ");
    scanf(" %[^\n]", feedback.comments);

    // Process or store the feedback as needed
    processDriverFeedback(driver, feedback);

    printf("Thank you for providing feedback!\n");
}



int main() 
{
    struct Transportation transportDetails; 
    struct cabDriver chosenDriver;

    initializeTransportation(&transportDetails);

    int isPeakTimeFlag = isPeakTime();

    char userDestination[50];
    char userVehicleType[20];

    printf("Enter your destination: ");
    scanf("%s", userDestination);

    printf("Choose your preferred vehicle (Bike, Car, Rickshaw): ");
    scanf("%s", userVehicleType);

    float finalPrice = calculatePrice(&transportDetails, isPeakTimeFlag);

    char userName[20];
    char driverName[20];

    printf("Enter your name: ");
    scanf("%s", userName);

    printf("Enter driver's name: ");
    scanf("%s", driverName);

    //generateBill(userName, driverName, finalPrice, userDestination, userVehicleType);
    generateBill(userDetails, chosenDriver, transportDetails, finalPrice);
    
    simulatePaymentProcessing(finalPrice, userDetails.paymentMethod);

    rateDriver(&chosenDriver);

     provideDriverFeedback(&chosenDriver);

    return 0;
}
