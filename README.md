# MovieSeries Rating System

**VideoCatalog** is a C++ console application designed to manage a catalog of movies and TV series episodes. The application allows users to view, rate, and filter videos by genre or minimum rating. It uses Object-Oriented Programming principles like inheritance, polymorphism, and file handling.

---

## Features

- **Catalog Loading**: Reads a `.txt` file to initialize movies and episodes.
- **Catalog Display**: Shows all video information with average ratings.
- **Video Rating**: Allows users to rate movies or episodes from 1 to 5.
- **Minimum Rating Filter**: Filters and displays videos above a certain average score.
- **Genre Search**: Filters videos by genre, including support for both movies and episodes.
- **OOP Structure**: Implements inheritance with a base `Video` class and derived `Movie` and `Chapter` classes, using virtual functions and operator overloading.

---

## Technologies Used

- **Language**: C++
- **Programming Paradigm**: Object-Oriented Programming
- **File Handling**: Plain text file input (`videos1.txt`)
- **C++ Standard**: Compatible with C++11 and above
- **Build Tool**: `g++` compiler

---

## Usage

### Compile the Project

```bash
g++ *.cpp -o VideoCatalog
```
