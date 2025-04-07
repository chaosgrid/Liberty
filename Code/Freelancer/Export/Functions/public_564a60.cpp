#include "Freelancer-PCH.h"

PROC_DECLARE(0x564a60, internal_564a60, public_564a60);
extern "C" NAKED register_t __cdecl internal_564a60()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c188], eax
        mov byte ptr ds : [public_67c18c], al
        ret 
        UNREACHABLE_TRAP(0x564a60)
    }
}
