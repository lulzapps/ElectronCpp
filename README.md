# ElectronCpp
An example Electron/Typescript app with a C++/CMake backend

## What's covered in this project

- [x] Building a static library from C++
- [x] C++ app will support boost
- [ ] Using that static library in an Electron app
- [ ] Building an executable file from the Electron app
- [ ] Building an installer
- [ ] Everything built with `npm` commands (see `cmake-js`)
- [ ] Electron app will use custom Javascript libraries via Webpack (1.0+)
- [ ] Electron app will use React (1.0+)

## Usage

```
# clone the repo
git clone https://github.com/lulzapps/ElectronCpp.git

# Navigate into repo
cd ElectronCpp

# install requirements
npm install

# launch
npm start
```

## Project Structure

```
.
└── <root>/
    ├── ui
    └── lib/
        └── MyLib/
            ├── CMakeLists.txt
            ├── MyLib.cpp
            └── MyLib.h
```