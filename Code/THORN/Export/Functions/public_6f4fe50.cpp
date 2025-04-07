#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f4fe50, internal_6f4fe50, public_6f4fe50);
extern "C" NAKED register_t __cdecl internal_6f4fe50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a0b8]
        add eax, 0x40
        push eax
        push 0
        push 1
        call public_6f4f5e0
        add esp, 8
        push eax
        call dword ptr ds : [public_6f5a0dc]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4fe50)
    }
}
