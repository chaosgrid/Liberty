#include "Freelancer-PCH.h"

PROC_DECLARE(0x564a80, internal_564a80, public_564a80);
extern "C" NAKED register_t __cdecl internal_564a80()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c0f8], eax
        mov byte ptr ds : [public_67c0fc], al
        ret 
        UNREACHABLE_TRAP(0x564a80)
    }
}
