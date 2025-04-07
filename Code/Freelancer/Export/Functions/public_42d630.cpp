#include "Freelancer-PCH.h"

PROC_DECLARE(0x42d630, internal_42d630, public_42d630);
extern "C" NAKED register_t __cdecl internal_42d630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca854]
        mov dword ptr ds : [public_667d28], eax
        ret 
        UNREACHABLE_TRAP(0x42d630)
    }
}
