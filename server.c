#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sqlite3.h>

#define PORT 8080
#define MAX_CLIENTS 10

// Database connection
sqlite3 *db;

// Initialize the database
void init_db() {

// Function to prepopulate books table - load the database with initial values for books, so
//that it has a few books to begin with
void initialize_books() {


// Function to create a new account
void create_account(int client_socket, char name[]) {
    

// function to get user id based on name
int get_user_id(char name[]) {
    
void display_menu(int client_socket) {        // Gracie
    char buffer[1024];
    int choice;

    while (1) {                        // client should be sent the menu options
        snprintf(buffer, sizeof(buffer),
                 "GJMB Library Menu Options:\n"
                 "\t1. Account Information\n"
                 "\t2. Find a Book\n"
                 "\t3. Rent a Book\n"
                 "\t4. Return a Book\n"
                 "\t5. Exit\n\n"
                 "Enter your choice : ");
        write(client_socket, buffer, strlen(buffer));

                                                    // read client choice
        read(client_socket, buffer, sizeof(buffer));
        choice = atoi(buffer);

        switch (choice) {
            case 1:
                display_account_info(client_socket); // something is funny here - i think
                break;
            case 2:
                find_books(client_socket);
                break;
            case 3:
                rent_book(client_socket, 1); // Replace 1 with actual user ID
                break;
            case 4:
                return_book(client_socket, 1); // Replace 1 with actual user ID
                break;
            case 5:
                write(client_socket, "Goodbye!\n", 9);
                close(client_socket);
                return; // Exit menu loop
            default:
                write(client_socket, "Your answer was an invalid choice. Please, try again.\n", 27);
        }
    }
}

// Function to display user account information, including rented books
// Belinda
void display_account_info(int client_socket,char name[]) {
    int user_id = get_user_id(name);
    if (user_id == -1) {
        write(client_socket, "User not found.\n", 17);
        
    printf("ACCOUNT INFORMATION:\n");
    printf("-------------------------------------------\n")
    printf("Name: %s, %s\n", user.firstName, user.lastName);
    printf("User ID: %d", user.userID);
     
    if (user.booksRentedCount > 0) {
        printf("You currently have the following books rented:\n");
        for (int i = 0; i < user.booksRentedCount; i++) {
             //PRINT RENTED BOOK INFORMATION
        }
    }
    else {
    printf("You currently have no books rented.\n");
    } 
} // end display_account_info() function


// Function to display all books in the bookstore
void find_books(int client_socket) {

// Function to rent a book
void rent_book(int client_socket, int user_id) {

// Function to return a book
void return_book(int client_socket, int user_id) {

// Function to log in
int login(int client_socket, char name[]) {

void handle_client(int client_socket) {
    char name[256];
    int logged_in = 0;

    // Authenticate user
    logged_in = login(client_socket, name);

    if (logged_in) {        // if user login was successful - keep running the display menu
        display_menu(client_socket);
    } 
    else {                // else login was a failure - close the socket
        write(client_socket, "The authentication process was a failure. Connection is closing.\n", 43);
        close(client_socket);
    }
}

int main() {
    // initialize database
    init_db();
    initialize_books();

    return 0;
}
