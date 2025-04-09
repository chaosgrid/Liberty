#include "Freelancer-PCH.h"

PROC_DECLARE(0x578b60, internal_578b60, public_578b60);
extern "C" NAKED register_t __cdecl internal_578b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e442c]
        mov dword ptr ds : [public_67c3e4], eax
        ret 
        UNREACHABLE_TRAP(0x578b60)
    }
}
