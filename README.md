# CPP Module 07 – Templates and Generic Programming

## Table of Contents

1. [Project Overview](#project-overview)
2. [Key Concepts Introduced](#key-concepts-introduced)
   - [Function Templates](#function-templates)
   - [Class Templates](#class-templates)
   - [Template Specialization](#template-specialization)
   - [Generic Algorithms](#generic-algorithms)
3. [Exercise Breakdown](#exercise-breakdown)
   - [Ex00: Swapping, Min and Max](#ex00-swapping-min-and-max)
   - [Ex01: Array Iteration with Templates](#ex01-array-iteration-with-templates)
   - [Ex02: A Custom Templated Array Class](#ex02-a-custom-templated-array-class)
4. [Compiling and Running](#compiling-and-running)
5. [Conclusion & What’s Next](#conclusion--whats-next)

---

## Project Overview

CPP07 introduces **templates**, one of the most powerful features of C++. Templates allow writing code that adapts to any type — enabling **code reuse**, **type safety**, and **compile-time polymorphism**.

We use:

- **Function templates** to apply the same logic to different types
- **Class templates** to build custom containers
- **Template specialization** to provide tailored behavior for specific types

This module emphasizes writing **generic, reusable code** that feels like part of the standard library.

---

## Key Concepts Introduced

### Function Templates

Function templates let us define a function once and use it with any type:

```cpp
template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
```

This works with `int`, `float`, `std::string`, etc., as long as the `>` operator is defined.

### Class Templates

Class templates allow us to build generic classes, like containers:

```cpp
template<typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() const { return value; }
};
```

### Template Specialization

Sometimes, we need specific behavior for certain types:

```cpp
template<>
void print<std::string>(std::string value) {
    std::cout << "[string] " << value << std::endl;
}
```

### Generic Algorithms

We use templates to write type-agnostic algorithms:

- Swap any two values
- Apply a function to each element in an array
- Create custom data structures that work with any type

This avoids repetitive code and increases flexibility.

---

## Exercise Breakdown

### Ex00: Swapping, Min and Max

**Goal:** Write three function templates: `swap`, `min`, and `max`.

We learn:

- Basic syntax of function templates
- Importance of `const` references to avoid unnecessary copies

### Ex01: Array Iteration with Templates

**Goal:** Write a function `iter` that applies a passed function to each element of an array.

We learn:

- How to pass functions as parameters to templates
- Iterating generically over arrays of any type

```cpp
template<typename T>
void iter(T* array, size_t length, void (*func)(T&)) {
    for (size_t i = 0; i < length; i++) func(array[i]);
}
```

### Ex02: A Custom Templated Array Class

**Goal:** Recreate a simplified version of `std::array`.

We learn:

- How to manage memory in a class template
- Deep copying elements and defining `operator[]`
- Exception handling for out-of-bounds access

```cpp
template<typename T>
class Array {
private:
    T* data;
    unsigned int size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();
    T& operator[](unsigned int index);
    unsigned int size() const;
};
```

---

## Compiling and Running

1. Navigate to the desired exercise:

```sh
cd ex02
```

2. Compile:

```sh
make
```

3. Run:

```sh
./array
```

4. Clean:

```sh
make clean
make fclean
make re
```

---

## Conclusion & What’s Next

In this module, we’ve taken a major step into **modern generic programming**:

- Wrote **type-independent logic** using templates
- Created **generic containers**
- Learned to safely manipulate **template parameters**

In **CPP08**, we’ll move deeper into the STL and work with **iterators**, **containers**, and standard **algorithms**.

