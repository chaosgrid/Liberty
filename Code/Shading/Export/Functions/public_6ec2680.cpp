#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec54b0);

#define public_6ec26c6 _public_6ec26c6
#define public_6ec26ce _public_6ec26ce
#define public_6ec26e0 _public_6ec26e0
#define public_6ec270a _public_6ec270a
#define public_6ec270e _public_6ec270e
#define public_6ec2719 _public_6ec2719
#define public_6ec2730 _public_6ec2730
#define public_6ec273c _public_6ec273c
#define public_6ec274f _public_6ec274f

PROC_DECLARE(0x6ec2680, internal_6ec2680, public_6ec2680);
extern "C" NAKED register_t __cdecl internal_6ec2680()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        or ebp, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ec274f
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        lea esi, ds:[edi+0x3C]
        push ecx
        mov ecx, esi
        call public_6ec54b0
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_6ec26c6
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6ec26c6
        lea eax, ss:[esp+0x18]
        jmp public_6ec26ce
        public_6ec26c6 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6ec26ce : nop
        mov ebx, dword ptr ds : [eax]
        cmp ebx, dword ptr ds : [edi+0x40]
        je public_6ec274f
        mov ebp, dword ptr ds : [ebx+0x1C]
        mov esi, dword ptr ds : [ebx+0x18]
        cmp esi, ebp
        je public_6ec270e
        nop 
        public_6ec26e0 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push edi
        call dword ptr ds : [eax+0x6C]
        test eax, eax
        jl public_6ec270a
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x38]
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [esp+0x10], edx
        je public_6ec2719
        add esi, 4
        public_6ec270a : nop
        cmp esi, ebp
        jne public_6ec26e0
        public_6ec270e : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0xC
        public_6ec2719 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6ec273c
        sub esi, eax
        mov edi, edi
        public_6ec2730 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ec2730
        public_6ec273c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [ebx+0x1C], eax
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec274f : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2680)
    }
}

#undef public_6ec26c6
#undef public_6ec26ce
#undef public_6ec26e0
#undef public_6ec270a
#undef public_6ec270e
#undef public_6ec2719
#undef public_6ec2730
#undef public_6ec273c
#undef public_6ec274f
