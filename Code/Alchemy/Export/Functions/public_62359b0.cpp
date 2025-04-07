#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62359b0);

PROC_DECLARE(0x62359b0, internal_62359b0, public_62359b0);
extern "C" NAKED register_t __cdecl internal_62359b0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x9C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62359b0)
    }
}
