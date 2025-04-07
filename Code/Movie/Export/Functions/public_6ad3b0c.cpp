#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3b0c);

PROC_DECLARE(0x6ad3b0c, internal_6ad3b0c, public_6ad3b0c);
extern "C" NAKED register_t __cdecl internal_6ad3b0c()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        xor eax, eax
        stosd 
        stosd 
        stosd 
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ad3b0c)
    }
}
