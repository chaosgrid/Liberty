#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3af0);
CLANG_FORWARD_PROC_SYMBOL(public_65c41c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4320);
CLANG_FORWARD_PROC_SYMBOL(public_65c4670);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6ebc);

#define public_65c46af _public_65c46af
#define public_65c46cc _public_65c46cc
#define public_65c46fc _public_65c46fc
#define public_65c4707 _public_65c4707
#define public_65c4721 _public_65c4721
#define public_65c4744 _public_65c4744
#define public_65c4746 _public_65c4746
#define public_65c474d _public_65c474d
#define public_65c476d _public_65c476d
#define public_65c47aa _public_65c47aa
#define public_65c47be _public_65c47be
#define public_65c47df _public_65c47df
#define public_65c4812 _public_65c4812
#define public_65c4814 _public_65c4814
#define public_65c4837 _public_65c4837
#define public_65c4869 _public_65c4869
#define public_65c486b _public_65c486b
#define public_65c48b0 _public_65c48b0
#define public_65c48c6 _public_65c48c6
#define public_65c48c8 _public_65c48c8
#define public_65c48da _public_65c48da
#define public_65c48ee _public_65c48ee

PROC_DECLARE(0x65c4670, internal_65c4670, public_65c4670);
extern "C" NAKED register_t __cdecl internal_65c4670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_65c6ebc @0x65c4672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6ebc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        xor ebx, ebx
        add eax, 0xFFF9
        cmp eax, 0xD
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        ja public_65c48ee
/*FIXUP movzx ecx, byte ptr ds : [eax+public_65c4924] @0x65c46a1*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_65c4904] @0x65c46a8*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_65c46af
  JMPTB cmp eax, 1
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_65c4707
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_65c48b0
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_65c476d
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_65c47df
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 5
  JMPTB je public_65c4837
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_65c48ee
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 6
  JMPTB je public_65c48da
  JMPTB int 3
        public_65c46af : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        jne public_65c46cc
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x568], edx
        jmp public_65c48ee
        public_65c46cc : nop
        mov ecx, dword ptr ds : [eax+4]
        push 0x20
        mov dword ptr ds : [esi+8], ecx
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_65c46fc
        mov ecx, eax
        call public_65c41c0
        mov dword ptr ds : [eax+4], 1
        jmp public_65c474d
        public_65c46fc : nop
        xor eax, eax
        mov dword ptr ds : [eax+4], 1
        jmp public_65c474d
        public_65c4707 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        jne public_65c4721
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+0x568], esi
        jmp public_65c48ee
        public_65c4721 : nop
        push 0x20
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 1
        je public_65c4744
        mov ecx, eax
        call public_65c41c0
        jmp public_65c4746
        public_65c4744 : nop
        xor eax, eax
        public_65c4746 : nop
        mov dword ptr ds : [eax+4], 3
        public_65c474d : nop
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ds:[edx+0x56C]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], esi
        call public_65c4320
        jmp public_65c48ee
        public_65c476d : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, eax
        mov dword ptr ds : [edi+4], esi
/*FIXUP push offset public_65ca268 @0x65c4781*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        mov dword ptr ds : [ecx+0x18], edi
        call dword ptr ds : [public_65c7024]
        mov esi, dword ptr ds : [public_65ca260]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_65c47aa
        mov ebx, eax
        public_65c47aa : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_65c47be
        mov dword ptr ds : [eax], edi
        public_65c47be : nop
        mov ecx, dword ptr ds : [public_65ca264]
        inc ecx
/*FIXUP push offset public_65ca268 @0x65c47c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca268
        mov dword ptr ds : [public_65ca264], ecx
        call dword ptr ds : [public_65c7028]
        mov ebx, dword ptr ss : [esp+0xC]
        jmp public_65c48ee
        public_65c47df : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_65c48ee
        push 0x20
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov edi, 2
        mov dword ptr ss : [esp+0x18], edi
        je public_65c4812
        mov ecx, eax
        call public_65c41c0
        jmp public_65c4814
        public_65c4812 : nop
        xor eax, eax
        public_65c4814 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        add ecx, 0x56C
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax+4], edi
        call public_65c4320
        jmp public_65c48ee
        public_65c4837 : nop
        mov esi, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_65c48ee
        push 0x20
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 3
        je public_65c4869
        mov ecx, eax
        call public_65c41c0
        jmp public_65c486b
        public_65c4869 : nop
        xor eax, eax
        public_65c486b : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x10], ecx
        push eax
        lea ecx, ds:[edx+0x56C]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], edi
        call public_65c4320
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [public_65ca254], eax
        mov ebx, 0x15800E
        jmp public_65c48ee
        public_65c48b0 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x998]
        test eax, eax
        je public_65c48c6
        lea eax, ds:[edx+0x598]
        jmp public_65c48c8
        public_65c48c6 : nop
        xor eax, eax
        public_65c48c8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [edx+0x998]
        mov dword ptr ds : [ecx+0x1C], eax
        jmp public_65c48ee
        public_65c48da : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_65c48ee
        mov edx, dword ptr ds : [eax+0x10]
        push edx
        call public_65c3af0
        public_65c48ee : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x65c4670)
        ASM_EXPORT_ENTRY_FIRST(0x65c46af, public_65c46af)
        ASM_EXPORT_ENTRY(0x65c4707, public_65c4707)
        ASM_EXPORT_ENTRY(0x65c476d, public_65c476d)
        ASM_EXPORT_ENTRY(0x65c47df, public_65c47df)
        ASM_EXPORT_ENTRY(0x65c4837, public_65c4837)
        ASM_EXPORT_ENTRY(0x65c48b0, public_65c48b0)
        ASM_EXPORT_ENTRY(0x65c48da, public_65c48da)
        ASM_EXPORT_ENTRY_LAST(0x65c48ee, public_65c48ee)
    }
}

#undef public_65c46af
#undef public_65c46cc
#undef public_65c46fc
#undef public_65c4707
#undef public_65c4721
#undef public_65c4744
#undef public_65c4746
#undef public_65c474d
#undef public_65c476d
#undef public_65c47aa
#undef public_65c47be
#undef public_65c47df
#undef public_65c4812
#undef public_65c4814
#undef public_65c4837
#undef public_65c4869
#undef public_65c486b
#undef public_65c48b0
#undef public_65c48c6
#undef public_65c48c8
#undef public_65c48da
#undef public_65c48ee

#pragma init_seg(compiler)
extern "C" void const* const public_65c46af = __AsmFindLabelExport(&internal_65c4670, 0x65c46af);
extern "C" void const* const public_65c4707 = __AsmFindLabelExport(&internal_65c4670, 0x65c4707);
extern "C" void const* const public_65c476d = __AsmFindLabelExport(&internal_65c4670, 0x65c476d);
extern "C" void const* const public_65c47df = __AsmFindLabelExport(&internal_65c4670, 0x65c47df);
extern "C" void const* const public_65c4837 = __AsmFindLabelExport(&internal_65c4670, 0x65c4837);
extern "C" void const* const public_65c48b0 = __AsmFindLabelExport(&internal_65c4670, 0x65c48b0);
extern "C" void const* const public_65c48da = __AsmFindLabelExport(&internal_65c4670, 0x65c48da);
extern "C" void const* const public_65c48ee = __AsmFindLabelExport(&internal_65c4670, 0x65c48ee);
