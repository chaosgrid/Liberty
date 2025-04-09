#include "Freelancer-PCH.h"

PROC_DECLARE(0x564a70, internal_564a70, public_564a70);
extern "C" NAKED register_t __cdecl internal_564a70()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c140], eax
        mov byte ptr ds : [public_67c144], al
        ret 
        UNREACHABLE_TRAP(0x564a70)
    }
}
