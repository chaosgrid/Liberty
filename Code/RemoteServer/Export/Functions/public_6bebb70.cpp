#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebb90);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bebb88 _public_6bebb88

PROC_DECLARE(0x6bebb70, internal_6bebb70, public_6bebb70);
extern "C" NAKED register_t __cdecl internal_6bebb70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bebb90
        test byte ptr ss : [esp+8], 1
        je public_6bebb88
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bebb88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bebb70)
    }
}

#undef public_6bebb88
