# 🔄 Sorting Algorithm Visualizer (SFML)

Welcome to **Sorting Algorithm Visualizer**, a powerful and interactive C++ project built using **SFML** to visualize and compare popular sorting algorithms in real time! ✨📊

## 🚀 Project Overview

This visualizer showcases how different sorting algorithms work under the hood through animated bars representing data elements. Each algorithm is color-coded and animated to clearly demonstrate the process of sorting, making complex concepts **visually intuitive and easy to understand**.

### 🧩 Implemented Algorithms

#### 🔵 Bubble Sort
- Repeatedly steps through the list.
- Compares adjacent elements and swaps them if out of order.
- Simple but inefficient for large datasets.

#### 🟡 Selection Sort
- Repeatedly selects the minimum element and places it at the front.
- Always performs the same number of comparisons regardless of input.

#### 🟢 Insertion Sort
- Builds the final sorted array one item at a time.
- Efficient for small or nearly sorted data.

#### 🟣 Merge Sort
- Divide-and-conquer strategy.
- Recursively splits the array, sorts each half, and merges them.

#### 🔴 Quick Sort
- Picks a pivot and partitions the array around it.
- Fastest in most cases but performance can degrade with bad pivots.

#### 🟠 Radix Sort *(optional, if implemented)*
- Non-comparative sorting for integers.
- Sorts numbers digit by digit from least to most significant.

## ⚙️ Tech Stack

- **Language:** C++
- **Graphics Library:** [SFML (Simple and Fast Multimedia Library)](https://www.sfml-dev.org/)
- Real-time animation and frame-by-frame control
- Color-coded sorting stages for better clarity

> _“Programs must be written for people to read, and only incidentally for machines to execute.” – Harold Abelson_

---

## 📊 Algorithm Comparison Table

| Algorithm        | Time Complexity (Best) | Time (Average) | Time (Worst) | Space     | Stable | In-Place | Notes                              |
|------------------|------------------------|----------------|--------------|-----------|--------|----------|------------------------------------|
| **Bubble Sort**   | O(n)                  | O(n²)          | O(n²)        | O(1)      | ✅     | ✅        | Simple but slow                    |
| **Selection Sort**| O(n²)                 | O(n²)          | O(n²)        | O(1)      | ❌     | ✅        | Consistent comparisons             |
| **Insertion Sort**| O(n)                  | O(n²)          | O(n²)        | O(1)      | ✅     | ✅        | Great for nearly sorted data       |
| **Merge Sort**    | O(n log n)            | O(n log n)     | O(n log n)   | O(n)      | ✅     | ❌        | Divide and conquer                 |
| **Quick Sort**    | O(n log n)            | O(n log n)     | O(n²)        | O(log n)  | ❌     | ✅        | Fast, but pivot-sensitive          |
| **Radix Sort**    | O(nk)                 | O(nk)          | O(nk)        | O(n + k)  | ✅     | ❌        | Works for fixed-size integers      |

---

## 📸 Video

### 🔁 Sorting In Action

<details>
  <summary>🎥 Bubble Sort </summary>
  https://github.com/user-attachments/assets/addf4703-a7b3-4739-be5c-39ed9e6b1560
</details>

<details>
  <summary>🎥 Insertion Sort </summary>
  https://github.com/user-attachments/assets/4e54aef3-d9b0-43a7-a85b-858daa2de233
</details>

<details>
  <summary>🎥 Selection Sort </summary>
  https://github.com/user-attachments/assets/4074c9e0-d53c-4454-a4f5-37a711025545
</details>

<details>
  <summary>🎥 Merge Sort </summary>
  https://github.com/user-attachments/assets/a4b2e660-3e21-482b-91a4-6184c180edc6
</details>

<details>
  <summary>🎥 Quick Sort </summary>
  https://github.com/user-attachments/assets/43a6a83a-1516-4950-abd2-81b90867beac
</details>

<details>
  <summary>🎥 Radix Sort </summary>
  https://github.com/user-attachments/assets/4d6cbd5b-174b-4c14-a2f1-65b69df58c2a
</details>

---
