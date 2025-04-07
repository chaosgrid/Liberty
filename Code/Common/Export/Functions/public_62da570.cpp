#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

PROC_DECLARE(0x62da570, internal_62da570, public_62da570);
extern "C" NAKED register_t __cdecl internal_62da570()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        ret 
        UNREACHABLE_TRAP(0x62da570)
    }
}
