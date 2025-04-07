#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ca70, internal_51ca70, public_51ca70);
extern "C" NAKED register_t __cdecl internal_51ca70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc078]
        mov dword ptr ds : [public_675284], eax
        ret 
        UNREACHABLE_TRAP(0x51ca70)
    }
}
