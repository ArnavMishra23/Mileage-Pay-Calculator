# Mileage Pay Calculator

## Overview
The Mileage Pay Calculator is a simple C program designed to calculate the total distance traveled and corresponding reimbursement amount based on a fixed rate per mile. This program is useful for tracking and calculating travel expenses efficiently.

## Features
- Input starting and ending odometer readings.
- Automatically calculates the distance traveled.
- Computes the total pay based on a pre-set rate per mile.
- Displays the results in a formatted output.

## How It Works
1. The user inputs the starting and ending odometer readings.
2. The program calculates the distance as `endOdometer - startOdometer`.
3. The total pay is calculated using a constant rate of $0.35 per mile.
4. The results are displayed in an easy-to-read format.

## Prerequisites
- A C compiler (e.g., GCC, Turbo C, etc.)
- Basic understanding of running C programs

## How to Run
1. Clone this repository:
git clone https://github.com/ArnavMishra23/mileage-pay-calculator.git

2. Navigate to the project directory:
cd mileage-pay-calculator

3. Compile the program:
gcc mileage_pay_calculator.c -o mileage_pay_calculator

4. Run the program:
./mileage_pay_calculator

# License
This project is licensed under the MIT License. Feel free to use and modify the code as needed.
