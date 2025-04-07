#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1960);
CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b20);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b80);

#define public_66f17e7 _public_66f17e7
#define public_66f17fc _public_66f17fc
#define public_66f1804 _public_66f1804
#define public_66f180a _public_66f180a
#define public_66f1816 _public_66f1816
#define public_66f181e _public_66f181e
#define public_66f183f _public_66f183f
#define public_66f1864 _public_66f1864
#define public_66f186e _public_66f186e
#define public_66f1872 _public_66f1872
#define public_66f1886 _public_66f1886
#define public_66f1897 _public_66f1897
#define public_66f18a4 _public_66f18a4
#define public_66f18ac _public_66f18ac
#define public_66f18b2 _public_66f18b2
#define public_66f18be _public_66f18be
#define public_66f18c6 _public_66f18c6
#define public_66f18d3 _public_66f18d3
#define public_66f18e0 _public_66f18e0
#define public_66f18e8 _public_66f18e8
#define public_66f18ee _public_66f18ee
#define public_66f1903 _public_66f1903

PROC_DECLARE(0x66f1790, internal_66f1790, public_66f1790);
extern "C" NAKED register_t __cdecl internal_66f1790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x6C]
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        jbe public_66f1903
        mov ecx, dword ptr ss : [esp+8]
        imul esi, 0x4C
        mov eax, dword ptr ds : [esi+ecx]
        add esi, ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, eax
        je public_66f17e7
        mov ecx, ebx
        call public_66f1ac0
        public_66f17e7 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [ebx], edi
        ja public_66f1872
/*FIXUP jmp dword ptr ds : [eax*4+public_66f190c] @0x66f17f5*/
  JMPTB cmp eax, 0
  JMPTB je public_66f17fc
  JMPTB cmp eax, 1
  JMPTB je public_66f18a4
  JMPTB cmp eax, 2
  JMPTB je public_66f180a
  JMPTB cmp eax, 3
  JMPTB je public_66f1804
  JMPTB cmp eax, 4
  JMPTB je public_66f181e
  JMPTB cmp eax, 5
  JMPTB je public_66f1897
  JMPTB cmp eax, 6
  JMPTB je public_66f181e
  JMPTB cmp eax, 7
  JMPTB je public_66f18a4
  JMPTB cmp eax, 8
  JMPTB je public_66f1816
  JMPTB cmp eax, 9
  JMPTB je public_66f17fc
  JMPTB int 3
        public_66f17fc : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], ecx
        jmp public_66f1872
        public_66f1804 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ebx+0x10], eax
        public_66f180a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ebx+8], edx
        public_66f1816 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], eax
        jmp public_66f1872
        public_66f181e : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov ebp, dword ptr ds : [esi+0x14]
        je public_66f183f
        push eax
        push 0
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [ebx+4], 0
        public_66f183f : nop
        test ebp, ebp
        je public_66f186e
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, ebp
        mov edx, eax
        public_66f1864 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f1864
        public_66f186e : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_66f1872 : nop
        mov ebx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [ebp+0x24]
        cmp ebx, eax
        lea edi, ss:[ebp+0x24]
        je public_66f1886
        mov ecx, edi
        call public_66f1ac0
        public_66f1886 : nop
        lea eax, ds:[ebx-1]
        cmp eax, 9
        mov dword ptr ds : [edi], ebx
        ja public_66f18ee
/*FIXUP jmp dword ptr ds : [eax*4+public_66f1934] @0x66f1890*/
  JMPTB cmp eax, 0
  JMPTB je public_66f18e0
  JMPTB cmp eax, 1
  JMPTB je public_66f18e8
  JMPTB cmp eax, 2
  JMPTB je public_66f18b2
  JMPTB cmp eax, 3
  JMPTB je public_66f18ac
  JMPTB cmp eax, 4
  JMPTB je public_66f18c6
  JMPTB cmp eax, 5
  JMPTB je public_66f18d3
  JMPTB cmp eax, 6
  JMPTB je public_66f18c6
  JMPTB cmp eax, 7
  JMPTB je public_66f18be
  JMPTB cmp eax, 8
  JMPTB je public_66f18e0
  JMPTB cmp eax, 9
  JMPTB je public_66f18e8
  JMPTB int 3
        public_66f1897 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, ebx
        call public_66f1b80
        jmp public_66f1872
        public_66f18a4 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], edx
        jmp public_66f1872
        public_66f18ac : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x10], ecx
        public_66f18b2 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+8], eax
        public_66f18be : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], ecx
        jmp public_66f18ee
        public_66f18c6 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        mov ecx, edi
        call public_66f1b20
        jmp public_66f18ee
        public_66f18d3 : nop
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        mov ecx, edi
        call public_66f1b80
        jmp public_66f18ee
        public_66f18e0 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], edx
        jmp public_66f18ee
        public_66f18e8 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], eax
        public_66f18ee : nop
        add esi, 0x38
        push esi
        lea ecx, ss:[ebp+0x38]
        call public_66f1960
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        ret 0xC
        public_66f1903 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f1790)
        ASM_EXPORT_ENTRY_FIRST(0x66f17fc, public_66f17fc)
        ASM_EXPORT_ENTRY(0x66f1804, public_66f1804)
        ASM_EXPORT_ENTRY(0x66f180a, public_66f180a)
        ASM_EXPORT_ENTRY(0x66f1816, public_66f1816)
        ASM_EXPORT_ENTRY(0x66f181e, public_66f181e)
        ASM_EXPORT_ENTRY(0x66f1897, public_66f1897)
        ASM_EXPORT_ENTRY(0x66f18a4, public_66f18a4)
        ASM_EXPORT_ENTRY(0x66f18ac, public_66f18ac)
        ASM_EXPORT_ENTRY(0x66f18b2, public_66f18b2)
        ASM_EXPORT_ENTRY(0x66f18be, public_66f18be)
        ASM_EXPORT_ENTRY(0x66f18c6, public_66f18c6)
        ASM_EXPORT_ENTRY(0x66f18d3, public_66f18d3)
        ASM_EXPORT_ENTRY(0x66f18e0, public_66f18e0)
        ASM_EXPORT_ENTRY_LAST(0x66f18e8, public_66f18e8)
    }
}

#undef public_66f17e7
#undef public_66f17fc
#undef public_66f1804
#undef public_66f180a
#undef public_66f1816
#undef public_66f181e
#undef public_66f183f
#undef public_66f1864
#undef public_66f186e
#undef public_66f1872
#undef public_66f1886
#undef public_66f1897
#undef public_66f18a4
#undef public_66f18ac
#undef public_66f18b2
#undef public_66f18be
#undef public_66f18c6
#undef public_66f18d3
#undef public_66f18e0
#undef public_66f18e8
#undef public_66f18ee
#undef public_66f1903

#pragma init_seg(compiler)
extern "C" void const* const public_66f17fc = __AsmFindLabelExport(&internal_66f1790, 0x66f17fc);
extern "C" void const* const public_66f1804 = __AsmFindLabelExport(&internal_66f1790, 0x66f1804);
extern "C" void const* const public_66f180a = __AsmFindLabelExport(&internal_66f1790, 0x66f180a);
extern "C" void const* const public_66f1816 = __AsmFindLabelExport(&internal_66f1790, 0x66f1816);
extern "C" void const* const public_66f181e = __AsmFindLabelExport(&internal_66f1790, 0x66f181e);
extern "C" void const* const public_66f1897 = __AsmFindLabelExport(&internal_66f1790, 0x66f1897);
extern "C" void const* const public_66f18a4 = __AsmFindLabelExport(&internal_66f1790, 0x66f18a4);
extern "C" void const* const public_66f18ac = __AsmFindLabelExport(&internal_66f1790, 0x66f18ac);
extern "C" void const* const public_66f18b2 = __AsmFindLabelExport(&internal_66f1790, 0x66f18b2);
extern "C" void const* const public_66f18be = __AsmFindLabelExport(&internal_66f1790, 0x66f18be);
extern "C" void const* const public_66f18c6 = __AsmFindLabelExport(&internal_66f1790, 0x66f18c6);
extern "C" void const* const public_66f18d3 = __AsmFindLabelExport(&internal_66f1790, 0x66f18d3);
extern "C" void const* const public_66f18e0 = __AsmFindLabelExport(&internal_66f1790, 0x66f18e0);
extern "C" void const* const public_66f18e8 = __AsmFindLabelExport(&internal_66f1790, 0x66f18e8);
