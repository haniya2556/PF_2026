#include<stdio.h>
struct Flight {
    char flightNumber[50];
    char departureCity[50];
    char destinationCity[50];
    char date[50];
    int availableSeats;
};
void booking(struct Flight f){
	int seats;
	printf("Enter number of seats to book: ");
	scanf("%d", &seats);
	f.availableSeats=f.availableSeats-seats;
    if (f.availableSeats > 0) {
        printf("\nSeat booked. Remaining seats: %d", f.availableSeats);
    } else {
        printf("\nNo seats available.");
    }
}
void displayFlight(struct Flight f){
    printf("\nFlight Details:\n");
    printf("Flight Number   : %s\n",f.flightNumber);
    printf("Departure City  : %s\n",f.departureCity);
    printf("Destination City: %s\n",f.destinationCity);
    printf("Date            : %s\n",f.date);
    printf("Available Seats : %d\n",f.availableSeats);
}
int main(){
    struct Flight flight1;
    printf("Enter Flight Number: ");
    scanf("%s", flight1.flightNumber);
    printf("Enter Departure City: ");
    scanf("%s", flight1.departureCity);
    printf("Enter Destination City: ");
    scanf("%s", flight1.destinationCity);
    printf("Enter Date: ");
    scanf("%s", flight1.date);
    printf("Enter Available Seats: ");
    scanf("%d", &flight1.availableSeats);
    booking(flight1);
    displayFlight(flight1);
    return 0;
}

