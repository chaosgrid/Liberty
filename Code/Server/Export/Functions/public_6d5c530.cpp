#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);

PROC_DECLARE(0x6d5c530, internal_6d5c530, public_6d5c530);
extern "C" NAKED register_t __cdecl internal_6d5c530()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d5c530)
    }
}
