#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fe090, internal_4fe090, public_4fe090);
extern "C" NAKED register_t __cdecl internal_4fe090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da4c8]
        mov dword ptr ds : [public_674fb0], eax
        ret 
        UNREACHABLE_TRAP(0x4fe090)
    }
}
