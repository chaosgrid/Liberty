#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f03b1d _public_6f03b1d
#define public_6f03b26 _public_6f03b26
#define public_6f03b4b _public_6f03b4b

PROC_DECLARE(0x6f03b00, internal_6f03b00, public_6f03b00);
extern "C" NAKED register_t __cdecl internal_6f03b00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f03b26
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f03b1d
        cmp cl, 0xFF
        je public_6f03b1d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f03b26
        public_6f03b1d : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f03b26 : nop
        test byte ptr ss : [esp+8], 1
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        je public_6f03b4b
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f03b4b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f03b00)
    }
}

#undef public_6f03b1d
#undef public_6f03b26
#undef public_6f03b4b
