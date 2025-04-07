#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345ea0);

PROC_DECLARE(0x6345ea0, internal_6345ea0, public_6345ea0);
extern "C" NAKED register_t __cdecl internal_6345ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x6345ea0)
    }
}
