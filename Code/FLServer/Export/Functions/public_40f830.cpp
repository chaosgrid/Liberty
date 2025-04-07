#include "FLServer-PCH.h"

PROC_DECLARE(0x40f830, internal_40f830, public_40f830);
extern "C" NAKED register_t __cdecl internal_40f830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dabc]
        mov dword ptr ds : [public_427cd8], eax
        ret 
        UNREACHABLE_TRAP(0x40f830)
    }
}
