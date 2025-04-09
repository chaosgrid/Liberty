#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5530);

#define public_4c5574 _public_4c5574
#define public_4c5579 _public_4c5579
#define public_4c5582 _public_4c5582
#define public_4c558d _public_4c558d
#define public_4c55a0 _public_4c55a0
#define public_4c55a6 _public_4c55a6

PROC_DECLARE(0x4c5530, internal_4c5530, public_4c5530);
extern "C" NAKED register_t __cdecl internal_4c5530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672950]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4c5574
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jl public_4c5574
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_4c5574
        mov ecx, dword ptr ds : [edi+0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        jae public_4c5574
        mov ecx, dword ptr ds : [edi+0x14]
        imul esi, 0x1C
        add esi, ecx
        test esi, esi
        jne public_4c5579
        public_4c5574 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_4c5579 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+4]
        je public_4c55a6
        public_4c5582 : nop
        mov edx, eax
        shl eax, 1
        test edx, edx
        jns public_4c558d
        or eax, 1
        public_4c558d : nop
        mov dx, word ptr ds : [ecx+8]
        cmp dx, 0x52
        je public_4c55a0
        cmp dx, 0x4E
        je public_4c55a0
        add eax, dword ptr ds : [ecx+4]
        public_4c55a0 : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4c5582
        public_4c55a6 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c5530)
    }
}

#undef public_4c5574
#undef public_4c5579
#undef public_4c5582
#undef public_4c558d
#undef public_4c55a0
#undef public_4c55a6
