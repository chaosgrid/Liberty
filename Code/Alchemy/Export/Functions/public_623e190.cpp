#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e190);

PROC_DECLARE(0x623e190, internal_623e190, public_623e190);
extern "C" NAKED register_t __cdecl internal_623e190()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623e190)
    }
}
