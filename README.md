# Huffman Tree Visualizer

This project is a Huffman coding visualizer and file compressor written in C++. It uses the MIXR (Mixed Reality Simulation Platform) framework to dynamically display the Huffman tree during compression and a visual decoding process during decompression.

## 🔧 Features

- **File Compression & Decompression** using Huffman encoding  
- **Real-time Huffman Tree Visualization** powered by the MIXR framework  
- **Bit-level Display** of compressed data and reconstruction to original text  
- Written in modern **C++** with clean object-oriented design

## 📸 How It Works

1. **Compression**:
   - The input file is read and analyzed for character frequencies.
   - A Huffman tree is built based on those frequencies.
   - The tree is rendered visually in MIXR.
   - The input is encoded into binary (shown in hexadecimal).

2. **Decompression**:
   - The binary file is read.
   - The Huffman tree is reconstructed and displayed.
   - The original text is recovered and shown alongside the decoding animation.

## 🧪 Technologies Used

- `C++17`
- `MIXR` Simulation & Visualization Framework
- Standard C++ libraries (e.g., `<map>`, `<queue>`, `<fstream>`)


## 🚧 Limitations

- This project depends on the **MIXR** framework, which requires a custom setup not included in this repository.
- As such, **building and running the project may not be straightforward** without MIXR installed and configured.
- For this reason, we recommend watching the demo video below to understand functionality.

## 🎥 Demo
Watch a demo video showcasing the Huffman Tree Visualizer in action:

[📺 Watch Demo on Google Drive](https://drive.google.com/file/d/1WiwrLmt7rp1k2UpgKYwtt8JPNSKQ1KEP/view)
## 🧠 What I Learned

- Implementing Huffman encoding/decoding from scratch
- Working with tree structures and priority queues
- Using condition variables, memory management, and file I/O in C++
- Integrating a graphics/simulation framework (MIXR) into a systems-level project
