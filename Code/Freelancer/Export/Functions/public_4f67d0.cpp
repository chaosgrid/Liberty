#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f67d0, internal_4f67d0, public_4f67d0);
extern "C" NAKED register_t __cdecl internal_4f67d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d98b4]
        mov dword ptr ds : [public_674c48], eax
        ret 
        UNREACHABLE_TRAP(0x4f67d0)
    }
}
