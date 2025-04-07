#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4aa60);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4aa58 _public_6b4aa58

PROC_DECLARE(0x6b4aa40, internal_6b4aa40, public_6b4aa40);
extern "C" NAKED register_t __cdecl internal_6b4aa40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4aa60
        test byte ptr ss : [esp+8], 1
        je public_6b4aa58
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4aa58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4aa40)
    }
}

#undef public_6b4aa58
