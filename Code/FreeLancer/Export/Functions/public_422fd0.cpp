#include "Freelancer-PCH.h"

PROC_DECLARE(0x422fd0, internal_422fd0, public_422fd0);
extern "C" NAKED register_t __cdecl internal_422fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97f4]
        mov dword ptr ds : [public_6679cc], eax
        ret 
        UNREACHABLE_TRAP(0x422fd0)
    }
}
