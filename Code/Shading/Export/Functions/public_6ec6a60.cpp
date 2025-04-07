#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec6af3 _public_6ec6af3
#define public_6ec6afa _public_6ec6afa
#define public_6ec6b88 _public_6ec6b88
#define public_6ec6b8f _public_6ec6b8f
#define public_6ec6c0a _public_6ec6c0a
#define public_6ec6c34 _public_6ec6c34
#define public_6ec6c3b _public_6ec6c3b
#define public_6ec6c80 _public_6ec6c80
#define public_6ec6ca3 _public_6ec6ca3
#define public_6ec6caa _public_6ec6caa

PROC_DECLARE(0x6ec6a60, internal_6ec6a60, public_6ec6a60);
extern "C" NAKED register_t __cdecl internal_6ec6a60()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        xor eax, eax
        mov dword ptr ss : [esp+0x18], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ebp, 0x34
        or ebx, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x2C], 0x80000000
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x38], 3
        mov dword ptr ss : [esp+0x3C], 0x8000080
        mov dword ptr ss : [esp+0x28], offset public_6ed2b08
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x4C], ebx
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, ebx
        je public_6ec6afa
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6ec6af3
        cmp dword ptr ss : [esp+0x4C], 4
        jne public_6ec6af3
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax], edx
        public_6ec6af3 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6ec6afa : nop
        mov edx, dword ptr ss : [esp+0x50]
        cmp dword ptr ds : [edx], 0
        jbe public_6ec6caa
        xor eax, eax
        mov dword ptr ss : [esp+0x18], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x2C], 0x80000000
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x38], 3
        mov dword ptr ss : [esp+0x3C], 0x8000080
        mov dword ptr ss : [esp+0x28], offset public_6ed2b10
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x4C], ebx
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, ebx
        je public_6ec6b8f
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6ec6b88
        cmp dword ptr ss : [esp+0x4C], 4
        jne public_6ec6b88
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+4], edx
        public_6ec6b88 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6ec6b8f : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov ebx, dword ptr ds : [edx]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x2C], 0x80000000
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x38], 3
        mov dword ptr ss : [esp+0x3C], 0x8000080
        mov dword ptr ss : [esp+0x28], offset public_6ed2b18
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ec6c3b
        test ebx, ebx
        jne public_6ec6c0a
        mov edx, dword ptr ds : [esi]
        push ebx
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        mov ecx, eax
        mov eax, 0xCCCCCCCD
        mul ecx
        mov ebx, edx
        shr ebx, 4
        public_6ec6c0a : nop
        lea ebx, ds:[ebx+ebx*4]
        shl ebx, 2
        push ebx
        call public_6ed0c5c
        add esp, 4
        test eax, eax
        je public_6ec6c34
        mov edx, dword ptr ss : [esp+0x50]
        push 0
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x50]
        push edx
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        public_6ec6c34 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6ec6c3b : nop
        mov ebp, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [ebp]
        cmp eax, 1
        jbe public_6ec6caa
/*FIXUP push offset public_6ed4094 @0x6ec6c47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
/*FIXUP push offset public_6ed2b24 @0x6ec6c4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2b24
        lea ecx, ss:[esp+0x1C]
        lea edi, ds:[eax-1]
        call public_6eb15e0
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_6ec6caa
        test edi, edi
        jne public_6ec6c80
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        push esi
        call dword ptr ds : [eax+0x28]
        mov edi, eax
        shr edi, 4
        public_6ec6c80 : nop
        shl edi, 4
        push edi
        call public_6ed0c5c
        add esp, 4
        test eax, eax
        je public_6ec6ca3
        push 0
        lea edx, ss:[esp+0x54]
        push edx
        push edi
        push eax
        push ebx
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x14]
        public_6ec6ca3 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x10]
        public_6ec6caa : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6ec6a60)
    }
}

#undef public_6ec6af3
#undef public_6ec6afa
#undef public_6ec6b88
#undef public_6ec6b8f
#undef public_6ec6c0a
#undef public_6ec6c34
#undef public_6ec6c3b
#undef public_6ec6c80
#undef public_6ec6ca3
#undef public_6ec6caa
