#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65da9eb);
CLANG_FORWARD_PROC_SYMBOL(public_65ddd4b);

#define public_65daa01 _public_65daa01

PROC_DECLARE(0x65da9eb, internal_65da9eb, public_65da9eb);
extern "C" NAKED register_t __cdecl internal_65da9eb()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        je public_65daa01
        push dword ptr ss : [esp+8]
        push dword ptr ss : [esp+8]
        call public_65ddd4b
        pop ecx
        pop ecx
        public_65daa01 : nop
        ret 
        UNREACHABLE_TRAP(0x65da9eb)
    }
}

#undef public_65daa01
