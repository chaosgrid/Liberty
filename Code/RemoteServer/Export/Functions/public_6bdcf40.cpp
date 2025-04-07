#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdcf58 _public_6bdcf58

PROC_DECLARE(0x6bdcf40, internal_6bdcf40, public_6bdcf40);
extern "C" NAKED register_t __cdecl internal_6bdcf40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdceb0
        test byte ptr ss : [esp+8], 1
        je public_6bdcf58
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdcf58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdcf40)
    }
}

#undef public_6bdcf58
