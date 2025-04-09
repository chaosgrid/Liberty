#include "FreeLancer-PCH.h"

PROC_DECLARE(0x474b40, internal_474b40, public_474b40);
extern "C" NAKED register_t __cdecl internal_474b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d09b8]
        mov dword ptr ds : [public_66dc48], eax
        ret 
        UNREACHABLE_TRAP(0x474b40)
    }
}
