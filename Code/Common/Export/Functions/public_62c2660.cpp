#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2660);

PROC_DECLARE(0x62c2660, internal_62c2660, public_62c2660);
extern "C" NAKED register_t __cdecl internal_62c2660()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x800], 0
        mov dword ptr ds : [ecx+0x804], 0x100
        ret 
        UNREACHABLE_TRAP(0x62c2660)
    }
}
