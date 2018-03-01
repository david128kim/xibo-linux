#include "utilities.hpp"

#include <stdexcept>
#include <spdlog/spdlog.h>
#include "constants.hpp"

uint32_t utilities::to_hex(const std::string& str_color)
{
    if(str_color.empty())
        throw std::invalid_argument("String must not be empty");

    // remove '#' sign at the beginning
    std::string str_hex = str_color.substr(1);

    // convert 3-digit hex to 6-digit hex
    if(str_hex.size() == 3)
        str_hex = std::string(2, str_hex[0]) + std::string(2, str_hex[1]) + std::string(2, str_hex[2]);
    // add default alpha channel
    if(str_hex.size() == 6)
        str_hex += "FF";

    return static_cast<uint32_t>(std::stoul(str_hex, nullptr, 16));
}
