#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a9010);

PROC_DECLARE(0x6287600, internal_6287600, public_6287600);
extern "C" NAKED register_t __cdecl internal_6287600()
{
    __asm
    {
        push 0x103
        call public_62a9010
        ret 
        UNREACHABLE_TRAP(0x6287600)
    }
}
