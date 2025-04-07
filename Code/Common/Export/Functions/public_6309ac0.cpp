#include "Common-PCH.h"

PROC_DECLARE(0x6309ac0, internal_6309ac0, public_6309ac0);
extern "C" NAKED register_t __cdecl internal_6309ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3474]
        mov dword ptr ds : [public_63fcf14], eax
        ret 
        UNREACHABLE_TRAP(0x6309ac0)
    }
}
