#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad187f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);

PROC_DECLARE(0x6ad187f, internal_6ad187f, public_6ad187f);
extern "C" NAKED register_t __cdecl internal_6ad187f()
{
    __asm
    {
        push 9
        call public_6ad23db
        pop ecx
        xor edi, edi
        ret 
        UNREACHABLE_TRAP(0x6ad187f)
    }
}
