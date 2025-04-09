#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b5278 _public_4b5278

PROC_DECLARE(0x4b5260, internal_4b5260, public_4b5260);
extern "C" NAKED register_t __cdecl internal_4b5260()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4b5340
        test byte ptr ss : [esp+8], 1
        je public_4b5278
        push esi
        call public_5b7e1d
        add esp, 4
        public_4b5278 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b5260)
    }
}

#undef public_4b5278
