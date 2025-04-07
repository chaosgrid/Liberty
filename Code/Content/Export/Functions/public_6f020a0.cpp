#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f020a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);

PROC_DECLARE(0x6f020a0, internal_6f020a0, public_6f020a0);
extern "C" NAKED register_t __cdecl internal_6f020a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push 0
        push eax
        push ecx
        push 0
        call public_6f020c0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f020a0)
    }
}
