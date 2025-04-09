#include "Freelancer-PCH.h"

PROC_DECLARE(0x4101c0, internal_4101c0, public_4101c0);
extern "C" NAKED register_t __cdecl internal_4101c0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6164e0], eax
        mov dword ptr ds : [public_6164e4], eax
        mov dword ptr ds : [public_6164e8], eax
        ret 
        UNREACHABLE_TRAP(0x4101c0)
    }
}
