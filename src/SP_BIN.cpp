#include <iostream>
#include <vector>
#include "SP_BIN.h"

octet* read_hex(std::istream& stream)
{
    return new octet(stream.get());
}
