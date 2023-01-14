# ElectronCpp
An example Electron/Typescript app with a C++/CMake backend

## What's covered in this project

- [x] Building a static library from C++
- [x] C++ app will support boost
- [ ] Using that static library in an Electron app
- [ ] Building an executable file from the Electron app
- [ ] Building an installer install
- [ ] Everything built with CMake commands (i.e. `cmake --build .`)
- [ ] Electron app will use custom Javascript libraries via Webpack
- [ ] Electron app will use Webpack (1.0+)
- [ ] Electron app will support React (1.0+)

## Project Structure

```
.
└── <root>/
    ├── CMakeLists.txt
    ├── ui
    └── lib/
        └── MyLib/
            ├── MyLib.cpp
            └── MyLib.h
```