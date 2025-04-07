#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b20);
CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);

#define public_66f3e17 _public_66f3e17
#define public_66f3e31 _public_66f3e31
#define public_66f3e3a _public_66f3e3a
#define public_66f3e45 _public_66f3e45
#define public_66f3e4b _public_66f3e4b
#define public_66f3e5e _public_66f3e5e
#define public_66f3e7e _public_66f3e7e
#define public_66f3ea3 _public_66f3ea3
#define public_66f3eb1 _public_66f3eb1
#define public_66f3eb5 _public_66f3eb5
#define public_66f3ec7 _public_66f3ec7
#define public_66f3ee0 _public_66f3ee0
#define public_66f3ef4 _public_66f3ef4
#define public_66f3f00 _public_66f3f00
#define public_66f3f09 _public_66f3f09
#define public_66f3f12 _public_66f3f12
#define public_66f3f1b _public_66f3f1b
#define public_66f3f26 _public_66f3f26
#define public_66f3f2c _public_66f3f2c
#define public_66f3f3f _public_66f3f3f
#define public_66f3f4d _public_66f3f4d
#define public_66f3f61 _public_66f3f61
#define public_66f3f6b _public_66f3f6b
#define public_66f3f6f _public_66f3f6f
#define public_66f3f84 _public_66f3f84
#define public_66f3f8d _public_66f3f8d

PROC_DECLARE(0x66f3de0, internal_66f3de0, public_66f3de0);
extern "C" NAKED register_t __cdecl internal_66f3de0()
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
        je public_66f3e17
        mov ecx, esi
        call public_66f1ac0
        public_66f3e17 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        push ebp
        mov dword ptr ds : [esi], edi
        ja public_66f3eb5
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_66f3f98] @0x66f3e2a*/
  JMPTB cmp eax, 0
  JMPTB je public_66f3e31
  JMPTB cmp eax, 1
  JMPTB je public_66f3e3a
  JMPTB cmp eax, 2
  JMPTB je public_66f3e4b
  JMPTB cmp eax, 3
  JMPTB je public_66f3e45
  JMPTB cmp eax, 4
  JMPTB je public_66f3e5e
  JMPTB cmp eax, 5
  JMPTB je public_66f3ee0
  JMPTB cmp eax, 6
  JMPTB je public_66f3e5e
  JMPTB cmp eax, 7
  JMPTB je public_66f3f00
  JMPTB cmp eax, 8
  JMPTB je public_66f3e31
  JMPTB cmp eax, 9
  JMPTB je public_66f3f09
  JMPTB int 3
        public_66f3e31 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_66f3eb5
        public_66f3e3a : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+4], eax
        jmp public_66f3eb5
        public_66f3e45 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_66f3e4b : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], eax
        jmp public_66f3eb5
        public_66f3e5e : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [public_6701018]
        je public_66f3e7e
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        public_66f3e7e : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        je public_66f3eb1
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        public_66f3ea3 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f3ea3
        mov edi, dword ptr ss : [esp+0x18]
        public_66f3eb1 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_66f3eb5 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp edi, eax
        lea esi, ds:[ebx+0x24]
        pop ebp
        je public_66f3ec7
        mov ecx, esi
        call public_66f1ac0
        public_66f3ec7 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [esi], edi
        ja public_66f3f6f
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_66f3fc0] @0x66f3ed9*/
  JMPTB cmp eax, 0
  JMPTB je public_66f3f12
  JMPTB cmp eax, 1
  JMPTB je public_66f3f1b
  JMPTB cmp eax, 2
  JMPTB je public_66f3f2c
  JMPTB cmp eax, 3
  JMPTB je public_66f3f26
  JMPTB cmp eax, 4
  JMPTB je public_66f3f3f
  JMPTB cmp eax, 5
  JMPTB je public_66f3f4d
  JMPTB cmp eax, 6
  JMPTB je public_66f3f3f
  JMPTB cmp eax, 7
  JMPTB je public_66f3f12
  JMPTB cmp eax, 8
  JMPTB je public_66f3f84
  JMPTB cmp eax, 9
  JMPTB je public_66f3f8d
  JMPTB int 3
        public_66f3ee0 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_66f3ef4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66f3ef4 : nop
        test ebx, ebx
        je public_66f3eb1
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        jmp public_66f3eb1
        public_66f3f00 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_66f3eb5
        public_66f3f09 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_66f3eb5
        public_66f3f12 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_66f3f6f
        public_66f3f1b : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], edx
        jmp public_66f3f6f
        public_66f3f26 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], eax
        public_66f3f2c : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], ecx
        jmp public_66f3f6f
        public_66f3f3f : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov ecx, esi
        call public_66f1b20
        jmp public_66f3f6f
        public_66f3f4d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_66f3f61
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66f3f61 : nop
        test ebx, ebx
        je public_66f3f6b
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_66f3f6b : nop
        mov ebx, dword ptr ss : [esp+0xC]
        public_66f3f6f : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push edi
        lea ecx, ds:[ebx+0x38]
        call public_66f3b30
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x20
        public_66f3f84 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_66f3f6f
        public_66f3f8d : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_66f3f6f
        UNREACHABLE_TRAP(0x66f3de0)
        ASM_EXPORT_ENTRY_FIRST(0x66f3e31, public_66f3e31)
        ASM_EXPORT_ENTRY(0x66f3e3a, public_66f3e3a)
        ASM_EXPORT_ENTRY(0x66f3e45, public_66f3e45)
        ASM_EXPORT_ENTRY(0x66f3e4b, public_66f3e4b)
        ASM_EXPORT_ENTRY(0x66f3e5e, public_66f3e5e)
        ASM_EXPORT_ENTRY(0x66f3ee0, public_66f3ee0)
        ASM_EXPORT_ENTRY(0x66f3f00, public_66f3f00)
        ASM_EXPORT_ENTRY(0x66f3f09, public_66f3f09)
        ASM_EXPORT_ENTRY(0x66f3f12, public_66f3f12)
        ASM_EXPORT_ENTRY(0x66f3f1b, public_66f3f1b)
        ASM_EXPORT_ENTRY(0x66f3f26, public_66f3f26)
        ASM_EXPORT_ENTRY(0x66f3f2c, public_66f3f2c)
        ASM_EXPORT_ENTRY(0x66f3f3f, public_66f3f3f)
        ASM_EXPORT_ENTRY(0x66f3f4d, public_66f3f4d)
        ASM_EXPORT_ENTRY(0x66f3f84, public_66f3f84)
        ASM_EXPORT_ENTRY_LAST(0x66f3f8d, public_66f3f8d)
    }
}

#undef public_66f3e17
#undef public_66f3e31
#undef public_66f3e3a
#undef public_66f3e45
#undef public_66f3e4b
#undef public_66f3e5e
#undef public_66f3e7e
#undef public_66f3ea3
#undef public_66f3eb1
#undef public_66f3eb5
#undef public_66f3ec7
#undef public_66f3ee0
#undef public_66f3ef4
#undef public_66f3f00
#undef public_66f3f09
#undef public_66f3f12
#undef public_66f3f1b
#undef public_66f3f26
#undef public_66f3f2c
#undef public_66f3f3f
#undef public_66f3f4d
#undef public_66f3f61
#undef public_66f3f6b
#undef public_66f3f6f
#undef public_66f3f84
#undef public_66f3f8d

#pragma init_seg(compiler)
extern "C" void const* const public_66f3e31 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3e31);
extern "C" void const* const public_66f3e3a = __AsmFindLabelExport(&internal_66f3de0, 0x66f3e3a);
extern "C" void const* const public_66f3e45 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3e45);
extern "C" void const* const public_66f3e4b = __AsmFindLabelExport(&internal_66f3de0, 0x66f3e4b);
extern "C" void const* const public_66f3e5e = __AsmFindLabelExport(&internal_66f3de0, 0x66f3e5e);
extern "C" void const* const public_66f3ee0 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3ee0);
extern "C" void const* const public_66f3f00 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f00);
extern "C" void const* const public_66f3f09 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f09);
extern "C" void const* const public_66f3f12 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f12);
extern "C" void const* const public_66f3f1b = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f1b);
extern "C" void const* const public_66f3f26 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f26);
extern "C" void const* const public_66f3f2c = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f2c);
extern "C" void const* const public_66f3f3f = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f3f);
extern "C" void const* const public_66f3f4d = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f4d);
extern "C" void const* const public_66f3f84 = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f84);
extern "C" void const* const public_66f3f8d = __AsmFindLabelExport(&internal_66f3de0, 0x66f3f8d);
