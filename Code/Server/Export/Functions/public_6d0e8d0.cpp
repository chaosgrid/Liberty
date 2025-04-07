#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d01c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f230);

#define public_6d0e934 _public_6d0e934
#define public_6d0e953 _public_6d0e953
#define public_6d0e965 _public_6d0e965
#define public_6d0e967 _public_6d0e967
#define public_6d0e9df _public_6d0e9df
#define public_6d0ea12 _public_6d0ea12
#define public_6d0ea14 _public_6d0ea14
#define public_6d0ea81 _public_6d0ea81
#define public_6d0ea8e _public_6d0ea8e
#define public_6d0ea95 _public_6d0ea95
#define public_6d0eb2d _public_6d0eb2d
#define public_6d0eb60 _public_6d0eb60
#define public_6d0eb92 _public_6d0eb92
#define public_6d0eba0 _public_6d0eba0
#define public_6d0ebc5 _public_6d0ebc5
#define public_6d0ebd7 _public_6d0ebd7

PROC_DECLARE(0x6d0e8d0, internal_6d0e8d0, public_6d0e8d0);
extern "C" NAKED register_t __cdecl internal_6d0e8d0()
{
    __asm
    {
        sub esp, 0x58
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6d64418]
        mov edi, dword ptr ss : [esp+0x70]
        add esp, 4
        test al, al
        je public_6d0e953
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        jne public_6d0e953
        mov ecx, edi
        call public_6ce6870
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        mov esi, eax
        call dword ptr ds : [public_6d64204]
        mov ebx, dword ptr ds : [public_6d64200]
        lea ecx, ss:[esp+0x18]
        lea ebp, ds:[esi+0xE4]
        push ecx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        je public_6d0e953
        public_6d0e934 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x70]
        cmp dword ptr ds : [edx+8], eax
        je public_6d0e9df
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6d0e934
        public_6d0e953 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6d0e965
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0e967
        public_6d0e965 : nop
        xor eax, eax
        public_6d0e967 : nop
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+0xB4]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x78]
        mov ebp, dword ptr ss : [esp+0x74]
        jbe public_6d0ea8e
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[esi-1]
        cmp ecx, edx
        jae public_6d0ea8e
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], 0
        je public_6d0ea8e
        imul esi, 0x418
        lea ecx, ds:[esi+edx]
        cmp dword ptr ds : [ecx-0x34], eax
        jne public_6d0ea8e
        mov eax, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x70]
        push 0
        push eax
        push ebx
        push ebp
        push edx
        add ecx, 0xFFFFFBE8
        call public_6d4f230
        jmp public_6d0ea95
        public_6d0e9df : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_6d0ea81
        mov ebx, dword ptr ss : [esp+0x78]
        mov ebp, dword ptr ss : [esp+0x74]
        push ebx
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64714]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], esi
        je public_6d0ea12
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0ea14
        public_6d0ea12 : nop
        xor eax, eax
        public_6d0ea14 : nop
        mov esi, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        test esi, esi
        jbe public_6d0eb2d
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[esi-1]
        cmp ecx, edx
        jae public_6d0eb2d
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], 0
        je public_6d0eb2d
        imul esi, 0x418
        lea ecx, ds:[esi+edx]
        cmp dword ptr ds : [ecx-0x34], eax
        jne public_6d0eb2d
        mov edx, dword ptr ss : [esp+0x70]
        push 0
        push 0
        push ebx
        push ebp
        push edx
        add ecx, 0xFFFFFBE8
        call public_6d4f230
        jmp public_6d0eb2d
        public_6d0ea81 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d642d0]
        jmp public_6d0e953
        public_6d0ea8e : nop
        mov ecx, edi
        call public_6d01c30
        public_6d0ea95 : nop
        lea ecx, ss:[esp+0x28]
        mov esi, eax
        call dword ptr ds : [public_6d64248]
        push esi
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64710]
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d6470c]
        push ebp
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d645ac]
        push ebx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64708]
        push 0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64704]
        mov cl, byte ptr ss : [esp+0x7C]
        mov byte ptr ss : [esp+0x40], cl
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64700]
        mov ecx, edi
        call public_6ce6870
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xB0]
        test al, al
        je public_6d0eb2d
        push esi
        mov ecx, edi
        call public_6ce6870
        mov ecx, eax
        add ecx, 0xE4
        call dword ptr ds : [public_6d641c4]
        push eax
        call dword ptr ds : [public_6d641e0]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        public_6d0eb2d : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_6d64248]
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        je public_6d0eba0
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_6d0eba0
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0ebc5
        lea ecx, ds:[ecx]
        public_6d0eb60 : nop
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf73d0
        test al, al
        je public_6d0eb92
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        call dword ptr ss : [ebp+0x158]
        public_6d0eb92 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0eb60
        mov ebp, dword ptr ss : [esp+0x10]
        jmp public_6d0ebc5
        nop 
        public_6d0eba0 : nop
        mov edx, dword ptr ds : [public_6d64a44]
/*FIXUP push offset public_6d682cc @0x6d0eba6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d682cc
        push 0xD8E
/*FIXUP push offset public_6d67d10 @0x6d0ebb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d0ebba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0ebc5 : nop
        test ebp, ebp
        je public_6d0ebd7
        mov ax, word ptr ss : [ebp+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0x14
        public_6d0ebd7 : nop
        mov eax, dword ptr ds : [public_6d6402c]
        mov ax, word ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0x14
        UNREACHABLE_TRAP(0x6d0e8d0)
    }
}

#undef public_6d0e934
#undef public_6d0e953
#undef public_6d0e965
#undef public_6d0e967
#undef public_6d0e9df
#undef public_6d0ea12
#undef public_6d0ea14
#undef public_6d0ea81
#undef public_6d0ea8e
#undef public_6d0ea95
#undef public_6d0eb2d
#undef public_6d0eb60
#undef public_6d0eb92
#undef public_6d0eba0
#undef public_6d0ebc5
#undef public_6d0ebd7
