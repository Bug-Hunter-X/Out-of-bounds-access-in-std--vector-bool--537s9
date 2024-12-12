# Out-of-bounds Access in std::vector<bool>

This repository demonstrates a common error in C++: accessing elements outside the bounds of a `std::vector<bool>`.  While `std::vector` provides bounds checking for most types, `std::vector<bool>` is a special case which does not implement this as efficiently. This can lead to undefined behavior. 
The bug is shown in `bug.cpp`, while a corrected version is given in `bugSolution.cpp`.  Always check the size before accessing elements! 

## How to reproduce:
1. Compile `bug.cpp` using a C++ compiler.
2. Run the executable.  Observe the undefined behavior (it might crash, or give an unexpected value).
3. Compile `bugSolution.cpp`. Run to see correct implementation

## Learn More:
For further information on the intricacies of `std::vector<bool>`, consult the relevant C++ documentation and discussions on the topic. 