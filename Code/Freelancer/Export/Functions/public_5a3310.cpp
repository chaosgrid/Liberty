#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5a3310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a3330 _public_5a3330
#define public_5a3339 _public_5a3339

PROC_DECLARE(0x5a3310, internal_5a3310, public_5a3310);
extern "C" NAKED register_t __cdecl internal_5a3310()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x36C]
        test eax, eax
        je public_5a3339
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5a3330
        cmp cl, 0xFF
        je public_5a3330
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5a3339
        public_5a3330 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a3339 : nop
        mov dword ptr ds : [esi+0x36C], 0
        mov dword ptr ds : [esi+0x370], 0
        mov dword ptr ds : [esi+0x374], 0
        mov ecx, esi
        pop esi
        jmp public_59fa50
        UNREACHABLE_TRAP(0x5a3310)
    }
}

#undef public_5a3330
#undef public_5a3339
