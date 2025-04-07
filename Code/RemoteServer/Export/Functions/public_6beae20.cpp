#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beae40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beae38 _public_6beae38

PROC_DECLARE(0x6beae20, internal_6beae20, public_6beae20);
extern "C" NAKED register_t __cdecl internal_6beae20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beae40
        test byte ptr ss : [esp+8], 1
        je public_6beae38
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beae38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beae20)
    }
}

#undef public_6beae38
