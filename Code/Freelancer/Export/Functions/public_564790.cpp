#include "Freelancer-PCH.h"

PROC_DECLARE(0x564790, internal_564790, public_564790);
extern "C" NAKED register_t __cdecl internal_564790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2514]
        mov dword ptr ds : [public_67a580], eax
        ret 
        UNREACHABLE_TRAP(0x564790)
    }
}
