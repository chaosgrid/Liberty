#include "Freelancer-PCH.h"

PROC_DECLARE(0x477850, internal_477850, public_477850);
extern "C" NAKED register_t __cdecl internal_477850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0e24]
        mov dword ptr ds : [public_671cd4], eax
        ret 
        UNREACHABLE_TRAP(0x477850)
    }
}
