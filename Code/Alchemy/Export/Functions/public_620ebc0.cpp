#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ebc0, internal_620ebc0, public_620ebc0);
extern "C" NAKED register_t __cdecl internal_620ebc0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x8C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620ebc0)
    }
}
