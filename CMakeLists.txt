# Spécifie la version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Définit le nom du projet
project(DataQuest)  # Remplace "DataQuest" par le nom de ton projet

# Définit le standard C++
set(CMAKE_CXX_STANDARD 17)  # Change en fonction de ta version C++

# Ajouter les fichiers sources du projet
add_executable(DataQuest ./WebscrapingClient/WebscrapingClient.cpp)  # Remplace par tes fichiers sources

# =============================================
# Section pour les tests avec Google Test
# =============================================

# Ajoute Google Test
enable_testing()  # Active les tests dans CMake

# Trouver la bibliothèque Google Test
find_package(GTest REQUIRED)
if(NOT GTEST_FOUND)
    message(FATAL_ERROR "Google Test not found. Please install it.")
endif()

# Ajouter l'exécutable de test
add_executable(DataQuestTest ./WebscrapingClient/test.cpp)  # Remplace par le chemin de ton fichier de test

# Lier Google Test à l'exécutable de test
target_link_libraries(DataQuestTest PRIVATE GTest::GTest GTest::Main)

# Ajouter le test à CMake
add_test(NAME HtmlStructureTest COMMAND DataQuestTest)  # Change "MyTests" si nécessaire
