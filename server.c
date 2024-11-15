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

int main() {
    // initialize database
    init_db();
    initialize_books();

    return 0;
}
