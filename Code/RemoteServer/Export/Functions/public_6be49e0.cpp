#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beeca0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be49f8 _public_6be49f8

PROC_DECLARE(0x6be49e0, internal_6be49e0, public_6be49e0);
extern "C" NAKED register_t __cdecl internal_6be49e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beeca0
        test byte ptr ss : [esp+8], 1
        je public_6be49f8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be49f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be49e0)
    }
}

#undef public_6be49f8
