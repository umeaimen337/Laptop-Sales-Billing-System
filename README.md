# Laptop Sales Billing System

Laptop Sales Billing System is a C++ program designed to simulate a billing process for a laptop store. It calculates a detailed invoice for various laptop brands based on user inputs.

## Overview

This program allows the cashier to enter the quantities of laptops sold for different brands—Dell, HP, Lenovo, Apple, and Acer. It computes individual totals for each brand, sums them for a subtotal, applies an 8.25% tax rate, and then displays the final amount on a formatted invoice.

## Features

- **User Input:**
  - Collects the cashier's and customer's names.
  - Prompts for the quantity sold for each laptop brand.
- **Bill Calculation:**
  - Computes the total price for each laptop brand.
  - Calculates the subtotal, applies an 8.25% tax rate, and computes the final bill amount.
- **User Experience:**
  - Displays a loading animation before generating the bill.
  - Outputs a formatted invoice detailing quantities, unit prices, individual totals, subtotal, tax, and total amount.

## Requirements

- A C/C++ compiler (e.g., GCC, MSVC).
- A Windows environment (due to the usage of `conio.h` and `Sleep` functions) or a compatible system.

## How to Compile and Run

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/your-username/Laptop-Sales-Billing-System.git
   cd Laptop-Sales-Billing-System
   
2. **Compile the Program:**
 ```bash
gcc -o laptop_sales_billing_system laptop_sales_billing_system.c
Note: Ensure your compiler supports the required functions.

3. **Run the program:**
```bash
./laptop_sales_billing_system

Follow the Prompts:

(Enter the cashier's and customer's names.
Input the number of laptops sold for each brand.
After a short loading animation, the program displays the generated bill.
Code Structure
Input Section:
Reads user input for the cashier's and customer's names and the quantities for each laptop brand.)

