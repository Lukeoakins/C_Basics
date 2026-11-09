# C_Basics
 
My first time learning C, coming from Python and JavaScript. This repo tracks my progress from "hello world" to a small framebuffer that draws shapes in the terminal, the first step towards writing a software renderer from scratch.
 
## What's in here
 
| Folder | What it covers |
|---|---|
| `first_code/` | First programs: functions, return values, scope, `if`/`else`, `for` and `while` loops |
| `first_arrays/` | Arrays, looping over them, and why `sizeof` gives bytes rather than a length |
| `C_basics_challenge/` | A framebuffer challenge: drawing shapes into a flat array of characters |
 
## The framebuffer challenge
 
A tiny "screen" made of characters, stored in **one flat `char` array** and indexed with `y * width + x`, the same way a real framebuffer stores pixels.
 
### What it can do
 
- **`set_pixel`**: writes one character at an (x, y) position, with **bounds checking**, so anything off-screen is clipped instead of writing outside the array
- **`create_rectangle`**: filled or hollow rectangles at any position and size, clipped at the screen edges
- **`set_border`**: a border around the whole screen, built as a single call to `create_rectangle`
- **Diagonal lines**: always continuous, by stepping along whichever axis is longer
### Building and running
 
```bash
gcc -Wall -Wextra -g -fsanitize=address framebuffer.c -o framebuffer && ./framebuffer
```
 
I compile everything with warnings on and AddressSanitizer enabled, so out-of-bounds reads and writes are caught immediately.
 
## Things I learned along the way
 
- C has no `.length`: an array's size has to be tracked separately and passed into functions
- Dividing two `int`s throws away the remainder, so multiplying before dividing keeps lines accurate without floats
- `0 < x < width` doesn't work in C the way it does in Python; each comparison has to be written separately
- Fill, draw and print are separate jobs, and keeping them in separate loops makes drawing possible
## Next steps
 
- Lines between any two points, in any direction
- Dynamic memory with `malloc` and `free`
- Writing real colour images to a PPM file instead of characters in the terminal
- Working towards a small software renderer
 
