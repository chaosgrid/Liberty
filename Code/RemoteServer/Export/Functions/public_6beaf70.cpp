#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaf90);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beaf88 _public_6beaf88

PROC_DECLARE(0x6beaf70, internal_6beaf70, public_6beaf70);
extern "C" NAKED register_t __cdecl internal_6beaf70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beaf90
        test byte ptr ss : [esp+8], 1
        je public_6beaf88
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beaf88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beaf70)
    }
}

#undef public_6beaf88
