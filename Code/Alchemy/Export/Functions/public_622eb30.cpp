#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622eb30);

PROC_DECLARE(0x622eb30, internal_622eb30, public_622eb30);
extern "C" NAKED register_t __cdecl internal_622eb30()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x98]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x622eb30)
    }
}
