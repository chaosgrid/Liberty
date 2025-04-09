#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d4ac0, internal_4d4ac0, public_4d4ac0);
extern "C" NAKED register_t __cdecl internal_4d4ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7c14]
        mov dword ptr ds : [public_67498c], eax
        ret 
        UNREACHABLE_TRAP(0x4d4ac0)
    }
}
