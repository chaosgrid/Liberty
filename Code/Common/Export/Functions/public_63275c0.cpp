#include "Common-PCH.h"

PROC_DECLARE(0x63275c0, internal_63275c0, public_63275c0);
extern "C" NAKED register_t __cdecl internal_63275c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x34]
        ret 
        UNREACHABLE_TRAP(0x63275c0)
    }
}
