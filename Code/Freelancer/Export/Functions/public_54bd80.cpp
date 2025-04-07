#include "Freelancer-PCH.h"

PROC_DECLARE(0x54bd80, internal_54bd80, public_54bd80);
extern "C" NAKED register_t __cdecl internal_54bd80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e086c]
        mov dword ptr ds : [public_67979c], eax
        ret 
        UNREACHABLE_TRAP(0x54bd80)
    }
}
