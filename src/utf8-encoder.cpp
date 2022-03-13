#include "doctest.h"
#include <vector>

std::vector<unsigned char> utf_encoder(int uni_char)
{
	std::vector<unsigned char> dummy {};

	if (uni_char <= 0b01111111) {
		dummy.push_back(uni_char);
	}

	if (uni_char >= 0x80 && uni_char <= 0x7FF)
	{
		unsigned char high = (uni_char >> 6) & 0b00011111;

		high = high | 0b11000000;

		unsigned char low = uni_char & 0b00111111;
		low = low | 0x80;

		dummy.push_back(high);
		dummy.push_back(low);

	}

	return dummy;
}


TEST_CASE("Chars under 128")
{
	CHECK(utf_encoder(0) == std::vector<unsigned char> {0} );
	CHECK(utf_encoder(0x10) == std::vector<unsigned char> {0x10} );
	CHECK(utf_encoder(0b01111111) == std::vector<unsigned char> {0x7F} );
}

TEST_CASE("Chars with 2 byte")
{
	CHECK(utf_encoder(0x633) == std::vector<unsigned char> {0xD8, 0xb3});

	CHECK(utf_encoder(0x06AF) == std::vector<unsigned char> {0xda, 0xaf});



}

