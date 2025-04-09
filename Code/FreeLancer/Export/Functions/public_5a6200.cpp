#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b520);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_5a6232 _public_5a6232

PROC_DECLARE(0x5a6200, internal_5a6200, public_5a6200);
extern "C" NAKED register_t __cdecl internal_5a6200()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 1
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_5a6232
        cmp dword ptr ds : [eax+0x1C], 1
        jne public_5a6232
        mov cl, byte ptr ds : [eax+0x18C]
        and cl, 0xFB
        push esi
        mov byte ptr ds : [eax+0x18C], cl
        call public_46b520
        add esp, 4
        public_5a6232 : nop
        mov eax, dword ptr ds : [public_6724b0]
        dec eax
        mov byte ptr ds : [public_674b00], 0
        mov dword ptr ds : [public_6724b0], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a6200)
    }
}

#undef public_5a6232
