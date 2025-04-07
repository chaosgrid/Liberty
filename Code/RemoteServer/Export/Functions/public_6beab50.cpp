#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beab70);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beab68 _public_6beab68

PROC_DECLARE(0x6beab50, internal_6beab50, public_6beab50);
extern "C" NAKED register_t __cdecl internal_6beab50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beab70
        test byte ptr ss : [esp+8], 1
        je public_6beab68
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beab68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beab50)
    }
}

#undef public_6beab68
