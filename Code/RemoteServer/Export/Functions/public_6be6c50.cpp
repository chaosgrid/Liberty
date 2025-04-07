#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6c70);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6c68 _public_6be6c68

PROC_DECLARE(0x6be6c50, internal_6be6c50, public_6be6c50);
extern "C" NAKED register_t __cdecl internal_6be6c50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be6c70
        test byte ptr ss : [esp+8], 1
        je public_6be6c68
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6c68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be6c50)
    }
}

#undef public_6be6c68
