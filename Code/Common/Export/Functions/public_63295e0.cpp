#include "Common-PCH.h"

PROC_DECLARE(0x63295e0, internal_63295e0, public_63295e0);
extern "C" NAKED register_t __cdecl internal_63295e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4184
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x63295e0)
    }
}
