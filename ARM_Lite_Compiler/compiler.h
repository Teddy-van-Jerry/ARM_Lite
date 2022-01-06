#include "utils.h"
#include <vector>
#include <string>

namespace ARM_Compiler {
    using Str = std::string;
    using Vec = std::vector<Str>;
    class Compiler {
    public:
        Compiler() = default;
        Compiler(const Vec& instructions);
        Vec compile(bool* ok = nullptr);
    private:
        Str parse(const Str& instruction, bool* ok = nullptr);
        Vec instructions_;
        Vec names_;
        struct Delay {
            Str reg;
            int steps;
        };
        using Delays = std::vector<Delay>;
        Delays delays_;
        Vec code_;
    };
}