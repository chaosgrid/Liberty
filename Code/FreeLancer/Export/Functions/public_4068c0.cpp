#include "Freelancer-PCH.h"

PROC_DECLARE(0x4068c0, internal_4068c0, public_4068c0);
extern "C" NAKED register_t __cdecl internal_4068c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c772c]
        mov dword ptr ds : [public_6164a4], eax
        ret 
        UNREACHABLE_TRAP(0x4068c0)
    }
}
