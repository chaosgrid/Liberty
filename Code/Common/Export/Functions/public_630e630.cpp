#include "Common-PCH.h"

PROC_DECLARE(0x630e630, internal_630e630, public_630e630);
extern "C" NAKED register_t __cdecl internal_630e630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35e8]
        mov dword ptr ds : [public_63fcf8c], eax
        ret 
        UNREACHABLE_TRAP(0x630e630)
    }
}
