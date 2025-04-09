#include "Freelancer-PCH.h"

PROC_DECLARE(0x422b70, internal_422b70, public_422b70);
extern "C" NAKED register_t __cdecl internal_422b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97ec]
        mov dword ptr ds : [public_6649b4], eax
        ret 
        UNREACHABLE_TRAP(0x422b70)
    }
}
