# imgui blur effect
 🪁 Simple ImGui DirectX9 Blur Effect Example Project. 

[![C++](https://img.shields.io/badge/language-C%2B%2B-%23f34b7d.svg?style=for-the-badge&logo=appveyor)](https://en.wikipedia.org/wiki/C%2B%2B) [![Windows](https://img.shields.io/badge/platform-Windows-0078d7.svg?style=for-the-badge&logo=appveyor)](https://en.wikipedia.org/wiki/Microsoft_Windows) [![x64](https://img.shields.io/badge/arch-x64-green.svg?style=for-the-badge&logo=appveyor)](https://en.wikipedia.org/wiki/X64)

📖 **Overview of the project**

Simple Project with Blur effect to external overlay made using [DirectX9](https://www.microsoft.com/en-us/download/details.aspx?id=6812), [ImGui](https://github.com/ocornut/imgui).

This project helps to add blur to the [image](https://github.com/ocornut/imgui/wiki/Image-Loading-and-Displaying-Examples#Example-for-DirectX9-users) I use in imgui, it can be used with more components, not just images.

This project was made by making additions on the [project](https://github.com/3r4y/imgui-external-overlay) I shared before.

🛠 **Used librairies :**
 - [DirectX](https://www.microsoft.com/en-us/download/details.aspx?id=6812)
 - [ImGui](https://github.com/ocornut/imgui)


🧪 **How do use this project ?**
* clone the project.
* Add the imgui files to your project.
* If you are getting compile error, include DirectX SDK in your project.
* include these files in your project : `bBlur.hpp`,`blur.hpp`,`blur.cpp` and `blur_binary.h`.
example : 

import `bBlur.hpp`.
```cpp
#include "bBlur.hpp"

auto draw = ImGui::GetWindowDrawList();
bBlur->blur_background(draw, DirectX9Interface::pDevice);//	IDirect3DDevice9Ex* pDevice

```

> Open your project setting --> Navigate to VC++ Directories --> On the right, select Includepaths --> A new window will open, that lets you new include paths. Add a new include path by hitting the New Row button in the top right --> Now you will have to navigate to your DirectX SDK installation directory and select the Include folder.



🎨 **Demonstration**

# no blur : 
![rickroll](https://raw.githubusercontent.com/3r4y/imgui-blur-effect/main/img/noblur.jpg)
# blur : 
![rickroll](https://raw.githubusercontent.com/3r4y/imgui-blur-effect/main/img/blur.jpg)
