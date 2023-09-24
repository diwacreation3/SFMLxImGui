# 🍁 SFML-Imgui Template
> Note: tested on windows 10 only linux support will be added soon 

Please give star ✨ if you are using this template. fork it, Use it, Maintain it

### ✨ Backstory
I wanted to build gui applications with SFML and Dear Imgui. I didn,t find any relevent tutorial or repositories So, i created this Template

# Prerequisites 🛠
1. Visual Studio Code [Follow Link to download](https://code.visualstudio.com/download)
1. Msys for MInGW gcc and g++ compiler [follow link](https://www.msys2.org/)
> Follow the installation tutorial from website and you are good to go 

> Don't forget to added path of mingw installation on system variable 

Now you are good to go 😉

# How to build 🤷‍♀️
> Note first run take some time to compile so be clam 

You need to instal Msys and Mingw as mentioned above.

<b> After installing mingw follow these steps 👀

1. Clone this Repository or Download Zip-file and unzip it
1. Open vscode or open that folder on terminal
1. On vscode open terminal and run below command
    ```bash
    mingw32-make -f MakeFile
    ```
1. type your project name to run it for eg. main.exe 

# 3rd party libraries 

## SFML ✨
- SFML: SFML is a simple, fast, cross-paltform and object-oriented multimedia API
- [SFML github repo](https://github.com/SFML/SFML)

## Dear ImGui ✨
- ImGui: Dear imgui is a bloat free graphical user interface library for c++
- [Imgui official repo](https://github.com/ocornut/imgui) 

## ImGui-SFML binding ✨
- ImGui-SFML: library which allows you to use Dear ImGui with SFML binding
- [ImGui-SFML repo](https://github.com/eliasdaler/imgui-sfml)

## Project Structure 📝
1. assets 📁 :  assets like fonts images etc..
1. headers 📁 : SFML and Imgui headers file
1. obj 📁 : all object files 
1. src 📁 : Projects files and custom headers 
1. .exe files
1. MakeFile
1. SFML Dlls

##  Compile on windows ⚒
- Clone the repo or Download and unzip it

Run this command on terminal
```bash
mingw32-make -f MakeFile
```

## Note: You can change MakeFile as your project needs.

Happy coding 😉

Keep Learning 🥰
### Follow me if you like :)