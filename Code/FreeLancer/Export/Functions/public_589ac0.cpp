#include "FreeLancer-PCH.h"

PROC_DECLARE(0x589ac0, internal_589ac0, public_589ac0);
extern "C" NAKED register_t __cdecl internal_589ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4f00]
        mov dword ptr ds : [public_67d8c0], eax
        ret 
        UNREACHABLE_TRAP(0x589ac0)
    }
}
