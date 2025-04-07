#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_48c8a0);
CLANG_FORWARD_PROC_SYMBOL(public_48cce0);

#define public_48c484 _public_48c484
#define public_48c493 _public_48c493
#define public_48c4a5 _public_48c4a5
#define public_48c4bd _public_48c4bd
#define public_48c4f3 _public_48c4f3
#define public_48c500 _public_48c500
#define public_48c515 _public_48c515
#define public_48c52b _public_48c52b
#define public_48c546 _public_48c546
#define public_48c55e _public_48c55e
#define public_48c583 _public_48c583
#define public_48c5a7 _public_48c5a7
#define public_48c5b8 _public_48c5b8
#define public_48c5ca _public_48c5ca
#define public_48c5e2 _public_48c5e2
#define public_48c610 _public_48c610
#define public_48c64d _public_48c64d
#define public_48c660 _public_48c660
#define public_48c674 _public_48c674
#define public_48c67a _public_48c67a
#define public_48c6d1 _public_48c6d1

PROC_DECLARE(0x48c460, internal_48c460, public_48c460);
extern "C" NAKED register_t __cdecl internal_48c460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ss:[ebp-0x26]
        cmp eax, 0x28
        push edi
        mov esi, ecx
        ja public_48c6d1
/*FIXUP movzx eax, byte ptr ds : [eax+public_48c6f0] @0x48c476*/
/*FIXUP jmp dword ptr ds : [eax*4+public_48c6dc] @0x48c47d*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b102
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b102 : nop
        je public_48c583
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b0fe
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0fe : nop
        je public_48c6d1
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b0fa
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0fa : nop
        je public_48c6d1
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b0f6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0f6 : nop
        je public_48c6d1
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b0f2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0f2 : nop
        je public_48c6d1
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b0ee
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0ee : nop
        je public_48c6d1
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b0ea
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b0ea : nop
        je public_48c4f3
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b0e6
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b0e6 : nop
        je public_48c4f3
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b0e2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0e2 : nop
        je public_48c6d1
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b0de
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0de : nop
        je public_48c6d1
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b0da
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0da : nop
        je public_48c6d1
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b0d6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0d6 : nop
        je public_48c6d1
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b0d2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0d2 : nop
        je public_48c6d1
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b0ce
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0ce : nop
        je public_48c6d1
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b0ca
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0ca : nop
        je public_48c6d1
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b0c6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0c6 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b0c2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0c2 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b0be
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0be : nop
        je public_48c6d1
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b0ba
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0ba : nop
        je public_48c6d1
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b0b6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0b6 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b0b2
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0b2 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b0ae
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0ae : nop
        je public_48c6d1
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b0aa
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0aa : nop
        je public_48c6d1
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b0a6
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b0a6 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b0a2
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b0a2 : nop
        je public_48c4bd
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b09e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b09e : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b09a
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b09a : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b096
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b096 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000b092
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b092 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000b08e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b08e : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000b08a
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b08a : nop
        je public_48c6d1
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000b086
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b086 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000b082
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b082 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000b07e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b07e : nop
        je public_48c6d1
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000b07a
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b07a : nop
        je public_48c6d1
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000b076
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b076 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000b072
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b072 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000b06e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b06e : nop
        je public_48c6d1
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000b06a
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b06a : nop
        je public_48c6d1
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000b066
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b066 : nop
        je public_48c6d1
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000b062
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b062 : nop
        je public_48c484
  JMPTB int 3
        public_48c484 : nop
        test esi, esi
        je public_48c6d1
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_48c4a5
        public_48c493 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48c493
        public_48c4a5 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c4bd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [esi+0x428]
        jne public_48c6d1
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0x370]
        je public_48c6d1
        mov ecx, esi
        mov dword ptr ds : [esi+0x370], eax
        call public_48c8a0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c4f3 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        xor edi, edi
        lea eax, ds:[esi+0x3D8]
        nop 
        public_48c500 : nop
        cmp ebp, 0x2C
        mov edx, dword ptr ds : [esi+0x370]
        jne public_48c515
        add edx, edi
        mov dword ptr ds : [esi+0x448], edx
        jmp public_48c52b
        public_48c515 : nop
        mov ecx, edi
        sub ecx, edx
        cmp dword ptr ds : [esi+0x448], ecx
        jne public_48c52b
        mov dword ptr ds : [esi+0x448], 0xFFFFFFFF
        public_48c52b : nop
        cmp ebx, dword ptr ds : [eax-0x14]
        je public_48c546
        cmp ebx, dword ptr ds : [eax]
        je public_48c546
        inc edi
        add eax, 4
        cmp edi, 5
        jl public_48c500
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c546 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x3C4]
        cmp ebx, ecx
        je public_48c55e
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [edx+0xA8]
        public_48c55e : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x3D8]
        cmp ebx, ecx
        je public_48c6d1
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c583 : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0x3A8]
        jne public_48c5e2
        mov eax, dword ptr ds : [esi+0x33C]
        test eax, eax
        je public_48c5a7
        mov ecx, dword ptr ds : [esi+0x340]
        push 0
        push ecx
        call eax
        add esp, 8
        public_48c5a7 : nop
        push 0
        call public_4424f0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        test eax, eax
        je public_48c5ca
        public_48c5b8 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_48c5b8
        public_48c5ca : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c5e2 : nop
        cmp edx, dword ptr ds : [esi+0x3A4]
        jne public_48c64d
        mov eax, dword ptr ds : [esi+0x378]
        test eax, eax
        jl public_48c6d1
        mov eax, dword ptr ds : [esi+0x33C]
        test eax, eax
        je public_48c610
        mov ecx, dword ptr ds : [esi+0x340]
        push 1
        push ecx
        call eax
        add esp, 8
        public_48c610 : nop
        mov eax, dword ptr ds : [esi+0x378]
        mov ecx, dword ptr ds : [esi+0x394]
        mov esi, dword ptr ds : [public_673344]
        lea eax, ds:[eax+eax*2]
        shl eax, 5
        push esi
        mov esi, dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push 1
        push esi
        push eax
        call dword ptr ds : [edx+0xAC]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48c64d : nop
        mov dword ptr ds : [esi+0x44C], 0xFFFFFFFF
        xor ecx, ecx
        lea eax, ds:[esi+0x3D8]
        nop 
        public_48c660 : nop
        cmp edx, dword ptr ds : [eax-0x14]
        je public_48c674
        cmp edx, dword ptr ds : [eax]
        je public_48c674
        inc ecx
        add eax, 4
        cmp ecx, 5
        jl public_48c660
        jmp public_48c67a
        public_48c674 : nop
        mov dword ptr ds : [esi+0x44C], ecx
        public_48c67a : nop
        mov ecx, dword ptr ds : [esi+0x370]
        add ecx, dword ptr ds : [esi+0x44C]
        mov dword ptr ds : [esi+0x378], ecx
        mov ecx, esi
        call public_48c8a0
        mov ecx, esi
        call public_48cce0
        mov eax, dword ptr ds : [esi+0x378]
        cmp eax, 0xFFFFFFFF
        je public_48c6d1
        lea edi, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+0x394]
        shl edi, 5
        add edi, eax
        lea edx, ds:[edi+0x14]
        push edx
        call public_459950
        lea eax, ds:[edi+0x2C]
        push eax
        call public_459950
        add edi, 0x44
        push edi
        call public_459950
        add esp, 0xC
        public_48c6d1 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x48c460)
        ASM_EXPORT_ENTRY_SINGLE(0x48c6d1, public_48c6d1)
    }
}

#undef public_48c484
#undef public_48c493
#undef public_48c4a5
#undef public_48c4bd
#undef public_48c4f3
#undef public_48c500
#undef public_48c515
#undef public_48c52b
#undef public_48c546
#undef public_48c55e
#undef public_48c583
#undef public_48c5a7
#undef public_48c5b8
#undef public_48c5ca
#undef public_48c5e2
#undef public_48c610
#undef public_48c64d
#undef public_48c660
#undef public_48c674
#undef public_48c67a
#undef public_48c6d1

#pragma init_seg(compiler)
extern "C" void const* const public_48c6d1 = __AsmFindLabelExport(&internal_48c460, 0x48c6d1);
