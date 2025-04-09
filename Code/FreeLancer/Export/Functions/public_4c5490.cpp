#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5490);

#define public_4c54d0 _public_4c54d0
#define public_4c5506 _public_4c5506
#define public_4c5508 _public_4c5508
#define public_4c5516 _public_4c5516
#define public_4c551e _public_4c551e

PROC_DECLARE(0x4c5490, internal_4c5490, public_4c5490);
extern "C" NAKED register_t __cdecl internal_4c5490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672950]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_4c5516
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_4c5516
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        je public_4c5516
        xor edi, edi
        test ebp, ebp
        jle public_4c5516
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_4c54d0 : nop
        cmp esi, dword ptr ds : [public_672950]
        je public_4c5506
        test ebx, ebx
        jl public_4c5506
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_4c5506
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        jae public_4c5506
        mov eax, dword ptr ds : [esi+0x14]
        add eax, ebx
        jmp public_4c5508
        public_4c5506 : nop
        xor eax, eax
        public_4c5508 : nop
        cmp dword ptr ds : [eax+0x18], 3
        jne public_4c551e
        inc edi
        add ebx, 0x1C
        cmp edi, ebp
        jl public_4c54d0
        public_4c5516 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_4c551e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c5490)
    }
}

#undef public_4c54d0
#undef public_4c5506
#undef public_4c5508
#undef public_4c5516
#undef public_4c551e
