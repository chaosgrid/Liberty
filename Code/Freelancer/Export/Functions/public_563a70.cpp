#include "Freelancer-PCH.h"

PROC_DECLARE(0x563a70, internal_563a70, public_563a70);
extern "C" NAKED register_t __cdecl internal_563a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e21dc]
        mov dword ptr ds : [public_67a494], eax
        ret 
        UNREACHABLE_TRAP(0x563a70)
    }
}
