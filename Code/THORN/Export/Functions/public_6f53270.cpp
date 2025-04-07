#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53270);
CLANG_FORWARD_PROC_SYMBOL(public_6f53290);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a00);

PROC_DECLARE(0x6f53270, internal_6f53270, public_6f53270);
extern "C" NAKED register_t __cdecl internal_6f53270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f53a00
        push esi
        call public_6f53290
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53270)
    }
}
