#pragma once
#include <SFML/Graphics.hpp>

// Drawing
void DrawCircle(float centerX, float centerY, float radius, sf::Color color);
void DrawRectangle(float left, float top, float width, float height, sf::Color color);
void DrawPixel(float x, float y, sf::Color color);
void DrawLine(float x1, float y1, float x2, float y2, sf::Color color);
void DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, sf::Color color);
void DrawString(std::string text, float x, float y, int height, sf::Color color);

// Keyboard and mouse input
bool IsKeyPressed(sf::Keyboard::Key key);
bool IsMouseButtonPressed();
int GetMouseX();
int GetMouseY();

// Misc

// This replaces the standard 'printf' function with one which outputs
// to the Visual Studio output window.
#define printf printf2
int __cdecl printf2(const char* format, ...);
