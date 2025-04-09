#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453980, internal_453980, public_453980);
extern "C" NAKED register_t __cdecl internal_453980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdad8]
        mov dword ptr ds : [public_66d294], eax
        ret 
        UNREACHABLE_TRAP(0x453980)
    }
}
