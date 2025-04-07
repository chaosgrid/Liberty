#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdea60);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be1298 _public_6be1298

PROC_DECLARE(0x6be1280, internal_6be1280, public_6be1280);
extern "C" NAKED register_t __cdecl internal_6be1280()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdea60
        test byte ptr ss : [esp+8], 1
        je public_6be1298
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be1298 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be1280)
    }
}

#undef public_6be1298
