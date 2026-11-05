
#include <stdio.h>
//n is the reservation
int main(void)
{
    // Declare variables for each booking
    int T, G, C, N;
    double PE, PG;

    // Initialize statistics with zero
    int totalVisitors = 0;
    int acceptedBookings = 0;
    double totalRevenue = 0.0;

    // Read the total number of bookings
    scanf("%d", &N);

    // Repeat the process N times
    for (int i = 0; i < N; i++) {

        // T  = number of visitors
        // PE = price of a single ticket
        // PG = price of a group ticket
        // G  = people covered by one group ticket
        // C  = booking capacity
        scanf("%d %lf %lf %d %d",
              &T, &PE, &PG, &G, &C);

        // Accept the booking only if capacity is sufficient
        if (T <= C) {

            // Integer division gives the number of full groups
            int groupTickets = T / G;

            // Modulo gives the number of remaining visitors
            int singleTickets = T % G;

            // Calculate the price of this booking
            double price = groupTickets * PG
                         + singleTickets * PE;

            // Add visitors to the previous total
            totalVisitors += T;

            // Add the booking price to total revenue
            totalRevenue += price;

            // Increase the number of accepted bookings by one
            acceptedBookings++;

            // Print the price for this booking
            printf("Booking %d: %.2f\n", i + 1, price);

        } else {

            // Reject the booking if capacity is exceeded
            printf("Booking %d: Capacity exceeded!\n", i + 1);
        }
    }

    // Initialize average to avoid using an undefined value
    double average = 0.0;

    // Avoid division by zero if no bookings were accepted
    if (acceptedBookings > 0) {

        // Cast to double for floating-point division
        average = (double)totalVisitors / acceptedBookings;
    }

    // Print final statistics
    printf("Total visitors: %d\n", totalVisitors);
    printf("Total revenue: %.2f\n", totalRevenue);
    printf("Average visitors: %.3f\n", average);

    return 0;
}
