#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec54b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);

#define public_6ec23c7 _public_6ec23c7
#define public_6ec23e0 _public_6ec23e0
#define public_6ec23e1 _public_6ec23e1
#define public_6ec2405 _public_6ec2405
#define public_6ec240e _public_6ec240e
#define public_6ec243c _public_6ec243c
#define public_6ec2444 _public_6ec2444
#define public_6ec247d _public_6ec247d

PROC_DECLARE(0x6ec23a0, internal_6ec23a0, public_6ec23a0);
extern "C" NAKED register_t __cdecl internal_6ec23a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        or ebp, 0xFFFFFFFF
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        jne public_6ec240e
        mov ecx, dword ptr ds : [edi+0x58]
        mov eax, dword ptr ds : [ecx]
        xor esi, esi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec23e1
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        public_6ec23c7 : nop
        cmp esi, ebx
        jae public_6ec23e0
        lea ecx, ss:[esp+0x18]
        call public_6ec5e20
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x58]
        inc esi
        cmp eax, ecx
        jne public_6ec23c7
        public_6ec23e0 : nop
        pop ebx
        public_6ec23e1 : nop
        cmp eax, dword ptr ds : [edi+0x58]
        je public_6ec247d
        mov edi, dword ptr ss : [esp+0x20]
        xor esi, esi
        test edi, edi
        je public_6ec2405
        mov ecx, dword ptr ds : [eax+0x10]
        call public_6ebe560
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi], ecx
        public_6ec2405 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret 0x10
        public_6ec240e : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6ec54b0
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, esi
        je public_6ec243c
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ec243c
        lea eax, ss:[esp+0x14]
        jmp public_6ec2444
        public_6ec243c : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec2444 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+0x40]
        je public_6ec247d
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        je public_6ec247d
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x1C]
        sar eax, 2
        cmp edx, eax
        jae public_6ec247d
        mov ecx, dword ptr ds : [ecx+0x18]
        mov esi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov eax, dword ptr ds : [edi]
        push esi
        push edx
        push edi
        call dword ptr ds : [eax+0x6C]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret 0x10
        public_6ec247d : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec23a0)
    }
}

#undef public_6ec23c7
#undef public_6ec23e0
#undef public_6ec23e1
#undef public_6ec2405
#undef public_6ec240e
#undef public_6ec243c
#undef public_6ec2444
#undef public_6ec247d
