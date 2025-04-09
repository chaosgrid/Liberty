#include "Freelancer-PCH.h"

PROC_DECLARE(0x42cbe0, internal_42cbe0, public_42cbe0);
extern "C" NAKED register_t __cdecl internal_42cbe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca798]
        mov dword ptr ds : [public_667cf0], eax
        ret 
        UNREACHABLE_TRAP(0x42cbe0)
    }
}
