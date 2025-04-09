#include "Freelancer-PCH.h"

PROC_DECLARE(0x599aa0, internal_599aa0, public_599aa0);
extern "C" NAKED register_t __cdecl internal_599aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e57bc]
        mov dword ptr ds : [public_67dbb8], eax
        ret 
        UNREACHABLE_TRAP(0x599aa0)
    }
}
