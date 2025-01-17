# SimpleHydraulicNetwork

## Implementation of hydraulic modelling of 
[A New Modeling Approach for Low-Carbon District Energy System Planning](https://www.mdpi.com/1996-1073/14/5/1383)

* There are 8760 sets of solutions for heat flows, with each contain 8 values. The first set of solutions is found as
```
  61.5766 11.5465 4.45635 13.4064 32.1674  25.424 2.71611 4.02726
```
8760 rows and 8 columns.

## Build Instruction

### Dependency required

- CMake = 3.12
- A Modern C++ compiler
- Eigen3.3

### Linux

#### Build and run from terminal
```
git clone https://github.com/leannejdong/autocircuit.git
cd autocircuit/
mkdir build
cd build
cmake ..
make
```

#### Build from CLion (Best choice for windows user)

Open the project directory and hit `shift-f10`