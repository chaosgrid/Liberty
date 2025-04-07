#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d5680);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c9a);

#define public_65d569c _public_65d569c
#define public_65d56a9 _public_65d56a9
#define public_65d56bf _public_65d56bf
#define public_65d56d1 _public_65d56d1
#define public_65d56e7 _public_65d56e7
#define public_65d56fb _public_65d56fb

PROC_DECLARE(0x65d5680, internal_65d5680, public_65d5680);
extern "C" NAKED register_t __cdecl internal_65d5680()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1008]
        mov eax, dword ptr ds : [esi+0x100C]
        cmp ecx, eax
        lea edx, ds:[ecx+esi+8]
        jl public_65d569c
        mov eax, 0x1000
        public_65d569c : nop
        sub eax, ecx
        test eax, eax
        jne public_65d56a9
        mov eax, 0xFFFFFFFD
        pop esi
        ret 
        public_65d56a9 : nop
        push 0
        push eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        jne public_65d56bf
        or eax, eax
        pop esi
        ret 
        public_65d56bf : nop
        test eax, eax
        jne public_65d56d1
        mov ecx, esi
        call public_65d5520
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        public_65d56d1 : nop
        mov ecx, dword ptr ds : [esi+0x1008]
        add ecx, eax
        cmp ecx, 0x1000
        mov dword ptr ds : [esi+0x1008], ecx
        jl public_65d56fb
        public_65d56e7 : nop
        sub ecx, 0x1000
        cmp ecx, 0x1000
        jge public_65d56e7
        mov dword ptr ds : [esi+0x1008], ecx
        public_65d56fb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d5680)
    }
}

#undef public_65d569c
#undef public_65d56a9
#undef public_65d56bf
#undef public_65d56d1
#undef public_65d56e7
#undef public_65d56fb
