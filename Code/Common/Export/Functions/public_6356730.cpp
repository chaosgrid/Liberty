#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356730);

PROC_DECLARE(0x6356730, internal_6356730, public_6356730);
extern "C" NAKED register_t __cdecl internal_6356730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        and eax, 0xFFFFFFF0
        mov eax, dword ptr ds : [eax]
        shr eax, 0x18
        and eax, 0x7F
        ret 
        UNREACHABLE_TRAP(0x6356730)
    }
}
