#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c540, internal_623c540, public_623c540);
extern "C" NAKED register_t __cdecl internal_623c540()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623c540)
    }
}
