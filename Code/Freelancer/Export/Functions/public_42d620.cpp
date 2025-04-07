#include "Freelancer-PCH.h"

PROC_DECLARE(0x42d620, internal_42d620, public_42d620);
extern "C" NAKED register_t __cdecl internal_42d620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca854]
        mov dword ptr ds : [public_667d2c], eax
        ret 
        UNREACHABLE_TRAP(0x42d620)
    }
}
