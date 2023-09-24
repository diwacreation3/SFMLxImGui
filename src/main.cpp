/*
Author: Diwakar phuyal 
github: https://github.com/diwacreation3
feel free to use this template 
*/

//Imgui header files 
#include "imgui.h"
#include "imgui-SFML.h"

//SFML header files 
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

// window properties
int _width = 800;
int _height = 600;
string _title = "SFML and imgui ";

// main function
int main()
{
    RenderWindow window(VideoMode(_width, _height), _title);
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    CircleShape shape(100.f);
    shape.setFillColor(Color::Blue);

    Clock deltaClock;

    // main loop
    while (window.isOpen())
    {
        Event event; // listen click events
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(window,event);
            if (event.type == Event::Closed) // Check if close button pressed or not
                window.close();
        }
        ImGui::SFML::Update(window,deltaClock.restart());

        ImGui::ShowDemoWindow();

        ImGui::Begin("Hello, Nepal");
        ImGui::Button("pres me Bro");
        ImGui::End();

        // Clearing the window
        window.clear();
        
        window.draw(shape); 
        ImGui::SFML::Render(window);
        
        window.display();
    }
    ImGui::SFML::Shutdown();
    return 0;
}