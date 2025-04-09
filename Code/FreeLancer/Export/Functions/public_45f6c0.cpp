#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c930);

#define public_45f6d2 _public_45f6d2

PROC_DECLARE(0x45f6c0, internal_45f6c0, public_45f6c0);
extern "C" NAKED register_t __cdecl internal_45f6c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        je public_45f6d2
        mov dword ptr ss : [esp+4], eax
        jmp public_57c930
        public_45f6d2 : nop
        add ecx, 0xFFFFFB68
        call public_57bff0
        push 0
        call public_46a3c0
        push 0
        push 0x14
        call public_5763b0
        add esp, 0xC
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x45f6c0)
    }
}

#undef public_45f6d2
