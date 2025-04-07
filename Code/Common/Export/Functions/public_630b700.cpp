#include "Common-PCH.h"

PROC_DECLARE(0x630b700, internal_630b700, public_630b700);
extern "C" NAKED register_t __cdecl internal_630b700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a34bc]
        mov dword ptr ds : [public_63fcf58], eax
        ret 
        UNREACHABLE_TRAP(0x630b700)
    }
}
