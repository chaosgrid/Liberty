#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3880);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7090);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7460);
CLANG_FORWARD_PROC_SYMBOL(public_6ec74c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec74f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec75b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec6e90 _public_6ec6e90
#define public_6ec6ee9 _public_6ec6ee9
#define public_6ec6eeb _public_6ec6eeb
#define public_6ec6fa5 _public_6ec6fa5
#define public_6ec6fa9 _public_6ec6fa9
#define public_6ec7000 _public_6ec7000
#define public_6ec7009 _public_6ec7009
#define public_6ec7038 _public_6ec7038
#define public_6ec7050 _public_6ec7050
#define public_6ec706d _public_6ec706d
#define public_6ec7078 _public_6ec7078

PROC_DECLARE(0x6ec6e40, internal_6ec6e40, public_6ec6e40);
extern "C" NAKED register_t __cdecl internal_6ec6e40()
{
    __asm
    {
        sub esp, 0x1A0
        push ebx
        mov ebx, dword ptr ss : [esp+0x1A8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
/*FIXUP push offset public_6ed2af8 @0x6ec6e52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2af8
        xor esi, esi
        push ebx
        mov dword ptr ss : [esp+0x28], ecx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6ec7078
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x6C]
        push edx
/*FIXUP push offset public_6ed4d0c @0x6ec6e76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4d0c
        push ebx
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ec706d
        push edi
        lea ecx, ds:[ecx]
        public_6ec6e90 : nop
        test byte ptr ss : [esp+0x70], 0x10
        je public_6ec7050
        cmp byte ptr ss : [esp+0x9C], 0x2E
        je public_6ec7050
        lea eax, ss:[esp+0x9C]
        push eax
        call dword ptr ds : [public_6ed1000]
        push 0x1C
        mov edi, eax
        call public_6ed0c5c
        mov esi, eax
        add esp, 8
        cmp esi, ebp
        je public_6ec6ee9
        mov dword ptr ds : [esi], offset public_6ed2b88
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], ebp
        call public_6ec7090
        mov dword ptr ds : [esi], offset public_6ed2b74
        mov dword ptr ds : [esi+0x18], 1
        jmp public_6ec6eeb
        public_6ec6ee9 : nop
        xor esi, esi
        public_6ec6eeb : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], edi
        xor eax, eax
        mov dword ptr ss : [esp+0x38], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x3C]
        rep stosd
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x64], edx
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        push ebx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x50], 0x80000000
        mov dword ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x5C], 3
        mov dword ptr ss : [esp+0x60], 0x8000080
        mov dword ptr ss : [esp+0x40], 0x34
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jl public_6ec7038
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        push eax
        push edi
        call public_6ec6a60
        test eax, eax
        jl public_6ec7038
        cmp dword ptr ss : [esp+0x14], ebp
        jne public_6ec6fa9
        push 0xC
        call public_6ed0c5c
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_6ec6fa5
        mov cl, byte ptr ss : [esp+0x1F]
        push ebp
        mov byte ptr ds : [edi], cl
        push ebp
        mov ecx, edi
        call public_6ec74c0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ss : [esp+0x14], edi
        jmp public_6ec6fa9
        public_6ec6fa5 : nop
        mov dword ptr ss : [esp+0x14], ebp
        public_6ec6fa9 : nop
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x2C], edx
        call public_6ec75b0
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ds:[eax+8]
        call public_6ec74f0
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        call public_6ec3880
        lea ecx, ss:[esp+0x10]
        call public_6ec3880
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, esi
        je public_6ec7009
        cmp eax, ebp
        je public_6ec7000
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x10], ebp
        public_6ec7000 : nop
        mov dword ptr ds : [edi+0x10], esi
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6ec7009 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_6ec7460
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6ec7038
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec7038 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_6ec7050
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ebp
        public_6ec7050 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x70]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6ec6e90
        mov esi, dword ptr ss : [esp+0x14]
        pop edi
        public_6ec706d : nop
        mov edx, dword ptr ds : [ebx]
/*FIXUP push offset public_6ed4ce4 @0x6ec706f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce4
        push ebx
        call dword ptr ds : [edx+0x60]
        public_6ec7078 : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1A0
        ret 4
        UNREACHABLE_TRAP(0x6ec6e40)
    }
}

#undef public_6ec6e90
#undef public_6ec6ee9
#undef public_6ec6eeb
#undef public_6ec6fa5
#undef public_6ec6fa9
#undef public_6ec7000
#undef public_6ec7009
#undef public_6ec7038
#undef public_6ec7050
#undef public_6ec706d
#undef public_6ec7078
