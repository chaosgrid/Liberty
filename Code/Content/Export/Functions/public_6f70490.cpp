#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6ff90);
CLANG_FORWARD_PROC_SYMBOL(public_6f70490);

PROC_DECLARE(0x6f70490, internal_6f70490, public_6f70490);
extern "C" NAKED register_t __cdecl internal_6f70490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f6ff90
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f70490)
    }
}
