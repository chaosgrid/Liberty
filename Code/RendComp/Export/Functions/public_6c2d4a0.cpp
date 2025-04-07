#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e510);

#define public_6c2d516 _public_6c2d516
#define public_6c2d51f _public_6c2d51f
#define public_6c2d522 _public_6c2d522
#define public_6c2d579 _public_6c2d579
#define public_6c2d588 _public_6c2d588
#define public_6c2d596 _public_6c2d596

PROC_DECLARE(0x6c2d4a0, internal_6c2d4a0, public_6c2d4a0);
extern "C" NAKED register_t __cdecl internal_6c2d4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c37d58]
        sub esp, 0x7C
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[ebx+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        xor esi, esi
        cmp eax, esi
        jge public_6c2d596
        mov eax, dword ptr ds : [public_6c37d58]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [public_6c37d58]
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        cmp eax, esi
        jl public_6c2d596
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [public_6c37d58]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi]
        push ecx
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x20], esi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jl public_6c2d588
        push ebp
        xor ebp, ebp
        public_6c2d516 : nop
        test esi, esi
        jne public_6c2d51f
        mov esi, dword ptr ds : [ebx+0x1C]
        jmp public_6c2d522
        public_6c2d51f : nop
        mov esi, dword ptr ds : [esi+0x20]
        public_6c2d522 : nop
        test esi, esi
        je public_6c2d579
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6c2e510
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [public_6c37d58]
        push edx
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [edi]
        push edx
        mov dword ptr ss : [esp+0x24], ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jl public_6c2d579
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], edx
        movzx ecx, word ptr ds : [eax+0xE]
        add ebp, ecx
        jmp public_6c2d516
        public_6c2d579 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6c37d58]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        pop ebp
        public_6c2d588 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6c37d58]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        public_6c2d596 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x6c2d4a0)
    }
}

#undef public_6c2d516
#undef public_6c2d51f
#undef public_6c2d522
#undef public_6c2d579
#undef public_6c2d588
#undef public_6c2d596
