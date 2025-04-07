#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ec80);

PROC_DECLARE(0x622ec80, internal_622ec80, public_622ec80);
extern "C" NAKED register_t __cdecl internal_622ec80()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x9C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x622ec80)
    }
}
