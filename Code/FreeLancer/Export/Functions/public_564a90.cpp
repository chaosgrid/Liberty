#include "Freelancer-PCH.h"

PROC_DECLARE(0x564a90, internal_564a90, public_564a90);
extern "C" NAKED register_t __cdecl internal_564a90()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c0b0], eax
        mov byte ptr ds : [public_67c0b4], al
        ret 
        UNREACHABLE_TRAP(0x564a90)
    }
}
