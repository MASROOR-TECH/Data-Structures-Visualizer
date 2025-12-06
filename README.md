# **Data Structure Visualizer – Interactive Algorithm Exploration Tool (WebAssembly + C++)**

## **Project Overview**

*Data Structure Visualizer* is a fully interactive, real-time web application that demonstrates the internal functioning of fundamental data structures and algorithms.  
The project uses a **high-performance C++ backend**, compiled to **WebAssembly (WASM)** using Emscripten, and a **JavaScript-based frontend** that renders all structural changes using **SVG graphics**.

All data structures—including AVL Trees, Min Heaps, Hash Tables, and Graph algorithms—are manually implemented in C++ (without STL containers for core structures) to reveal raw algorithmic workflows.

This project was created as part of a systems-level programming assignment focusing on performance, visualization, and low-level algorithmic understanding.

---

## **Features**

### **1. AVL Tree**
- **Self-balancing BST with real-time visual updates**  
- **Rotations visualized:** LL, RR, LR, RL  
- **Supported operations:** Insert, Delete  
- Displays **node heights** and **balance factors** dynamically  
- Shows every structural change as it occurs  

---

### **2. Min Heap**
- **Binary Min-Heap** with full visualization  
- Shows **percolate-up** and **percolate-down** operations step-by-step  
- **Operations:** Insert, Extract-Min  
- **Dual views:**  
  - Tree structure  
  - Backing array memory layout  

---

### **3. Graph Algorithms**
- Interactive creation of **vertices** and **weighted edges**  
- Implements major algorithms with complete animations:

  - **BFS** (Queue-based traversal)  
  - **DFS** (Stack-based traversal)  
  - **Dijkstra's Shortest Path** (Priority Queue)  
  - **Prim’s MST Algorithm**  

- Highlights visiting order, processed nodes, and path states in real-time  

---

### **4. Hash Table**
- Implements **Separate Chaining** using linked lists  
- **Operations:** Insert, Search, Delete  
- Visualizes:
  - Buckets  
  - Pointer chains  
  - Collision handling  
- Shows exactly how data flows through the structure  

---

## **Tech Stack**

- **Core Logic:** C++  
- **Compilation:** Emscripten (C++ → WebAssembly)  
- **Frontend:** HTML5, CSS3, JavaScript  
- **Rendering Engine:** SVG (Scalable Vector Graphics)  

Communication between frontend and WASM uses **Module.cwrap** bridges.

---

## **Installation & Usage**

> Browsers do not allow loading `.wasm` files directly from the `file://` protocol.  
> A **local web server is required**.

### **Prerequisites**
- Modern browser (Chrome, Firefox, Edge)  
- Local server environment  
  - Python HTTP server  
  - VS Code Live Server  
  - Node.js http-server  

---

### **1. Clone the Repository**
```bash
git clone https://github.com/MASROOR-TECH/Data-Structures-Visualizer.git
cd data-structure-visualizer
