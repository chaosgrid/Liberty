#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d4af0, internal_4d4af0, public_4d4af0);
extern "C" NAKED register_t __cdecl internal_4d4af0()
{
    __asm
    {
        mov dword ptr ds : [public_674980], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x4d4af0)
    }
}
