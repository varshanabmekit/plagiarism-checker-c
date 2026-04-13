# plagiarism-checker-c
A mini project in C that detects plagiarism by comparing two text inputs and calculating similarity percentage
# Plagiarism Checker using C (Rabin-Karp Algorithm)

## 📌 Description
This project is a simple plagiarism checker implemented in C. It uses the Rabin-Karp string matching algorithm (hashing technique) to find matching patterns between two texts.

## 🛠️ Technologies Used
- C Programming
- GCC Compiler

## ⚙️ How It Works
- Takes a main text and a pattern (text to compare)
- Uses hashing (Rabin-Karp algorithm) to search for matching substrings
- Displays the index where matches are found
- Can be extended to calculate similarity percentage

## ▶️ How to Run

1. Compile the program:
   gcc plagiarism.c -o plagiarism

2. Run the program:
   ./plagiarism   (Linux/Mac)
   OR
   plagiarism     (Windows)

## 📊 Example

Input:
Enter the main text:
this project is about matrix storage

Enter the text to compare:
matrix storage

Output:
Match found at index 27

## 🚀 Features
- Fast string matching using hashing
- Efficient for large text
- Simple and easy to understand

## 👨‍💻 Author
Your Name
