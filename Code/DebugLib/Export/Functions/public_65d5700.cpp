#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5700);
CLANG_FORWARD_PROC_SYMBOL(public_65d6ca0);

#define public_65d571f _public_65d571f
#define public_65d572c _public_65d572c
#define public_65d5742 _public_65d5742
#define public_65d5758 _public_65d5758
#define public_65d576c _public_65d576c

PROC_DECLARE(0x65d5700, internal_65d5700, public_65d5700);
extern "C" NAKED register_t __cdecl internal_65d5700()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2014]
        mov eax, dword ptr ds : [esi+0x2010]
        cmp ecx, eax
        lea edx, ds:[ecx+esi+0x1010]
        jle public_65d571f
        mov eax, 0x1000
        public_65d571f : nop
        sub eax, ecx
        test eax, eax
        jne public_65d572c
        mov eax, 0xFFFFFFFA
        pop esi
        ret 
        public_65d572c : nop
        push 0
        push eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        call public_65d6ca0
        cmp eax, 0xFFFFFFFF
        jne public_65d5742
        or eax, eax
        pop esi
        ret 
        public_65d5742 : nop
        mov ecx, dword ptr ds : [esi+0x2014]
        add ecx, eax
        cmp ecx, 0x1000
        mov dword ptr ds : [esi+0x2014], ecx
        jl public_65d576c
        public_65d5758 : nop
        sub ecx, 0x1000
        cmp ecx, 0x1000
        jge public_65d5758
        mov dword ptr ds : [esi+0x2014], ecx
        public_65d576c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d5700)
    }
}

#undef public_65d571f
#undef public_65d572c
#undef public_65d5742
#undef public_65d5758
#undef public_65d576c
