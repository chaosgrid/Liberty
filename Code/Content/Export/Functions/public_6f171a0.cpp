#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f171a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f746f0);

#define public_6f171b0 _public_6f171b0
#define public_6f171c1 _public_6f171c1
#define public_6f171d4 _public_6f171d4

PROC_DECLARE(0x6f171a0, internal_6f171a0, public_6f171a0);
extern "C" NAKED register_t __cdecl internal_6f171a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC8]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6f171c1
        lea esp, ss:[esp]
        public_6f171b0 : nop
        mov dword ptr ds : [eax+0xC], 0
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0xC8]
        jne public_6f171b0
        public_6f171c1 : nop
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        test eax, eax
        je public_6f171d4
        mov ecx, eax
        jmp public_6f746f0
        public_6f171d4 : nop
        ret 
        UNREACHABLE_TRAP(0x6f171a0)
    }
}

#undef public_6f171b0
#undef public_6f171c1
#undef public_6f171d4
