#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f79bb0);

PROC_DECLARE(0x6f79bb0, internal_6f79bb0, public_6f79bb0);
extern "C" NAKED register_t __cdecl internal_6f79bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f79bb0)
    }
}
