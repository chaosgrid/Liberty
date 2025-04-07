#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d180);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

PROC_DECLARE(0x6f4b370, internal_6f4b370, public_6f4b370);
extern "C" NAKED register_t __cdecl internal_6f4b370()
{
    __asm
    {
        push 2
        call public_6f4c260
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6f4f270
        push eax
        call public_6f4d180
        add esp, 0xC
        jmp public_6f4b020
        UNREACHABLE_TRAP(0x6f4b370)
    }
}
