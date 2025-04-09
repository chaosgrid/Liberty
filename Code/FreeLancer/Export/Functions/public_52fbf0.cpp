#include "Freelancer-PCH.h"

PROC_DECLARE(0x52fbf0, internal_52fbf0, public_52fbf0);
extern "C" NAKED register_t __cdecl internal_52fbf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd10]
        mov dword ptr ds : [public_6754b4], eax
        ret 
        UNREACHABLE_TRAP(0x52fbf0)
    }
}
