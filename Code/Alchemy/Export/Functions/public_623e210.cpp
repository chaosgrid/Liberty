#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e210, internal_623e210, public_623e210);
extern "C" NAKED register_t __cdecl internal_623e210()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623e210)
    }
}
