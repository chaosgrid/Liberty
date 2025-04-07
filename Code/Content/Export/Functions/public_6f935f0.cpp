#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f935f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f935f0, internal_6f935f0, public_6f935f0);
extern "C" NAKED register_t __cdecl internal_6f935f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f935f0)
    }
}
