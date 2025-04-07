#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003940);

PROC_DECLARE(0x10003b70, internal_10003b70, public_10003b70);
extern "C" NAKED register_t __cdecl internal_10003b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        call public_10003940
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x10003b70)
    }
}
