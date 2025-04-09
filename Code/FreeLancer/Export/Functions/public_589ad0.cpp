#include "Freelancer-PCH.h"

PROC_DECLARE(0x589ad0, internal_589ad0, public_589ad0);
extern "C" NAKED register_t __cdecl internal_589ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4f00]
        mov dword ptr ds : [public_67d8bc], eax
        ret 
        UNREACHABLE_TRAP(0x589ad0)
    }
}
