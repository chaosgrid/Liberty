#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e5e0, internal_620e5e0, public_620e5e0);
extern "C" NAKED register_t __cdecl internal_620e5e0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e5e0)
    }
}
