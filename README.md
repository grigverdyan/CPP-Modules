<a name="readme-top"></a>
<div align="center">

  <!-- Project Name -->
  <h1>C++ Modules 00-09</h1>

  <!-- Short Description -->
  <p align="center">
          <b>C++ Modules 00-09 in 42</b><br>
  </p>

  <h3>
      <a href="#-about-the-modules">📚 About the Modules</a>
    <span> · </span>
      <a href="#-module-breakdown">🗂️ Module Breakdown</a>
    <span> · </span>
      <a href="#-general-rules">📝 General Rules</a>
    <span> · </span>
      <a href="#-compilation-and-usage">🛠️ Compilation and Usage</a>
  </h3>
</div>

---

## 📚 About the Modules

This repository contains my solutions to the C++ Modules 00 through 09 from the 42 Yerevan curriculum (and likely other 42 schools).  These modules cover a wide range of fundamental and intermediate C++ concepts, building a strong foundation for object-oriented programming.  Each module focuses on specific aspects of the language, progressively increasing in complexity.

> [!NOTE]
> Because of 42 School norm requirements:
> *   The C++98 standard is enforced.  Features from later standards (C++11, C++14, etc.) are not allowed.
> *   Specific restrictions and allowed functions/classes will be detailed in each module's individual en.subject.pdf.  Always refer to the official subject PDF for the definitive requirements.
> *   Code style and formatting are crucial.

## 🗂️ Module Breakdown

This section provides a brief overview of each module.  For detailed instructions and requirements, consult the official subject PDFs for each module.

*   **Module 00: Namespaces, Classes, Member Functions, stdio Streams, Initialization Lists, Static, Const, and That Crappy Style**
    *   Introduction to object-oriented programming in C++.
    *   Covers basic class structure, member functions, constructors, destructors.
    *   Explores namespaces, `std::cout`, `std::cin`, `std::endl`.
    *   Introduces `const` member functions and the `static` keyword.
    *   Focuses on proper initialization lists.

*   **Module 01: Memory Allocation, Pointers to Members, References, Switch Statement**
    *   Dynamic memory allocation using `new` and `delete`.
    *   Working with pointers and references.
    *   Understanding pointers to member functions.
    *   Using the `switch` statement.
    *   Managing memory leaks and dangling pointers.

*   **Module 02: Ad-hoc Polymorphism, Operator Overloading, Canonical Classes**
    *   Operator overloading (e.g., +, -, *, /, ==, !=, <<, >>).
    *   Implementing the Orthodox Canonical Form (also known as the "Canonical Form" or "Rule of Three/Five/Zero") for classes that manage resources:
        *   Default constructor
        *   Copy constructor
        *   Copy assignment operator
        *   Destructor
        *   (C++11 and later would also include move constructor and move assignment operator, but these are *not* allowed in C++98).
    *   Understanding the importance of deep copies vs. shallow copies.

*   **Module 03: Inheritance**
    *   Implementing class hierarchies using inheritance.
    *   Understanding `public`, `protected`, and `private` inheritance.
    *   Virtual functions and polymorphism.
    *   Abstract classes and pure virtual functions.
    *   Avoiding the "slicing" problem.

*   **Module 04: Subtyping Polymorphism, Abstract Classes, Interfaces**
    *   Deeper dive into polymorphism.
    *   Using abstract classes to define interfaces.
    *   Multiple inheritance (with caution and understanding of the diamond problem).
    *   Designing robust and extensible class structures.

*   **Module 05: Repetition and Exceptions**
    *   Exception handling using `try`, `catch`, and `throw`.
    *   Creating custom exception classes.
    *   Understanding standard exception classes.
    *   Using exceptions to handle errors gracefully.
    *   The importance of RAII (Resource Acquisition Is Initialization) in exception safety.

*   **Module 06: C++ Casts**
    *   Exploring the different C++ casting operators:
        *   `static_cast`
        *   `dynamic_cast`
        *   `const_cast`
        *   `reinterpret_cast`
    *   Understanding when and why to use each cast.
    *   Avoiding C-style casts.
    *   RTTI (Run-Time Type Information) and `dynamic_cast`.

*   **Module 07: Templates**
    *   Introduction to C++ templates (function templates and class templates).
    *   Writing generic code that works with different data types.
    *   Template specialization.
    *   Understanding template instantiation.

*   **Module 08: Templated Containers, Iterators, Algorithms**
    *   Building custom container classes using templates (e.g., a templated array or list).
    *   Implementing iterators for custom containers.
    *   Using standard algorithms (from `<algorithm>`) with custom containers and iterators.
    *   Understanding the concepts behind the Standard Template Library (STL).

*   **Module 09: STL**
    *   In-depth exploration of the Standard Template Library (STL).
    *   Using common STL containers: `vector`, `list`, `deque`, `queue`, `stack`, `map`, `set`, etc.
    *   Using STL algorithms with STL containers.
    *   Writing code that leverages the power and efficiency of the STL.
        *   Merge-Insertion algorithm (Ford-Johnson)

    ## 📝 General Rules

   
*   **C++98:**  All code must be compliant with the C++98 standard.
*   **Norm:**  Orthodox Canonical Form (Rule of Three/Five/Zero). The explanation of Module 02 correctly describes the Orthodox Canonical Form and its components (copy constructor, copy assignment operator, destructor, and why they are needed). It also correctly points out that move semantics (move constructor and move assignment) are C++11 features and thus not allowed.
*   **Memory Management:**  Properly manage memory.  Avoid memory leaks and dangling pointers. Use `new` and `delete` correctly, and implement the Canonical Form where appropriate.
*   **Error Handling:**  Use exceptions for error handling where required by the subject.
*   **Readability:**  Write clean, well-commented, and understandable code.
*   **Makefile:** Each module should have a Makefile to compile the code. Common targets include `all`, `clean`, `fclean`, and `re`.

## 🛠️ Compilation and Usage

Each module will typically have its own directory containing the source files and a `Makefile`.

1.  **Navigate to the Module Directory:**
    ```bash
    cd path/to/module_directory  # e.g., cd cpp_module_00
    ```

2.  **Compile:**
    ```bash
    make
    ```
    This will usually compile the code and create an executable (the name may vary depending on the module).

3.  **Run (Example):**
    ```bash
    ./executable_name  # Replace with the actual executable name
    ```

4.  **Clean Up:**
    ```bash
    make clean   # Remove object files
    make fclean  # Remove object files and the executable
    make re      # Clean and then rebuild
    ```

<p align="right"><a href="#readme-top">Back to top</a></p>