#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a06b0);

PROC_DECLARE(0x62a06b0, internal_62a06b0, public_62a06b0);
extern "C" NAKED register_t __cdecl internal_62a06b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x62a06b0)
    }
}
