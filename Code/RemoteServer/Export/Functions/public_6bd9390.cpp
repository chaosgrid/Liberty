#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09900);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd93a8 _public_6bd93a8

PROC_DECLARE(0x6bd9390, internal_6bd9390, public_6bd9390);
extern "C" NAKED register_t __cdecl internal_6bd9390()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6c09900
        test byte ptr ss : [esp+8], 1
        je public_6bd93a8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd93a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd9390)
    }
}

#undef public_6bd93a8
