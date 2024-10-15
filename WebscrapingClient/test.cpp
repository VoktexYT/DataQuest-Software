#include <iostream>
#include <gtest/gtest.h>
#include "WebscrapingLibrary.h"

/*

TEST ( <Le type de test> , <Tu testes quoi ?>) // Tu peux mettre le nom que tu veux
{
	// Mettre en place l'environement de test
	// Par exemple, setup la fonction 'x' pour recuperer une valeur

	ASSERT_EQ (a, b) // if a == b
	ASSERT_NE (a, b) // if a != b
	ASSERT_LT (a, b) // if a < b
	ASSERT_LE (a, b) // if a <= b
	ASSERT_GT (a, b) // if a > b
	ASSERT_GE (a, b) // if a >= b
	ASSERT_TRUE (condition) // if <cond>
	ASSERT_FALSE (condition) // if !<cond>
	ASSERT_STREQ("a", "b") // if "a" == "b"
	ASSERT_STRNE("a", "b") // if "a" != "b"

	// Documentation: https://google.github.io/googletest/reference/assertions.html
}

*/

// Example of test
TEST(HtmlStructureTest, removeHtmlTagsTest)
{
	// Setup les 2 variables pour les valeurs 
	const std::string resultat_voulu = "hello";
	const std::string html = "<h1>hello</h1>";
	
	std::string resultat_retourne =
		WebscrapingLib::Fonctions::remove_html_tags(html);

	// Faire la comparaison pour tester les valeurs obtenues
	ASSERT_EQ(resultat_retourne, resultat_voulu);
}

// A new test...
TEST(HtmlStructureTest, checkIfBlaBlaBla)
{
	// code
	
	ASSERT_TRUE(1 == 1);
}


int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}