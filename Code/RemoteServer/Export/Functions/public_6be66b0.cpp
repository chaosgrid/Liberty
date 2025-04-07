#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be66d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be66c8 _public_6be66c8

PROC_DECLARE(0x6be66b0, internal_6be66b0, public_6be66b0);
extern "C" NAKED register_t __cdecl internal_6be66b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be66d0
        test byte ptr ss : [esp+8], 1
        je public_6be66c8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be66c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be66b0)
    }
}

#undef public_6be66c8
