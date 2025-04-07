#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1660);
CLANG_FORWARD_PROC_SYMBOL(public_6eb16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);

#define public_6eb4df7 _public_6eb4df7
#define public_6eb4e11 _public_6eb4e11
#define public_6eb4e1a _public_6eb4e1a
#define public_6eb4e25 _public_6eb4e25
#define public_6eb4e2b _public_6eb4e2b
#define public_6eb4e3e _public_6eb4e3e
#define public_6eb4e5e _public_6eb4e5e
#define public_6eb4e83 _public_6eb4e83
#define public_6eb4e91 _public_6eb4e91
#define public_6eb4e95 _public_6eb4e95
#define public_6eb4ea7 _public_6eb4ea7
#define public_6eb4ec0 _public_6eb4ec0
#define public_6eb4ed4 _public_6eb4ed4
#define public_6eb4ee0 _public_6eb4ee0
#define public_6eb4ee9 _public_6eb4ee9
#define public_6eb4ef2 _public_6eb4ef2
#define public_6eb4efb _public_6eb4efb
#define public_6eb4f06 _public_6eb4f06
#define public_6eb4f0c _public_6eb4f0c
#define public_6eb4f1f _public_6eb4f1f
#define public_6eb4f2d _public_6eb4f2d
#define public_6eb4f41 _public_6eb4f41
#define public_6eb4f4b _public_6eb4f4b
#define public_6eb4f4f _public_6eb4f4f
#define public_6eb4f64 _public_6eb4f64
#define public_6eb4f6d _public_6eb4f6d

PROC_DECLARE(0x6eb4dc0, internal_6eb4dc0, public_6eb4dc0);
extern "C" NAKED register_t __cdecl internal_6eb4dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        lea esi, ds:[ebx+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], eax
        cmp edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ebx
        je public_6eb4df7
        mov ecx, esi
        call public_6eb1660
        public_6eb4df7 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        push ebp
        mov dword ptr ds : [esi], edi
        ja public_6eb4e95
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb4f78] @0x6eb4e0a*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb4e11
  JMPTB cmp eax, 1
  JMPTB je public_6eb4e1a
  JMPTB cmp eax, 2
  JMPTB je public_6eb4e2b
  JMPTB cmp eax, 3
  JMPTB je public_6eb4e25
  JMPTB cmp eax, 4
  JMPTB je public_6eb4e3e
  JMPTB cmp eax, 5
  JMPTB je public_6eb4ec0
  JMPTB cmp eax, 6
  JMPTB je public_6eb4e3e
  JMPTB cmp eax, 7
  JMPTB je public_6eb4ee0
  JMPTB cmp eax, 8
  JMPTB je public_6eb4e11
  JMPTB cmp eax, 9
  JMPTB je public_6eb4ee9
  JMPTB int 3
        public_6eb4e11 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_6eb4e95
        public_6eb4e1a : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb4e95
        public_6eb4e25 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_6eb4e2b : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb4e95
        public_6eb4e3e : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [public_6ed1020]
        je public_6eb4e5e
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb4e5e : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        je public_6eb4e91
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        public_6eb4e83 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb4e83
        mov edi, dword ptr ss : [esp+0x18]
        public_6eb4e91 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6eb4e95 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp edi, eax
        lea esi, ds:[ebx+0x24]
        pop ebp
        je public_6eb4ea7
        mov ecx, esi
        call public_6eb1660
        public_6eb4ea7 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [esi], edi
        ja public_6eb4f4f
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb4fa0] @0x6eb4eb9*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb4ef2
  JMPTB cmp eax, 1
  JMPTB je public_6eb4efb
  JMPTB cmp eax, 2
  JMPTB je public_6eb4f0c
  JMPTB cmp eax, 3
  JMPTB je public_6eb4f06
  JMPTB cmp eax, 4
  JMPTB je public_6eb4f1f
  JMPTB cmp eax, 5
  JMPTB je public_6eb4f2d
  JMPTB cmp eax, 6
  JMPTB je public_6eb4f1f
  JMPTB cmp eax, 7
  JMPTB je public_6eb4ef2
  JMPTB cmp eax, 8
  JMPTB je public_6eb4f64
  JMPTB cmp eax, 9
  JMPTB je public_6eb4f6d
  JMPTB int 3
        public_6eb4ec0 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_6eb4ed4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6eb4ed4 : nop
        test ebx, ebx
        je public_6eb4e91
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        jmp public_6eb4e91
        public_6eb4ee0 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb4e95
        public_6eb4ee9 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb4e95
        public_6eb4ef2 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_6eb4f4f
        public_6eb4efb : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb4f4f
        public_6eb4f06 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], eax
        public_6eb4f0c : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], ecx
        jmp public_6eb4f4f
        public_6eb4f1f : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov ecx, esi
        call public_6eb16c0
        jmp public_6eb4f4f
        public_6eb4f2d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_6eb4f41
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6eb4f41 : nop
        test ebx, ebx
        je public_6eb4f4b
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_6eb4f4b : nop
        mov ebx, dword ptr ss : [esp+0xC]
        public_6eb4f4f : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push edi
        lea ecx, ds:[ebx+0x38]
        call public_6eb28f0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x20
        public_6eb4f64 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_6eb4f4f
        public_6eb4f6d : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb4f4f
        UNREACHABLE_TRAP(0x6eb4dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb4e11, public_6eb4e11)
        ASM_EXPORT_ENTRY(0x6eb4e1a, public_6eb4e1a)
        ASM_EXPORT_ENTRY(0x6eb4e25, public_6eb4e25)
        ASM_EXPORT_ENTRY(0x6eb4e2b, public_6eb4e2b)
        ASM_EXPORT_ENTRY(0x6eb4e3e, public_6eb4e3e)
        ASM_EXPORT_ENTRY(0x6eb4ec0, public_6eb4ec0)
        ASM_EXPORT_ENTRY(0x6eb4ee0, public_6eb4ee0)
        ASM_EXPORT_ENTRY(0x6eb4ee9, public_6eb4ee9)
        ASM_EXPORT_ENTRY(0x6eb4ef2, public_6eb4ef2)
        ASM_EXPORT_ENTRY(0x6eb4efb, public_6eb4efb)
        ASM_EXPORT_ENTRY(0x6eb4f06, public_6eb4f06)
        ASM_EXPORT_ENTRY(0x6eb4f0c, public_6eb4f0c)
        ASM_EXPORT_ENTRY(0x6eb4f1f, public_6eb4f1f)
        ASM_EXPORT_ENTRY(0x6eb4f2d, public_6eb4f2d)
        ASM_EXPORT_ENTRY(0x6eb4f64, public_6eb4f64)
        ASM_EXPORT_ENTRY_LAST(0x6eb4f6d, public_6eb4f6d)
    }
}

#undef public_6eb4df7
#undef public_6eb4e11
#undef public_6eb4e1a
#undef public_6eb4e25
#undef public_6eb4e2b
#undef public_6eb4e3e
#undef public_6eb4e5e
#undef public_6eb4e83
#undef public_6eb4e91
#undef public_6eb4e95
#undef public_6eb4ea7
#undef public_6eb4ec0
#undef public_6eb4ed4
#undef public_6eb4ee0
#undef public_6eb4ee9
#undef public_6eb4ef2
#undef public_6eb4efb
#undef public_6eb4f06
#undef public_6eb4f0c
#undef public_6eb4f1f
#undef public_6eb4f2d
#undef public_6eb4f41
#undef public_6eb4f4b
#undef public_6eb4f4f
#undef public_6eb4f64
#undef public_6eb4f6d

#pragma init_seg(compiler)
extern "C" void const* const public_6eb4e11 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4e11);
extern "C" void const* const public_6eb4e1a = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4e1a);
extern "C" void const* const public_6eb4e25 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4e25);
extern "C" void const* const public_6eb4e2b = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4e2b);
extern "C" void const* const public_6eb4e3e = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4e3e);
extern "C" void const* const public_6eb4ec0 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4ec0);
extern "C" void const* const public_6eb4ee0 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4ee0);
extern "C" void const* const public_6eb4ee9 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4ee9);
extern "C" void const* const public_6eb4ef2 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4ef2);
extern "C" void const* const public_6eb4efb = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4efb);
extern "C" void const* const public_6eb4f06 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f06);
extern "C" void const* const public_6eb4f0c = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f0c);
extern "C" void const* const public_6eb4f1f = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f1f);
extern "C" void const* const public_6eb4f2d = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f2d);
extern "C" void const* const public_6eb4f64 = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f64);
extern "C" void const* const public_6eb4f6d = __AsmFindLabelExport(&internal_6eb4dc0, 0x6eb4f6d);
