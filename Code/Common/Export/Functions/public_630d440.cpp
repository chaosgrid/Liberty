#include "Common-PCH.h"

PROC_DECLARE(0x630d440, internal_630d440, public_630d440);
extern "C" NAKED register_t __cdecl internal_630d440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35d4]
        mov dword ptr ds : [public_63fcf70], eax
        ret 
        UNREACHABLE_TRAP(0x630d440)
    }
}
