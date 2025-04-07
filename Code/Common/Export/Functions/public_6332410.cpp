#include "Common-PCH.h"

PROC_DECLARE(0x6332410, internal_6332410, public_6332410);
extern "C" NAKED register_t __cdecl internal_6332410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a495c]
        mov dword ptr ds : [public_640a754], eax
        ret 
        UNREACHABLE_TRAP(0x6332410)
    }
}
