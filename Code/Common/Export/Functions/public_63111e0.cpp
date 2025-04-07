#include "Common-PCH.h"

PROC_DECLARE(0x63111e0, internal_63111e0, public_63111e0);
extern "C" NAKED register_t __cdecl internal_63111e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3700
        ret 
        UNREACHABLE_TRAP(0x63111e0)
    }
}
