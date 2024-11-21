/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
	int option;
	do {
		//menu
		printf("Choose an option:\n");
		printf("\t1. Happy Face:\n");
		printf("\t2. Balanced Number\n");
		printf("\t3. Generous Number\n");
		printf("\t4. Circle Of Joy\n");
		printf("\t5. Happy Numbers\n");
		printf("\t6. Festival Of Laughter\n");
		printf("\t7. Exit\n");
		scanf("%d", &option);
		switch (option) {
			// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
			/* Example:
			* n = 3:
			* 0   0
			*   o
			* \___/
			*/
			case 1: {
				// Define the characters for the eyes, nose, and mouth, and an integer for the face size
				char eyes;
				char nose;
				char mouth;
				int size;

				// Ask the user to enter the characters for the eyes, nose, and mouth
				printf("Enter symbols for the eyes, nose, and mouth:\n");
				scanf(" %c", &eyes); // Read the first character for eyes
				scanf(" %c", &nose); // Read the second character for nose
				scanf(" %c", &mouth); // Read the third character for mouth

				// Ask the user to enter the face size
				printf("Enter face size:\n");
				scanf("%d",&size);

				// Loop until the user enters a valid odd and positive number for the size
				while ((size%2)!=1 || size<=0) {
					printf("The face's size must be an odd and positive number, please try again:\n");
					scanf("%d", &size); // Read the face size again if it's invalid
				}

				// Print the eyes row (first row of the face)/ print eyes
				printf("%c",eyes); // Print the left eye
				for (int i = 0; i < size; i++) // Print spaces between the eyes
				{printf(" ");}
				printf("%c\n",eyes); // Print the right eye and move to the next line

				// Print the nose row (middle part of the face)
				for (int i = 0; i < ((size/2)+1); i++) // Print spaces before the nose
				{printf(" ");}
				printf("%c",nose); // Print the nose character

				// Print the mouth row (bottom part of the face)
				printf("\n\\"); // Start of the mouth, with a backslash to create the shape
				for (int i = 0; i < size; i++) // Print the mouth's width
				{printf("%c",mouth);} // Print the mouth character
				printf("/\n"); // End of the mouth, with a forward slash to close the shape
			}
			break;

			// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
			// and the sum of all digits to the right of the middle digit(s) are equal
			/* Examples:
			Balanced: 1533, 450810, 99
			Not blanced: 1552, 34
			Please notice: the number has to be bigger than 0.
			*/
			case 2:
				int number;
				// Ask the user to enter a number
				printf("Enter a number:\n");
				scanf(" %d", &number);

				// Check if the number is positive. If not, ask again.
				while (number<=0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}

				// Create a copy of the original number to use for processing
				int number1 = number;
				int counter = 0;

				// Count the number of digits in the number
				while (number1!=0){
					counter++; // Increase the counter for each digit
					number1 = number1/10; // Remove the last digit by dividing by 10
					}

				// Divide the digit count by 2 to split the number into two halves
				counter =counter/2;

				// Calculate the power of 10 to divide the number in half (10^counter)
				int power = 1;
				for (int i =0; i<counter; i++) {
					power*=10; // Multiply power by 10 for each digit in the first half

				}

				// Split the number into the first and last parts
				int first = number/power; // Get the first half by dividing by power
				int last = number%power; // Get the last half by using the modulus operator

				// Initialize sums for the first and last parts
				int sum_first = 0;
				int sum_last = 0;

				// Calculate the sum of digits
				for (int i =0;i<counter;i++) {
					sum_first += first%10; // Add the last digit of 'first' to sum_first
					first = first/10; // Remove the last digit from 'first'
					sum_last += last%10; // Add the last digit of 'last' to sum_last
					last = last/10; // Remove the last digit from 'last'
				}

				// Check if the sums of the two halves are equal
				if(sum_first == sum_last) {
					printf("This number is balanced and brings harmony!\n");
				}
				else {
					printf("This number isn't balanced and destroys harmony!\n");
				}
				break;

			// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
			/* Examples:
			Abudant: 12, 20, 24
			Not Abudant: 3, 7, 10
			Please notice: the number has to be bigger than 0.
			*/
			case 3:
				printf("3\n");
			break;

			// Case 4: determine wether a number is a prime.
			/* Examples:
			This one brings joy: 3, 5, 11
			This one does not bring joy: 15, 8, 99
			Please notice: the number has to be bigger than 0.
			*/
			case 4:
				printf("4\n");
			break;

			// Case 5: Happy numbers: Print all the happy numbers between 1 to the given number.
			// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
			/* Examples:
			Happy :) : 7, 10
			Not Happy :( : 5, 9
			Please notice: the number has to be bigger than 0.
			*/
			case 5:
				printf("5\n");
			break;

			// Festival of Laughter: Prints all the numbers between 1 the given number:
			// and replace with "Smile!" every number that divided by the given smile number
			// and replace with "Cheer!" every number that divided by the given cheer number
			// and replace with "Festival!" every number that divided by both of them
			/* Example:
			6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
			*/
			case 6:
				printf("6\n");
			break;


			case 7:
				printf("7\n");
				break;
			default:
				printf("This option is not available, please try again\n");
		}
		} while(option != 7);
		printf("Thank you for your journey through Numeria!\n");

		return 0;
	}
