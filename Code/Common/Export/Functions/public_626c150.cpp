#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

PROC_DECLARE(0x626c150, internal_626c150, public_626c150);
extern "C" NAKED register_t __cdecl internal_626c150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 2
        push eax
        call public_63128e0
        ret 4
        UNREACHABLE_TRAP(0x626c150)
    }
}
