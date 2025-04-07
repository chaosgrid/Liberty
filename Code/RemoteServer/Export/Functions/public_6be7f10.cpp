#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7f30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be7f28 _public_6be7f28

PROC_DECLARE(0x6be7f10, internal_6be7f10, public_6be7f10);
extern "C" NAKED register_t __cdecl internal_6be7f10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be7f30
        test byte ptr ss : [esp+8], 1
        je public_6be7f28
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be7f28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be7f10)
    }
}

#undef public_6be7f28
