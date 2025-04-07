#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f74ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75830);

PROC_DECLARE(0x6f75830, internal_6f75830, public_6f75830);
extern "C" NAKED register_t __cdecl internal_6f75830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        push 0
        call public_6f74ae0
        ret 4
        UNREACHABLE_TRAP(0x6f75830)
    }
}
