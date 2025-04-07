#include "Freelancer-PCH.h"

PROC_DECLARE(0x472100, internal_472100, public_472100);
extern "C" NAKED register_t __cdecl internal_472100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d04e8]
        mov dword ptr ds : [public_66dbf8], eax
        ret 
        UNREACHABLE_TRAP(0x472100)
    }
}
