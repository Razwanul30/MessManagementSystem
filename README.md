# MessSystem (Easy Version)

A beginner-friendly **Mess Management System** built using C programming.  
This project demonstrates modular programming, file handling, struct usage, and basic menu-driven systems.

No password required — **Admin Login / Student Login = direct access**.

---

## 📁 Project Structure

```
MessSystem/
│
├── Makefile
├── config.h
├── main.c
├── auth.h
├── auth.c
├── student.h
├── student.c
├── meal.h
├── meal.c
├── billing.h
├── billing.c
├── file_handler.h
├── file_handler.c
└── data/
    └── students.txt
```

---

## 🚀 Features

### Admin Features
- View all students  
- Register a new student  
- Update meal prices  
- Generate monthly summary report  

### Student Features
- View profile  
- Update room number  
- View daily meal menu  
- Book/Cancel meals  
- Calculate monthly bill  

---

## 🛠 How to Compile

```
make
```

This will generate the executable file **mess_app**.

---

## ▶️ How to Run

```
./mess_app
```

Then choose an option from the menu.

---

## 💾 Data Storage

- `data/students.txt` → Stores student details in plain text  
- Automatically updated when registering students or booking meals  

---

## 📦 Requirements

- GCC compiler  
- Make support  
- Linux / Windows (MSYS2 / MinGW)  

---

## 🎯 Purpose
This project helps students learn:
- Modular C programming  
- Header/Source file separation  
- File handling  
- Menu-driven program structure  

---

## 📜 License
Free to use for education and academic projects.
