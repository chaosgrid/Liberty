#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212420, internal_6212420, public_6212420);
extern "C" NAKED register_t __cdecl internal_6212420()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6212420)
    }
}
