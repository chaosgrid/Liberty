#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb99a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eb99f0 _public_6eb99f0
#define public_6eb9a0e _public_6eb9a0e
#define public_6eb9a72 _public_6eb9a72
#define public_6eb9a91 _public_6eb9a91

PROC_DECLARE(0x6eb99a0, internal_6eb99a0, public_6eb99a0);
extern "C" NAKED register_t __cdecl internal_6eb99a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb9a91
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6eb9a91
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6eb9a91
        cmp dword ptr ds : [ebx], 1
        jne public_6eb9a91
        mov eax, dword ptr ds : [edi+0x300]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb9a0e
        nop 
        public_6eb99f0 : nop
        lea eax, ds:[esi+8]
        push eax
        mov ecx, edi
        call public_6f15b90
        cmp eax, dword ptr ds : [ebx+8]
        je public_6eb9a91
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x300]
        jne public_6eb99f0
        public_6eb9a0e : nop
        mov edx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x20], 0
        call esi
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call esi
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call dword ptr ds : [public_6fb365c]
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6fb4668]
        add esp, 0x1C
        fnstsw ax
        test ah, 0x41
        jne public_6eb9a72
        mov edx, dword ptr ds : [edi]
        push 0x5460
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x74]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6eb9a72 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb4660]
        fnstsw ax
        test ah, 1
        jne public_6eb9a91
        mov eax, dword ptr ds : [edi]
        push 0x5463
        push 0
        mov ecx, edi
        call dword ptr ds : [eax+0x74]
        public_6eb9a91 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eb99a0)
    }
}

#undef public_6eb99f0
#undef public_6eb9a0e
#undef public_6eb9a72
#undef public_6eb9a91
