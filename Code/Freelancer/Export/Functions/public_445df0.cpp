#include "Freelancer-PCH.h"

PROC_DECLARE(0x445df0, internal_445df0, public_445df0);
extern "C" NAKED register_t __cdecl internal_445df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbbfc]
        mov dword ptr ds : [public_668a84], eax
        ret 
        UNREACHABLE_TRAP(0x445df0)
    }
}
