#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d480);

PROC_DECLARE(0x40d480, internal_40d480, public_40d480);
extern "C" NAKED register_t __cdecl internal_40d480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB90]
        ret 
        UNREACHABLE_TRAP(0x40d480)
    }
}
