#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c013f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bea7c8 _public_6bea7c8

PROC_DECLARE(0x6bea7b0, internal_6bea7b0, public_6bea7b0);
extern "C" NAKED register_t __cdecl internal_6bea7b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6c013f0
        test byte ptr ss : [esp+8], 1
        je public_6bea7c8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bea7c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bea7b0)
    }
}

#undef public_6bea7c8
