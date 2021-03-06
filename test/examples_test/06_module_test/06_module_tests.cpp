#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Bank account initial balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(100);

	REQUIRE(account.get_balance() == 600);
}

TEST_CASE("Test bank account withdraw")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(100);

	REQUIRE(account.get_balance() == 600);

	account.withdraw(50);

	REQUIRE(account.get_balance() == 550);
}