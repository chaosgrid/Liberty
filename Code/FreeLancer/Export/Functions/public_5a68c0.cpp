#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a68c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a68dd _public_5a68dd
#define public_5a68e9 _public_5a68e9

PROC_DECLARE(0x5a68c0, internal_5a68c0, public_5a68c0);
extern "C" NAKED register_t __cdecl internal_5a68c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_5a68e9
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5a68dd
        cmp cl, 0xFF
        je public_5a68dd
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_5a68e9
        public_5a68dd : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a68e9 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a68c0)
    }
}

#undef public_5a68dd
#undef public_5a68e9
