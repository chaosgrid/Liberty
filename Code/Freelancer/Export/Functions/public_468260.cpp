#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_465110);
CLANG_FORWARD_PROC_SYMBOL(public_4669c0);
CLANG_FORWARD_PROC_SYMBOL(public_468310);
CLANG_FORWARD_PROC_SYMBOL(public_58f730);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_468293 _public_468293
#define public_46829e _public_46829e
#define public_4682c0 _public_4682c0
#define public_4682cb _public_4682cb
#define public_4682e8 _public_4682e8

PROC_DECLARE(0x468260, internal_468260, public_468260);
extern "C" NAKED register_t __cdecl internal_468260()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3B0]
        test eax, eax
        je public_4682e8
        mov ecx, dword ptr ds : [esi+0x330]
        cmp ecx, dword ptr ds : [eax+0x14]
        je public_4682e8
        mov ecx, esi
        call public_468310
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        jne public_468293
        xor eax, eax
        jmp public_46829e
        public_468293 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_46829e : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        jne public_4682c0
        xor eax, eax
        jmp public_4682cb
        public_4682c0 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_4682cb : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        mov edx, dword ptr ds : [esi+0x3B0]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [esi+0x330], eax
        public_4682e8 : nop
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x468260)
    }
}

#undef public_468293
#undef public_46829e
#undef public_4682c0
#undef public_4682cb
#undef public_4682e8
