#include "Alchemy-PCH.h"

PROC_DECLARE(0x6219230, internal_6219230, public_6219230);
extern "C" NAKED register_t __cdecl internal_6219230()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6219230)
    }
}
