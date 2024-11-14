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
void display_account_info(int client_socket,char name[]) {

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
