#include "Common-PCH.h"

PROC_DECLARE(0x630e340, internal_630e340, public_630e340);
extern "C" NAKED register_t __cdecl internal_630e340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35e4]
        mov dword ptr ds : [public_63fcf78], eax
        ret 
        UNREACHABLE_TRAP(0x630e340)
    }
}
