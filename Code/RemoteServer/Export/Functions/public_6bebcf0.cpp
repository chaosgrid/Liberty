#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebd10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bebd08 _public_6bebd08

PROC_DECLARE(0x6bebcf0, internal_6bebcf0, public_6bebcf0);
extern "C" NAKED register_t __cdecl internal_6bebcf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bebd10
        test byte ptr ss : [esp+8], 1
        je public_6bebd08
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bebd08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bebcf0)
    }
}

#undef public_6bebd08
