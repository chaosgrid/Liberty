#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d441af);
CLANG_FORWARD_PROC_SYMBOL(public_6d442ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);

PROC_DECLARE(0x6d48538, internal_6d48538, public_6d48538);
extern "C" NAKED register_t __cdecl internal_6d48538()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d441af
        add esp, 0xC
        pop ebp
        jmp public_6d442ce
        UNREACHABLE_TRAP(0x6d48538)
    }
}
