#include "FLServer-PCH.h"

PROC_DECLARE(0x40d550, internal_40d550, public_40d550);
extern "C" NAKED register_t __cdecl internal_40d550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d2b4]
        mov dword ptr ds : [public_427840], eax
        ret 
        UNREACHABLE_TRAP(0x40d550)
    }
}
