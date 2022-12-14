//settings.h
#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

const float batWidth = 20.f;
const float batHeight = 80.f;
const float batOffset = 50.f;
const sf::Vector2f batSize(20.f, 80.f);
const sf::Color leftBatColor{ 110,0,148 };
const sf::Color rightBatColor{ 0,158,0 };
const float batSpeed = 5.f;

const float ballRadius = 25.f;
const sf::Color ballColor{ 0,191,255 };