#pragma once
#include "Graphics/GraphicService.h"
#include "Event/EventService.h"
#include "UI/UIService.h"
#include "Sound/SoundService.h"
#include "Gameplay/GameplayService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Events::EventService* event_service;
        Graphics::GraphicService* graphic_service;
        Sounds::SoundService* sound_service;
        UI::UIService* ui_service;
        Gameplay::GameplayService* gameplay_service;

        ServiceLocator();
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Events::EventService* getEventService();
        Graphics::GraphicService* getGraphicService();
        Sounds::SoundService* getSoundService();
        UI::UIService* getUIService();
        Gameplay::GameplayService* getGameplayService();
        
    };
}