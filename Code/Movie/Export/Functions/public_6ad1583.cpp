#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1583);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);

PROC_DECLARE(0x6ad1583, internal_6ad1583, public_6ad1583);
extern "C" NAKED register_t __cdecl internal_6ad1583()
{
    __asm
    {
        push 0xD
        call public_6ad23db
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad1583)
    }
}
