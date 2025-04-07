#include "Common-PCH.h"

PROC_DECLARE(0x630d430, internal_630d430, public_630d430);
extern "C" NAKED register_t __cdecl internal_630d430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35d4]
        mov dword ptr ds : [public_63fcf74], eax
        ret 
        UNREACHABLE_TRAP(0x630d430)
    }
}
