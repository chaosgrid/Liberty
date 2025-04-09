#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5540);

#define public_4f554b _public_4f554b
#define public_4f5553 _public_4f5553
#define public_4f5562 _public_4f5562
#define public_4f5571 _public_4f5571
#define public_4f5574 _public_4f5574

PROC_DECLARE(0x4f5540, internal_4f5540, public_4f5540);
extern "C" NAKED register_t __cdecl internal_4f5540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_4f554b
        xor edx, edx
        jmp public_4f5553
        public_4f554b : nop
        mov edx, dword ptr ds : [ecx+0x10]
        sub edx, eax
        sar edx, 2
        public_4f5553 : nop
        push esi
        xor eax, eax
        test edx, edx
        push edi
        jle public_4f5571
        mov ecx, dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        public_4f5562 : nop
        mov edi, dword ptr ds : [ecx]
        cmp dword ptr ds : [edi+0x10], esi
        je public_4f5574
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_4f5562
        public_4f5571 : nop
        or eax, 0xFFFFFFFF
        public_4f5574 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f5540)
    }
}

#undef public_4f554b
#undef public_4f5553
#undef public_4f5562
#undef public_4f5571
#undef public_4f5574
