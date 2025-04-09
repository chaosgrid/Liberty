#include "Freelancer-PCH.h"

PROC_DECLARE(0x44fbc0, internal_44fbc0, public_44fbc0);
extern "C" NAKED register_t __cdecl internal_44fbc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc584]
        mov dword ptr ds : [public_668af8], eax
        ret 
        UNREACHABLE_TRAP(0x44fbc0)
    }
}
