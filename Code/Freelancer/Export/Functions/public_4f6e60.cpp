#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f6e60, internal_4f6e60, public_4f6e60);
extern "C" NAKED register_t __cdecl internal_4f6e60()
{
    __asm
    {
        mov dword ptr ds : [public_674c58], offset public_5d99c8
        ret 
        UNREACHABLE_TRAP(0x4f6e60)
    }
}
