#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2300);

PROC_DECLARE(0x62c2300, internal_62c2300, public_62c2300);
extern "C" NAKED register_t __cdecl internal_62c2300()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x94], 1
        mov dword ptr ds : [ecx+0x90], 4
        ret 
        UNREACHABLE_TRAP(0x62c2300)
    }
}
