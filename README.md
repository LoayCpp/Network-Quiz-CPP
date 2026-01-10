# 🧠 Network Quiz Console Application (C++)

A simple **console-based quiz application** written in **C++** that tests basic computer networking concepts.

This project was built as a **learning-focused exercise** to practice fundamental C++ programming concepts such as **functions, structures, input validation, and program flow control**.

In the latest version, the project uses a **global array of questions** combined with a **for loop** and a **single function** to handle all question logic, which makes the code **modular, cleaner, and easier to maintain**.

---

## 📌 Project Idea

The application presents a series of **multiple-choice questions** related to computer networks.  
After each question, the program:

- Reads the user’s answer
- Checks correctness
- Updates the student’s score
- Displays immediate feedback
- Moves to the next question

### New Strategy:

- All questions are stored in a **global array (`stQuestion Question[]`)**  
- A **single function (`PrintAllQuestions`)** handles displaying the question, options, and checking the answer  
- A **for loop** iterates over the array, replacing the previous approach of calling each question manually

This strategy **reduces code duplication**, improves readability, and allows easy addition of new questions.

---

## ✨ Features

- ✅ Multiple-choice network questions
- ✅ Input validation (accepts only values 1–4)
- ✅ Tracks:
  - Total number of questions
  - Correct answers
  - Wrong answers
- ✅ Uses `struct` to store student and question data
- ✅ Global array of questions for easier management
- ✅ Single function handles all question logic
- ✅ Clear console output formatting
- ✅ Beginner-friendly and easy to expand

---

## 🧩 Concepts Used

- C++ basic syntax
- `struct` for grouping related data (`stStudent`, `stQuestion`)
- Global arrays for question storage
- Functions for modular code
- `for loop` for iterating through all questions
- Conditional statements (`if / else`)
- `do-while` loop for input validation
- Console interaction (`cin / cout`)

---
## 📷 ScreenShots :

<img width="1483" height="762" alt="image" src="https://github.com/user-attachments/assets/3ae55e1c-bc9d-4b82-868b-85216e30ed1f" />

---

## ▶️ How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/Network-Quiz-CPP.git

## 👤 Developer  
<strong> Loay Anwar</strong> <br>
 <a href="https://github.com/LoayCpp">
    <img width="50" height="50" alt="Loay-modified" src="https://github.com/user-attachments/assets/8fee5f57-fc06-4723-a7ad-2d077ab1d7e2" />
</a>


  <a href="https://www.linkedin.com/in/loay-anwar-alarify-259634260" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn" />
  </a>
  <a href="https://www.facebook.com/share/1ByuvJEiyu/" target="_blank">
    <img src="https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook" />
  </a>
  <a href="https://www.instagram.com/7.loa7?igsh=cWxjeHRzM2pnaWc2" target="_blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram" />
  </a>
    </a>
   <a href="https://t.me/Loay_Anwar" target="_blank">
    <img src="https://img.shields.io/badge/Telegram-26A5E4?style=for-the-badge&logo=telegram&logoColor=white" alt="Telegram" />
  </a>
    <a href="https://wa.me/967733693579" target="_blank">
    <img src="https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white" alt="WhatsApp" />
      </a>   
  <a href="https://x.com/7lo_ay" target="_blank">
  <img src="https://img.shields.io/badge/X-000000?style=for-the-badge&logo=x&logoColor=white" alt="X" />
</a>

