#include "compiler.h"

namespace ac = ARM_Compiler; // alias

ac::Compiler::Compiler(const Vec& instructions) : instructions_(instructions) {}

ac::Vec ac::Compiler::compile(bool* ok) {
    for (int i = 0; i != instructions_.size(); i++) {
        Str instruction = toUpper(trim(instructions_[i])); // take one instruction
        code_.push_back("");
    }
    return Vec();
}

ac::Str ac::Compiler::parse(const Str& instruction, bool* ok) {
    auto _space = instruction.find_first_of(' ');
    auto _dot1 = instruction.find_first_of(',');
    auto _dot2 = instruction.find_last_of(',');
    auto _hash = instruction.find_first_of('#');
    auto _brack1 = instruction.find_first_of('[');
    auto _brack2 = instruction.find_first_of(']');

    Str name = instruction.substr(0, _space); // instruction name
    Str Rt = instruction.substr(_space + 1, _dot1);
    // TODO
    if (name == "LDUR" || name == "STUR") {
        // D Type
        // opcode      31-21
        // DT_Address  20-12
        // op          11-10
        // Rn           9- 5
        // Rt           4- 0
        // Example 1: LDUR r2, [r10]
        // Example 2: LDUR r3, [r10, #1]
        // Example 3: STUR r1, [r9]
        // Example 4: STUR r4, [r7, #1]
        (code_.end() - 1)->append(name == "LDUR" ? "11111000010" : "11111000000");
        (code_.end() - 1)->append(num2str(1, 9)); // TODO
    }
    return Str();
}
