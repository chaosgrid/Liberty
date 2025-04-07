#include "Common-PCH.h"

PROC_DECLARE(0x632d750, internal_632d750, public_632d750);
extern "C" NAKED register_t __cdecl internal_632d750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48b4]
        mov dword ptr ds : [public_640a710], eax
        ret 
        UNREACHABLE_TRAP(0x632d750)
    }
}
