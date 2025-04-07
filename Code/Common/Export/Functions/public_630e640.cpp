#include "Common-PCH.h"

PROC_DECLARE(0x630e640, internal_630e640, public_630e640);
extern "C" NAKED register_t __cdecl internal_630e640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a35e8]
        mov dword ptr ds : [public_63fcf88], eax
        ret 
        UNREACHABLE_TRAP(0x630e640)
    }
}
