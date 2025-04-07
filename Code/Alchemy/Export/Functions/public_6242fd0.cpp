#include "Alchemy-PCH.h"

PROC_DECLARE(0x6242fd0, internal_6242fd0, public_6242fd0);
extern "C" NAKED register_t __cdecl internal_6242fd0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+4]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6242fd0)
    }
}
