#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beac30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beac28 _public_6beac28

PROC_DECLARE(0x6beac10, internal_6beac10, public_6beac10);
extern "C" NAKED register_t __cdecl internal_6beac10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beac30
        test byte ptr ss : [esp+8], 1
        je public_6beac28
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beac28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beac10)
    }
}

#undef public_6beac28
