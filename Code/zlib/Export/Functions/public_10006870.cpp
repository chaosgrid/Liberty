#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006870);
CLANG_FORWARD_PROC_SYMBOL(public_1000a406);

PROC_DECLARE(0x10006870, internal_10006870, public_10006870);
extern "C" NAKED register_t __cdecl internal_10006870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push 1
        push edx
        call public_1000a406
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x10006870)
    }
}
