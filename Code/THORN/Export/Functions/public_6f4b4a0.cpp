#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);

PROC_DECLARE(0x6f4b4a0, internal_6f4b4a0, public_6f4b4a0);
extern "C" NAKED register_t __cdecl internal_6f4b4a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4b960
        sub eax, 0xFFFFFFFB
        add esp, 4
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x6f4b4a0)
    }
}
