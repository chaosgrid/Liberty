#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e300);

PROC_DECLARE(0x6f4b1f0, internal_6f4b1f0, public_6f4b1f0);
extern "C" NAKED register_t __cdecl internal_6f4b1f0()
{
    __asm
    {
        push 1
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        sub ecx, 0x10
        push ecx
        push edx
        push eax
        call public_6f4e300
        add esp, 0x10
        jmp public_6f4b020
        UNREACHABLE_TRAP(0x6f4b1f0)
    }
}
