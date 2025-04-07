#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316730);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631674d _public_631674d
#define public_6316756 _public_6316756

PROC_DECLARE(0x6316730, internal_6316730, public_6316730);
extern "C" NAKED register_t __cdecl internal_6316730()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6316756
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631674d
        cmp cl, 0xFF
        je public_631674d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6316756
        public_631674d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6316756 : nop
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6316730)
    }
}

#undef public_631674d
#undef public_6316756
