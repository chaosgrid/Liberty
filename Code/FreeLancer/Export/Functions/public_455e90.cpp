#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_455ead _public_455ead
#define public_455eb6 _public_455eb6

PROC_DECLARE(0x455e90, internal_455e90, public_455e90);
extern "C" NAKED register_t __cdecl internal_455e90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_455eb6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_455ead
        cmp cl, 0xFF
        je public_455ead
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_455eb6
        public_455ead : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_455eb6 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x455e90)
    }
}

#undef public_455ead
#undef public_455eb6
