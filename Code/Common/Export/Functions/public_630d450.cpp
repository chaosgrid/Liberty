#include "Common-PCH.h"

PROC_DECLARE(0x630d450, internal_630d450, public_630d450);
extern "C" NAKED register_t __cdecl internal_630d450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35d8]
        mov dword ptr ds : [public_63fcf6c], eax
        ret 
        UNREACHABLE_TRAP(0x630d450)
    }
}
