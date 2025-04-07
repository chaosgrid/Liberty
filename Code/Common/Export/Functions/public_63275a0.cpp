#include "Common-PCH.h"

PROC_DECLARE(0x63275a0, internal_63275a0, public_63275a0);
extern "C" NAKED register_t __cdecl internal_63275a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x63275a0)
    }
}
