#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);

#define public_6ec2321 _public_6ec2321
#define public_6ec2350 _public_6ec2350
#define public_6ec2358 _public_6ec2358
#define public_6ec2377 _public_6ec2377
#define public_6ec238c _public_6ec238c

PROC_DECLARE(0x6ec2300, internal_6ec2300, public_6ec2300);
extern "C" NAKED register_t __cdecl internal_6ec2300()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        or ebx, 0xFFFFFFFF
        test eax, eax
        jne public_6ec2321
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec2321 : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6ec60f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec2350
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ec2350
        lea eax, ss:[esp+0x14]
        jmp public_6ec2358
        public_6ec2350 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec2358 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ec238c
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        jne public_6ec2377
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        mov dword ptr ds : [edx], eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec2377 : nop
        mov eax, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec238c : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2300)
    }
}

#undef public_6ec2321
#undef public_6ec2350
#undef public_6ec2358
#undef public_6ec2377
#undef public_6ec238c
