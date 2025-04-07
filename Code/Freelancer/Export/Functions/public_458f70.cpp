#include "Freelancer-PCH.h"

PROC_DECLARE(0x458f70, internal_458f70, public_458f70);
extern "C" NAKED register_t __cdecl internal_458f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7b4]
        mov dword ptr ds : [public_66d32c], eax
        ret 
        UNREACHABLE_TRAP(0x458f70)
    }
}
