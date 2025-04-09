#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_4a5270);
CLANG_FORWARD_PROC_SYMBOL(public_4a5580);

#define public_4a4d88 _public_4a4d88
#define public_4a4d97 _public_4a4d97
#define public_4a4da9 _public_4a4da9
#define public_4a4dc1 _public_4a4dc1
#define public_4a4de2 _public_4a4de2
#define public_4a4df0 _public_4a4df0
#define public_4a4e05 _public_4a4e05
#define public_4a4e13 _public_4a4e13
#define public_4a4e2e _public_4a4e2e
#define public_4a4e46 _public_4a4e46
#define public_4a4e6b _public_4a4e6b
#define public_4a4e9f _public_4a4e9f
#define public_4a4ec1 _public_4a4ec1
#define public_4a4ed2 _public_4a4ed2
#define public_4a4ee4 _public_4a4ee4
#define public_4a4efc _public_4a4efc
#define public_4a4f10 _public_4a4f10
#define public_4a4f24 _public_4a4f24
#define public_4a4f2a _public_4a4f2a
#define public_4a4f7d _public_4a4f7d

PROC_DECLARE(0x4a4d60, internal_4a4d60, public_4a4d60);
extern "C" NAKED register_t __cdecl internal_4a4d60()
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
        ja public_4a4f7d
/*FIXUP movzx eax, byte ptr ds : [eax+public_4a4fa0] @0x4a4d76*/
/*FIXUP mov ebx, dword ptr ss : [esp+0x18] @0x4a4d7d*/
  FIXUP mov ebx, dword ptr ss : [esp+0x18]
/*FIXUP jmp dword ptr ds : [eax*4+public_4a4f88] @0x4a4d81*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b235
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b235 : nop
        je public_4a4e9f
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b231
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b231 : nop
        je public_4a4f7d
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b22d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b22d : nop
        je public_4a4f7d
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b229
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b229 : nop
        je public_4a4f7d
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b225
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b225 : nop
        je public_4a4f7d
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b221
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b221 : nop
        je public_4a4f7d
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b21d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b21d : nop
        je public_4a4de2
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b219
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b219 : nop
        je public_4a4de2
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b215
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b215 : nop
        je public_4a4f7d
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b211
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b211 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b20d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b20d : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b209
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b209 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b205
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b205 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b201
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b201 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b1fd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1fd : nop
        je public_4a4f7d
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b1f9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1f9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b1f5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1f5 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b1f1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1f1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b1ed
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1ed : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b1e9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1e9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b1e5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1e5 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b1e1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1e1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b1dd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1dd : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b1d9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1d9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b1d5
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b1d5 : nop
        je public_4a4dc1
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b1d1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1d1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b1cd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1cd : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b1c9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1c9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000b1c5
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b1c5 : nop
        je public_4a4e6b
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000b1c1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1c1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000b1bd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1bd : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000b1b9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1b9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000b1b5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1b5 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000b1b1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1b1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000b1ad
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1ad : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000b1a9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1a9 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000b1a5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1a5 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000b1a1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b1a1 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000b19d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b19d : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000b199
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b199 : nop
        je public_4a4f7d
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000b195
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b195 : nop
        je public_4a4d88
  JMPTB int 3
        public_4a4d88 : nop
        test esi, esi
        je public_4a4f7d
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4a4da9
        public_4a4d97 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a4d97
        public_4a4da9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4a4dc1 : nop
        cmp ebx, dword ptr ds : [esi+0x648]
        jne public_4a4de2
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0x578]
        je public_4a4de2
        mov ecx, esi
        mov dword ptr ds : [esi+0x578], eax
        call public_4a5270
        public_4a4de2 : nop
        xor edi, edi
        lea eax, ds:[esi+0x5E4]
        or ecx, 0xFFFFFFFF
        lea ecx, ds:[ecx]
        public_4a4df0 : nop
        mov edx, dword ptr ds : [esi+0x578]
        add edx, edi
        cmp ebp, 0x2C
        jne public_4a4e05
        mov dword ptr ds : [esi+0x660], edx
        jmp public_4a4e13
        public_4a4e05 : nop
        cmp dword ptr ds : [esi+0x660], edx
        jne public_4a4e13
        mov dword ptr ds : [esi+0x660], ecx
        public_4a4e13 : nop
        cmp ebx, dword ptr ds : [eax-0x14]
        je public_4a4e2e
        cmp ebx, dword ptr ds : [eax]
        je public_4a4e2e
        inc edi
        add eax, 4
        cmp edi, 5
        jl public_4a4df0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4a4e2e : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x5D0]
        cmp ebx, ecx
        je public_4a4e46
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [eax+0xA8]
        public_4a4e46 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x5E4]
        cmp ebx, ecx
        je public_4a4f7d
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4a4e6b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4a4e9f : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0x5B4]
        jne public_4a4efc
        mov eax, dword ptr ds : [esi+0x33C]
        test eax, eax
        je public_4a4ec1
        mov ecx, dword ptr ds : [esi+0x340]
        push ecx
        call eax
        add esp, 4
        public_4a4ec1 : nop
        push 0
        call public_4424f0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        test eax, eax
        je public_4a4ee4
        public_4a4ed2 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4a4ed2
        public_4a4ee4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4a4efc : nop
        mov dword ptr ds : [esi+0x664], 0xFFFFFFFF
        xor ecx, ecx
        lea eax, ds:[esi+0x5E4]
        mov edi, edi
        public_4a4f10 : nop
        cmp edx, dword ptr ds : [eax-0x14]
        je public_4a4f24
        cmp edx, dword ptr ds : [eax]
        je public_4a4f24
        inc ecx
        add eax, 4
        cmp ecx, 5
        jl public_4a4f10
        jmp public_4a4f2a
        public_4a4f24 : nop
        mov dword ptr ds : [esi+0x664], ecx
        public_4a4f2a : nop
        mov ecx, dword ptr ds : [esi+0x578]
        add ecx, dword ptr ds : [esi+0x664]
        mov dword ptr ds : [esi+0x580], ecx
        mov ecx, esi
        call public_4a5270
        mov ecx, esi
        mov dword ptr ds : [esi+0x57C], 0
        call public_4a5580
        mov eax, dword ptr ds : [esi+0x580]
        mov ebx, dword ptr ds : [esi+0x584]
        lea edi, ds:[eax+eax*2]
        shl edi, 5
        add edi, ebx
        lea edx, ds:[edi+0x28]
        push edx
        call public_459950
        add edi, 0x40
        push edi
        call public_459950
        add esp, 8
        public_4a4f7d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4a4d60)
        ASM_EXPORT_ENTRY_SINGLE(0x4a4f7d, public_4a4f7d)
    }
}

#undef public_4a4d88
#undef public_4a4d97
#undef public_4a4da9
#undef public_4a4dc1
#undef public_4a4de2
#undef public_4a4df0
#undef public_4a4e05
#undef public_4a4e13
#undef public_4a4e2e
#undef public_4a4e46
#undef public_4a4e6b
#undef public_4a4e9f
#undef public_4a4ec1
#undef public_4a4ed2
#undef public_4a4ee4
#undef public_4a4efc
#undef public_4a4f10
#undef public_4a4f24
#undef public_4a4f2a
#undef public_4a4f7d

#pragma init_seg(compiler)
extern "C" void const* const public_4a4f7d = __AsmFindLabelExport(&internal_4a4d60, 0x4a4f7d);
