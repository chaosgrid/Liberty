#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdcc50);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdcc78 _public_6bdcc78

PROC_DECLARE(0x6bdcc60, internal_6bdcc60, public_6bdcc60);
extern "C" NAKED register_t __cdecl internal_6bdcc60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdcc50
        test byte ptr ss : [esp+8], 1
        je public_6bdcc78
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdcc78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdcc60)
    }
}

#undef public_6bdcc78
