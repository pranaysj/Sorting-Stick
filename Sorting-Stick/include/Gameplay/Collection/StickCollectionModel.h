#pragma once
#include <SFML/Graphics.hpp>

namespace Gameplay
{
    namespace Collection
    {
        enum class SortType
        {
            BUBBLE_SORT,
            INSERTION_SORT,
            SELECTION_SORT,
            MERGE_SORT,
            QUICK_SORT,
            RADIX_SORT,
        };

        enum class SortState
        {
            SORTING,
            NOT_SORTING
        };

        class StickCollectionModel
        {
        public:
            //15 : Bubble, Insertion, Selection
            //100 : Merge
            int number_of_elements = 100;
            const float max_element_height = 820.f;
            float elements_spacing = 25.f; //acttual amount of spacing between sticks
            float space_percentage = 0.40f; //the percentage of the screen space allocated to spacing (0 - 1)
            const float element_y_position = 1020.f;

            const sf::Color element_color = sf::Color::White;
            const sf::Color processing_element_color = sf::Color::Red;
            const sf::Color placement_position_element_color = sf::Color::Green;
            const sf::Color selected_element_color = sf::Color::Blue;
            const sf::Color temporary_processing_color = sf::Color::Yellow;

            //250 : Bubble, Insertion, Selection
            //50 : Merge
            const long operation_delay = 50;
            const long initial_color_delay = 40;

            StickCollectionModel();
            ~StickCollectionModel();

            void initialize();

            void setElementSpacing(float space);
        };
    }
}