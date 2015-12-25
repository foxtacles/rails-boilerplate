#include <regex>
#include <chrono>

using namespace std;
using namespace regex_constants;

extern "C" int scan_name_for_whole_word(const char* text, const char* regex_text) {
	regex scan_string{regex_text, ECMAScript | icase};
	return regex_match(text, scan_string);
}





