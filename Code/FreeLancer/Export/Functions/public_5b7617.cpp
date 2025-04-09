#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7617);

#define public_5b7628 _public_5b7628
#define public_5b7630 _public_5b7630
#define public_5b7634 _public_5b7634
#define public_5b763b _public_5b763b
#define public_5b7647 _public_5b7647

PROC_DECLARE(0x5b7617, internal_5b7617, public_5b7617);
extern "C" NAKED register_t __cdecl internal_5b7617()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor eax, eax
        cmp esi, eax
        mov ecx, esi
        je public_5b7634
        mov edx, dword ptr ss : [esp+8]
        public_5b7628 : nop
        cmp byte ptr ds : [edx], al
        je public_5b7630
        inc edx
        dec esi
        jne public_5b7628
        public_5b7630 : nop
        cmp esi, eax
        jne public_5b763b
        public_5b7634 : nop
        mov eax, 0x80070057
        jmp public_5b7647
        public_5b763b : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, eax
        je public_5b7647
        sub ecx, esi
        mov dword ptr ds : [edx], ecx
        public_5b7647 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5b7617)
    }
}

#undef public_5b7628
#undef public_5b7630
#undef public_5b7634
#undef public_5b763b
#undef public_5b7647
