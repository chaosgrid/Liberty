#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e5ff0, internal_4e5ff0, public_4e5ff0);
extern "C" NAKED register_t __cdecl internal_4e5ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8d54]
        mov dword ptr ds : [public_674b18], eax
        ret 
        UNREACHABLE_TRAP(0x4e5ff0)
    }
}
