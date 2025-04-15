#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "EventManager.hpp"

class Window {
    public:
        Window();
        Window(const std::string& title, const sf::Vector2u& size);
        ~Window();

        void BeginDraw();
        void EndDraw();

        void Update();

        bool IsDone();
        bool IsFullscreen();
        bool IsFocused();

        void ToggleFullscreen(EventDetails* l_details);
        void Close(EventDetails* l_details = nullptr);

        sf::RenderWindow* GetRenderWindow();
        EventManager* GetEventManager();
        sf::Vector2u GetWindowSize();

    private:
        void Setup(const std::string& title, const sf::Vector2u& size);
        void Create();

        sf::RenderWindow m_window;
        EventManager m_eventManager;
        sf::Vector2u m_windowSize;
        std::string m_windowTitle;
        bool m_isDone;
        bool m_isFullScreen;
        bool m_isFocused;
};

#endif