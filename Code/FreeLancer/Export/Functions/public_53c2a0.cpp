#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);

PROC_DECLARE(0x53c2a0, internal_53c2a0, public_53c2a0);
extern "C" NAKED register_t __cdecl internal_53c2a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        call public_489e80
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x53c2a0)
    }
}
