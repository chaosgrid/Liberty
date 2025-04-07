#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb410);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb408 _public_6beb408

PROC_DECLARE(0x6beb3f0, internal_6beb3f0, public_6beb3f0);
extern "C" NAKED register_t __cdecl internal_6beb3f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb410
        test byte ptr ss : [esp+8], 1
        je public_6beb408
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb408 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb3f0)
    }
}

#undef public_6beb408
