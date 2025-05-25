# 🎮 Troll Quiz Game (Console-based in C++)

A sarcastic little console-based quiz game made using **C++** — intended to be fun, but ended up roasting users *and* failing to count the score properly 😅.

Despite its bugs, it's a great beginner-intermediate level experiment in file handling, input, and class-based design.

---

## 🚀 Features

- ✅ **Start Quiz** – Choose from multiple subjects like C++, Java, HTML, GK, etc.  
- 📄 **Questions from File** – Loads MCQs from external `.txt` files  
- 😂 **Roasting Logic** – Gives playful (and brutal) feedback depending on your score  
- ❌ **Exit** – Option to leave the game

---

## 💻 Tech Stack

- **Language:** C++  
- **File Handling:** Used to load questions and correct answers from files  
- **Interface:** Console-based

---

## 🗂️ File Structure

- ├── main.cpp # Source file with game logic
- ├── question/ # Folder containing quiz files
- │ ├── cpp.txt
- │ ├── java.txt
- │ ├── html.txt
- │ ├── gk.txt
- │ └── ...others
- └── README.md # Project documentation

---

## 📌 Sample Usage

### 🎮 Start Quiz

--------------------Quiz--------------------
- Welcome to the quiz!!
-  Select your choice:
-  1. start
   2. exit

- if you select 1 then: 

- Select the subject:
- 1. C++
- 2. Java
- 3. Python
- ...


### 🤔 During Quiz

- What is the size of int in C++?

- A. 2 bytes
- B. 4 bytes
- C. 8 bytes
- D. Depends on compiler

- Enter your answer (A/B/C/D):
- B

  
### 💀 End of Quiz


- Your score is: 0

- Hahahaahh You are a Failure!!.....
- Give up on your dreams!!....
 
---

## 🚨 Known Issues

- 🐛 **Score always stays 0**, even when correct answers are entered  
- 🤷 **Input handling needs improvement** (e.g., case sensitivity, whitespace)

---

## 🔮 Future Scope

- Fix the score calculation logic  
- Add score tracking and high score history  
- Improve user input validation and UX  
- Add timer for each question  
- Maybe… stop insulting users so hard? (optional 😈)

---

## 🧑‍💻 Author

**Aryan Kumar Prajapati**  
- [LinkedIn]-(https://www.linkedin.com/in/aryankumar2006)  
- [GeeksforGeeks]-(https://www.geeksforgeeks.org/user/aryan20brsg)  
- [HackerRank]-(https://www.hackerrank.com/profile/aryan2006bui)  
- [LeetCode]-(https://leetcode.com/u/Aryan_kr08/)

---

## 🙌 Help Wanted!

I know the scoring logic is broken — if you're a C++ enthusiast, feel free to:

- Suggest fixes  
- Open an issue  
- Or laugh and move on 😄

Pull requests and feedback are welcome!

---

## 📜 License

This project is **open-source** and free to use for learning and laughter.
