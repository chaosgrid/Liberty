#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_562f58 _public_562f58

PROC_DECLARE(0x562f40, internal_562f40, public_562f40);
extern "C" NAKED register_t __cdecl internal_562f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_562f60
        test byte ptr ss : [esp+8], 1
        je public_562f58
        push esi
        call public_5b7e1d
        add esp, 4
        public_562f58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x562f40)
    }
}

#undef public_562f58
