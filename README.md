[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/j0WbCUcA)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=13059250&assignment_repo_type=AssignmentRepo)

Programmers:
|-|----------|
|Name|ID|
|Zunaira Amjad|(23k-0013)|
|Tanisha Kataris|(23k-0067)|
|Rayyan Merchant|(23k-0073)|

Desc: Call a cab

PROPOSAL LINK:
https://docs.google.com/presentation/d/16gGsPkAVjz7C9MmrdHqR93ki863HeUEP/edit?usp=sharing&ouid=103368575201820079110&rtpof=true&sd=true


PROGRESS
google doc link: https://docs.google.com/document/d/1iR2aF8pg_EvJP8DkRSaCUtAlEhXwLBjLyuu2_I0QzWQ/edit?usp=sharing

USER INPUT:
Login and password: (zunaira)
Asking for a set email and password
Will ask the user for email and password 
Will verify the email and password 
If correct then will let the user book a ride else will print a message
CODING TECHNIQUES USED:
Functions
Strings
Loops
Conditional statements
Booleans
Code:
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





Car Options: (zunaira)
Give options for different types of vehicles
Providing options with the help of numbers provided in the print statement
CODING TECHNIQUES USED:
Functions
Arrays
Code:
//taking the input of the type of vehicle form user
int vehicle_option(int c){
    //asking the user to choose options with the help of numbers
    printf ("Please select your vehicle of choice\n");
    printf ("1: Bike\t2: RideAC\t3: Ride\t4: Premium\t5: Ride Mini");
    scanf ("%d" ,&c);


return c;
}

Location:(zunaira)
Will be predefined with set destinations for pickup and dropoff
Take input in the form of integer
CODING TECHNIQUES USED:
Functions
Do-while
structures
Code
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


Payment method:(zunaira)
Will have four functions 
To store credit card info
To store debit card info
To store and add stored credit
Choose the payment method
Will have two structures for credit and debit card info
Will return the payment choice and go to the required function according to the choice made (integer form)
CODING TECHNIQUES USED:
Functions
Arrays
Structures 
Code


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


//will use this when the payment option is through stored credit


int payment_method (int pm){
    printf ("Enter your preferred method");
    printf ("1.CASH, 2.DEBIT CARD, 3.CREDIT CARD, 4.EASYPAISA”);
    scanf ("%d" ,pm);
return pm;
}


B. OUTPUT:
Worked mainly on the int main function to get outputs
Call identification function for the identity of the user
Making if function to call functions for user as follows
Asking for previous registration 
Registration and login 
For driver after registration will ask for availabilityT
For customer after registering will move on to the car booking phase
Will choose vehicle and will calculate price using peak factor
Driver and customer details are shared between each other
code:
int main() {
    // Call the function
    if (isRegistered()) {
        printf("You are already registered for transportation.\n");
    } else {
        printf("You are not registered for transportation yet.\n");
        // Add code here to handle the registration process if needed
    }

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

Price calculation:
Location and peak times are considered using time header library
CODING TECHNIQUES USED:
Header library of time
Time function
Logic building (for calculating price)
CODE:
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

6.  Generated bill
CODE;
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



7. Option to rate the driver and feedback
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




C. ADMIN INPUT:
1. 	Prices: (tanisha)
   Will be predefined with set destinations for prices and vehicle transportation.
Take input in the form of integer
CODING TECHNIQUES USED:
Functions
 Arrays
Structures 

  CODE:

/ Structure to represent transportation information
struct Traznsportation {
    char destination[50
    char vehicleType[20];
    float price;
};


// Function to input transportation details
void inputTransportation(struct Transportation transport[], int n) {
    printf("\nEnter Transportation Details:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nTransportation %d:\n", i + 1);
        printf("Enter Destination: ");
        scanf("%s", transport[i].destination);
        printf("Enter Vehicle Type: ");
        scanf("%s", transport[i].vehicleType);
        printf("Enter Price: ");
        scanf("%f", &transport[i].price);
    }
}

// Function to display transportation details
void displayTransportation(struct Transportation transport[], int n) {
    printf("\nTransportation Details:\n");
    printf("%-20s%-20s%-10s\n", "Destination", "Vehicle Type", "Price");
    printf("--------------------------------------------------\n");












    for (int i = 0; i < n; ++i) {
        printf("%-20s%-20s%-10.2f\n", transport[i].destination, transport[i].vehicleType, transport[i].price);
    }
}










2. Peak Factor: (tanisha)
 Will be predefined with set peak factor (Timing)
Take input in the form of integer
CODING TECHNIQUES USED:
Functions
Structures
Array





TO DO
Filing to store information of previous drivers and customers
DMA to memory management and decrease compile time
Working on the main function still ongoing


