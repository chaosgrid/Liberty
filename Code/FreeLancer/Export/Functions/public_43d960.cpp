#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43da70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43d978 _public_43d978

PROC_DECLARE(0x43d960, internal_43d960, public_43d960);
extern "C" NAKED register_t __cdecl internal_43d960()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_43da70
        test byte ptr ss : [esp+8], 1
        je public_43d978
        push esi
        call public_5b7e1d
        add esp, 4
        public_43d978 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43d960)
    }
}

#undef public_43d978
