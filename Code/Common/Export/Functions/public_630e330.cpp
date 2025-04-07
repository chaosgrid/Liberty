#include "Common-PCH.h"

PROC_DECLARE(0x630e330, internal_630e330, public_630e330);
extern "C" NAKED register_t __cdecl internal_630e330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35e0]
        mov dword ptr ds : [public_63fcf7c], eax
        ret 
        UNREACHABLE_TRAP(0x630e330)
    }
}
