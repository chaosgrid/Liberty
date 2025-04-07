#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c19d0);
CLANG_FORWARD_PROC_SYMBOL(public_65c41c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4320);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6d7c);

#define public_65c1a11 _public_65c1a11
#define public_65c1a63 _public_65c1a63
#define public_65c1a65 _public_65c1a65
#define public_65c1aa8 _public_65c1aa8
#define public_65c1acd _public_65c1acd
#define public_65c1b08 _public_65c1b08
#define public_65c1b0a _public_65c1b0a
#define public_65c1b33 _public_65c1b33
#define public_65c1b5a _public_65c1b5a
#define public_65c1b94 _public_65c1b94
#define public_65c1b96 _public_65c1b96
#define public_65c1bb6 _public_65c1bb6
#define public_65c1bef _public_65c1bef
#define public_65c1bf8 _public_65c1bf8
#define public_65c1c6e _public_65c1c6e
#define public_65c1c74 _public_65c1c74
#define public_65c1d3f _public_65c1d3f

PROC_DECLARE(0x65c19d0, internal_65c19d0, public_65c19d0);
extern "C" NAKED register_t __cdecl internal_65c19d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_65c6d7c @0x65c19d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6d7c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        mov eax, dword ptr ss : [esp+0x74]
        push ebx
        push esi
        xor esi, esi
        add eax, 0xFFFD
        cmp eax, 0x13
        push edi
        mov dword ptr ss : [esp+0xC], esi
        ja public_65c1d3f
/*FIXUP movzx ecx, byte ptr ds : [eax+public_65c1d70] @0x65c1a03*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_65c1d58] @0x65c1a0a*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_65c1b33
  JMPTB cmp eax, 1
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_65c1acd
  JMPTB cmp eax, 3
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 4
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 5
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 6
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 7
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 8
  JMPTB mov ecx, 2
  JMPTB je public_65c1bb6
  JMPTB cmp eax, 9
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 3
  JMPTB je public_65c1a11
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 5
  JMPTB je public_65c1d3f
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 4
  JMPTB je public_65c1b5a
  JMPTB int 3
        public_65c1a11 : nop
        mov ebx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], 0x5C
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x50]
        call dword ptr ds : [public_65c70d8]
        mov edi, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [public_65ca120], eax
        cmp dword ptr ds : [edi+0x10], 1
        jbe public_65c1aa8
        push 0x20
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x7C], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x74], esi
        je public_65c1a63
        mov ecx, eax
        call public_65c41c0
        jmp public_65c1a65
        public_65c1a63 : nop
        xor eax, eax
        public_65c1a65 : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [eax+0x10], ecx
        push eax
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], ebx
        call public_65c4320
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], 0x15800E
        mov dword ptr ds : [public_65ca1c0], ecx
        jmp public_65c1d3f
        public_65c1aa8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_65ca1b0], eax
        mov edx, dword ptr ds : [edi+0xC]
        movzx eax, byte ptr ds : [edx]
        mov dword ptr ds : [public_65ca020], eax
        inc dword ptr ds : [public_65ca1b8]
        mov dword ptr ds : [public_65ca1c0], ecx
        jmp public_65c1d3f
        public_65c1acd : nop
        mov edi, dword ptr ss : [esp+0x7C]
        cmp edi, esi
        je public_65c1d3f
        call dword ptr ds : [public_65c70d8]
        push 0x20
        mov dword ptr ds : [public_65ca120], eax
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x7C], eax
        cmp eax, esi
        mov ebx, 1
        mov dword ptr ss : [esp+0x74], ebx
        je public_65c1b08
        mov ecx, eax
        call public_65c41c0
        jmp public_65c1b0a
        public_65c1b08 : nop
        xor eax, eax
        public_65c1b0a : nop
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0x1C], ecx
        push eax
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call public_65c4320
        jmp public_65c1d3f
        public_65c1b33 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        cmp eax, esi
        je public_65c1d3f
        mov edx, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax+0x78]
        jne public_65c1d3f
        mov dword ptr ds : [eax+0x78], esi
        jmp public_65c1d3f
        public_65c1b5a : nop
        mov edi, dword ptr ss : [esp+0x7C]
        cmp edi, esi
        je public_65c1d3f
        call dword ptr ds : [public_65c70d8]
        push 0x20
        mov dword ptr ds : [public_65ca120], eax
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x7C], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x74], 2
        je public_65c1b94
        mov ecx, eax
        call public_65c41c0
        jmp public_65c1b96
        public_65c1b94 : nop
        xor eax, eax
        public_65c1b96 : nop
        push eax
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+4], 3
        call public_65c4320
        jmp public_65c1d3f
        public_65c1bb6 : nop
        mov edi, dword ptr ss : [esp+0x7C]
        cmp edi, esi
        je public_65c1d3f
        push 0x20
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x80], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x74], 3
        je public_65c1bef
        mov ecx, eax
        call public_65c41c0
        mov dword ptr ss : [esp+0x80], eax
        jmp public_65c1bf8
        public_65c1bef : nop
        mov dword ptr ss : [esp+0x80], esi
        mov eax, esi
        public_65c1bf8 : nop
        mov ebx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+4], 4
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [public_65c7084]
        push 0x20
        call edi
        mov ebp, eax
        mov dword ptr ss : [ebp], 0x20
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], esi
        mov eax, dword ptr ds : [ebx+0x10]
        add esp, 4
        cmp eax, esi
        je public_65c1c6e
        mov ecx, dword ptr ds : [ebx+0x14]
        push ecx
        call edi
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x14], ecx
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        add esp, 4
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_65c7084]
        jmp public_65c1c74
        public_65c1c6e : nop
        mov dword ptr ss : [ebp+0x10], esi
        mov dword ptr ss : [ebp+0x14], esi
        public_65c1c74 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp+0x1C], ecx
        mov esi, dword ptr ds : [ebx+0xC]
        push 0x48
        call edi
        mov ebx, eax
        mov dword ptr ds : [ebx], 0x48
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], edx
        lea eax, ds:[esi+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        lea ecx, ds:[esi+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x18]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ebx+0x28], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [ebx+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x30]
        push ecx
        call dword ptr ds : [public_65c70a8]
        lea edi, ds:[eax+eax+2]
        push edi
        call dword ptr ds : [public_65c7084]
        mov dword ptr ds : [ebx+0x30], eax
        mov esi, dword ptr ds : [esi+0x30]
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        xor eax, eax
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov dword ptr ds : [ebx+0x34], eax
        mov dword ptr ds : [ebx+0x38], eax
        mov dword ptr ds : [ebx+0x3C], eax
        mov dword ptr ds : [ebx+0x40], eax
        mov dword ptr ds : [ebx+0x44], eax
        mov eax, dword ptr ss : [esp+0x90]
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], 0x20
        push eax
        mov eax, dword ptr ss : [esp+0x84]
        lea ecx, ds:[eax+0x10]
        call public_65c4320
        pop ebp
        public_65c1d3f : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 0xC
        UNREACHABLE_TRAP(0x65c19d0)
        ASM_EXPORT_ENTRY_FIRST(0x65c1a11, public_65c1a11)
        ASM_EXPORT_ENTRY(0x65c1acd, public_65c1acd)
        ASM_EXPORT_ENTRY(0x65c1b33, public_65c1b33)
        ASM_EXPORT_ENTRY(0x65c1b5a, public_65c1b5a)
        ASM_EXPORT_ENTRY(0x65c1bb6, public_65c1bb6)
        ASM_EXPORT_ENTRY_LAST(0x65c1d3f, public_65c1d3f)
    }
}

#undef public_65c1a11
#undef public_65c1a63
#undef public_65c1a65
#undef public_65c1aa8
#undef public_65c1acd
#undef public_65c1b08
#undef public_65c1b0a
#undef public_65c1b33
#undef public_65c1b5a
#undef public_65c1b94
#undef public_65c1b96
#undef public_65c1bb6
#undef public_65c1bef
#undef public_65c1bf8
#undef public_65c1c6e
#undef public_65c1c74
#undef public_65c1d3f

#pragma init_seg(compiler)
extern "C" void const* const public_65c1a11 = __AsmFindLabelExport(&internal_65c19d0, 0x65c1a11);
extern "C" void const* const public_65c1acd = __AsmFindLabelExport(&internal_65c19d0, 0x65c1acd);
extern "C" void const* const public_65c1b33 = __AsmFindLabelExport(&internal_65c19d0, 0x65c1b33);
extern "C" void const* const public_65c1b5a = __AsmFindLabelExport(&internal_65c19d0, 0x65c1b5a);
extern "C" void const* const public_65c1bb6 = __AsmFindLabelExport(&internal_65c19d0, 0x65c1bb6);
extern "C" void const* const public_65c1d3f = __AsmFindLabelExport(&internal_65c19d0, 0x65c1d3f);
