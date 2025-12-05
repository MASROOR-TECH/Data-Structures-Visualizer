Data Structure Visualizer 🌳📊

An interactive, real-time web application to visualize fundamental data structures and algorithms. Built with a high-performance C++ backend compiled to WebAssembly (WASM), interacting with a modern JavaScript frontend.

🚀 Overview

Understanding data structures through code alone can be abstract and difficult. This project bridges the gap by providing dynamic, visual feedback for operations like tree rotations, graph traversals, and heap manipulations.

The core logic for all data structures is written in C++ for performance and compiled using Emscripten into a .wasm binary. The frontend uses JavaScript to communicate with this binary, rendering the state changes on an SVG canvas.

✨ Features

1. 🌲 AVL Tree

Self-Balancing: Visualizes automatic rotations (LL, RR, LR, RL) in real-time.

Operations: Insert, Delete.

Visuals: Shows node height and balance factors dynamically.

2. 📉 Min Heap

Binary Heap Property: Visualizes the PerculateUp and PerculateDown operations.

Operations: Insert, Extract Minimum.

Views: Dual-view support showing both the Tree structure and the underlying Array memory.

3. 🕸 Graph Algorithms

Graph Construction: Add vertices and weighted edges interactively.

Algorithms:

BFS: Breadth-First Search visualization using a Queue.

DFS: Depth-First Search visualization using a Stack.

Dijkstra: Shortest Path visualization using a Priority Queue.

Prim's: Minimum Spanning Tree (MST) visualization.

4. 🔑 Hash Table

Collision Resolution: Visualizes Separate Chaining using linked lists.

Operations: Insert, Search, Delete.

Visuals: Displays buckets and pointer chains clearly.

🛠 Tech Stack

Core Logic: C++ (No STL containers used for Graph structures to demonstrate raw implementation).

Compilation: Emscripten (C++ $\to$ WebAssembly).

Frontend: HTML5, CSS3, Vanilla JavaScript.

Visualization: Scalable Vector Graphics (SVG).

⚙ Installation & Usage

Important Note: Due to browser security restrictions regarding loading WebAssembly (.wasm) files from the local file system (file:// protocol), you must run this project on a local web server.

Prerequisites

A modern web browser (Chrome, Firefox, Edge).

A basic local server (e.g., Python, VS Code Live Server, Node.js).

Steps

Clone the repository

git clone [https://github.com/sooperabdullah/data-structure-visualizer.git](https://github.com/your-username/data-structure-visualizer.git)
cd data-structure-visualizer


Start a Local Server

Using Python (Recommended):

# Python 3.x
python -m http.server 8000


Using VS Code:
Install the "Live Server" extension, right-click index.html, and select "Open with Live Server".

Run the App
Open your browser and navigate to http://localhost:8000/index.html.

📂 Project Structure

├── 📁 project
│   ├── index.html          # Landing Page
│   ├── index1.html           # Main Visualization Dashboard
│   ├── style.css            # Styling & Dark Theme
│   ├── visualizer.js        # Emscripten Glue Code (Auto-generated)
│   ├── visualizer.wasm      # Compiled Binary Logic
│   ├── main.js              # Frontend UI Controller
│   │
│   ├── avl.cpp / avl.js     # AVL Tree Logic & UI
│   ├── min.cpp / heap.js    # Min Heap Logic & UI
│   ├── hash.cpp / hash.js   # Hash Table Logic & UI
│   ├── graph.cpp / graph.js # Graph Algos Logic & UI
│   │
│   └── wasm_bindings.cpp    # C++ Interface exposed to JS


🧠 How It Works (Architecture)

Action: User clicks "Insert 10" in the AVL interface.

JS Call: avl.js calls the C++ function avl_insert(10) via the Module.cwrap bridge.

Processing: C++ allocates memory, inserts the node, balances the tree, and records every logical step (e.g., "Left Rotate on Node 5").

Response: C++ returns a JSON string containing the new tree structure and the log of steps.

Render: JavaScript parses the JSON and animates the SVG elements to reflect the changes.

🤝 Contributing

Contributions are welcome!

Fork the project.

Create your feature branch (git checkout -b feature/AmazingFeature).

Commit your changes (git commit -m 'Add some AmazingFeature').

Push to the branch (git push origin feature/AmazingFeature).g

Open a Pull Request.
