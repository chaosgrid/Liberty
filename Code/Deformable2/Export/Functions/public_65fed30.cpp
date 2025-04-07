#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe5c0);
CLANG_FORWARD_PROC_SYMBOL(public_65fe620);
CLANG_FORWARD_PROC_SYMBOL(public_65fe930);
CLANG_FORWARD_PROC_SYMBOL(public_65fef00);

#define public_65fed87 _public_65fed87
#define public_65fed9c _public_65fed9c
#define public_65feda4 _public_65feda4
#define public_65fedaa _public_65fedaa
#define public_65fedb6 _public_65fedb6
#define public_65fedbe _public_65fedbe
#define public_65feddf _public_65feddf
#define public_65fee04 _public_65fee04
#define public_65fee0e _public_65fee0e
#define public_65fee12 _public_65fee12
#define public_65fee26 _public_65fee26
#define public_65fee37 _public_65fee37
#define public_65fee44 _public_65fee44
#define public_65fee4c _public_65fee4c
#define public_65fee52 _public_65fee52
#define public_65fee5e _public_65fee5e
#define public_65fee66 _public_65fee66
#define public_65fee73 _public_65fee73
#define public_65fee80 _public_65fee80
#define public_65fee88 _public_65fee88
#define public_65fee8e _public_65fee8e
#define public_65feea3 _public_65feea3

PROC_DECLARE(0x65fed30, internal_65fed30, public_65fed30);
extern "C" NAKED register_t __cdecl internal_65fed30()
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
        jbe public_65feea3
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
        je public_65fed87
        mov ecx, ebx
        call public_65fe5c0
        public_65fed87 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [ebx], edi
        ja public_65fee12
/*FIXUP jmp dword ptr ds : [eax*4+public_65feeac] @0x65fed95*/
  JMPTB cmp eax, 0
  JMPTB je public_65fed9c
  JMPTB cmp eax, 1
  JMPTB je public_65fee44
  JMPTB cmp eax, 2
  JMPTB je public_65fedaa
  JMPTB cmp eax, 3
  JMPTB je public_65feda4
  JMPTB cmp eax, 4
  JMPTB je public_65fedbe
  JMPTB cmp eax, 5
  JMPTB je public_65fee37
  JMPTB cmp eax, 6
  JMPTB je public_65fedbe
  JMPTB cmp eax, 7
  JMPTB je public_65fee44
  JMPTB cmp eax, 8
  JMPTB je public_65fedb6
  JMPTB cmp eax, 9
  JMPTB je public_65fed9c
  JMPTB int 3
        public_65fed9c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], ecx
        jmp public_65fee12
        public_65feda4 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ebx+0x10], eax
        public_65fedaa : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ebx+8], edx
        public_65fedb6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], eax
        jmp public_65fee12
        public_65fedbe : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov ebp, dword ptr ds : [esi+0x14]
        je public_65feddf
        push eax
        push 0
        call dword ptr ds : [public_6601020]
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [ebx+4], 0
        public_65feddf : nop
        test ebp, ebp
        je public_65fee0e
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call dword ptr ds : [public_6601020]
        push eax
        call dword ptr ds : [public_6601014]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, ebp
        mov edx, eax
        public_65fee04 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65fee04
        public_65fee0e : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_65fee12 : nop
        mov ebx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [ebp+0x24]
        cmp ebx, eax
        lea edi, ss:[ebp+0x24]
        je public_65fee26
        mov ecx, edi
        call public_65fe5c0
        public_65fee26 : nop
        lea eax, ds:[ebx-1]
        cmp eax, 9
        mov dword ptr ds : [edi], ebx
        ja public_65fee8e
/*FIXUP jmp dword ptr ds : [eax*4+public_65feed4] @0x65fee30*/
  JMPTB cmp eax, 0
  JMPTB je public_65fee80
  JMPTB cmp eax, 1
  JMPTB je public_65fee88
  JMPTB cmp eax, 2
  JMPTB je public_65fee52
  JMPTB cmp eax, 3
  JMPTB je public_65fee4c
  JMPTB cmp eax, 4
  JMPTB je public_65fee66
  JMPTB cmp eax, 5
  JMPTB je public_65fee73
  JMPTB cmp eax, 6
  JMPTB je public_65fee66
  JMPTB cmp eax, 7
  JMPTB je public_65fee5e
  JMPTB cmp eax, 8
  JMPTB je public_65fee80
  JMPTB cmp eax, 9
  JMPTB je public_65fee88
  JMPTB int 3
        public_65fee37 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, ebx
        call public_65fe930
        jmp public_65fee12
        public_65fee44 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], edx
        jmp public_65fee12
        public_65fee4c : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x10], ecx
        public_65fee52 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+8], eax
        public_65fee5e : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], ecx
        jmp public_65fee8e
        public_65fee66 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        mov ecx, edi
        call public_65fe620
        jmp public_65fee8e
        public_65fee73 : nop
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        mov ecx, edi
        call public_65fe930
        jmp public_65fee8e
        public_65fee80 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], edx
        jmp public_65fee8e
        public_65fee88 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], eax
        public_65fee8e : nop
        add esi, 0x38
        push esi
        lea ecx, ss:[ebp+0x38]
        call public_65fef00
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        ret 0xC
        public_65feea3 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65fed30)
        ASM_EXPORT_ENTRY_FIRST(0x65fed9c, public_65fed9c)
        ASM_EXPORT_ENTRY(0x65feda4, public_65feda4)
        ASM_EXPORT_ENTRY(0x65fedaa, public_65fedaa)
        ASM_EXPORT_ENTRY(0x65fedb6, public_65fedb6)
        ASM_EXPORT_ENTRY(0x65fedbe, public_65fedbe)
        ASM_EXPORT_ENTRY(0x65fee37, public_65fee37)
        ASM_EXPORT_ENTRY(0x65fee44, public_65fee44)
        ASM_EXPORT_ENTRY(0x65fee4c, public_65fee4c)
        ASM_EXPORT_ENTRY(0x65fee52, public_65fee52)
        ASM_EXPORT_ENTRY(0x65fee5e, public_65fee5e)
        ASM_EXPORT_ENTRY(0x65fee66, public_65fee66)
        ASM_EXPORT_ENTRY(0x65fee73, public_65fee73)
        ASM_EXPORT_ENTRY(0x65fee80, public_65fee80)
        ASM_EXPORT_ENTRY_LAST(0x65fee88, public_65fee88)
    }
}

#undef public_65fed87
#undef public_65fed9c
#undef public_65feda4
#undef public_65fedaa
#undef public_65fedb6
#undef public_65fedbe
#undef public_65feddf
#undef public_65fee04
#undef public_65fee0e
#undef public_65fee12
#undef public_65fee26
#undef public_65fee37
#undef public_65fee44
#undef public_65fee4c
#undef public_65fee52
#undef public_65fee5e
#undef public_65fee66
#undef public_65fee73
#undef public_65fee80
#undef public_65fee88
#undef public_65fee8e
#undef public_65feea3

#pragma init_seg(compiler)
extern "C" void const* const public_65fed9c = __AsmFindLabelExport(&internal_65fed30, 0x65fed9c);
extern "C" void const* const public_65feda4 = __AsmFindLabelExport(&internal_65fed30, 0x65feda4);
extern "C" void const* const public_65fedaa = __AsmFindLabelExport(&internal_65fed30, 0x65fedaa);
extern "C" void const* const public_65fedb6 = __AsmFindLabelExport(&internal_65fed30, 0x65fedb6);
extern "C" void const* const public_65fedbe = __AsmFindLabelExport(&internal_65fed30, 0x65fedbe);
extern "C" void const* const public_65fee37 = __AsmFindLabelExport(&internal_65fed30, 0x65fee37);
extern "C" void const* const public_65fee44 = __AsmFindLabelExport(&internal_65fed30, 0x65fee44);
extern "C" void const* const public_65fee4c = __AsmFindLabelExport(&internal_65fed30, 0x65fee4c);
extern "C" void const* const public_65fee52 = __AsmFindLabelExport(&internal_65fed30, 0x65fee52);
extern "C" void const* const public_65fee5e = __AsmFindLabelExport(&internal_65fed30, 0x65fee5e);
extern "C" void const* const public_65fee66 = __AsmFindLabelExport(&internal_65fed30, 0x65fee66);
extern "C" void const* const public_65fee73 = __AsmFindLabelExport(&internal_65fed30, 0x65fee73);
extern "C" void const* const public_65fee80 = __AsmFindLabelExport(&internal_65fed30, 0x65fee80);
extern "C" void const* const public_65fee88 = __AsmFindLabelExport(&internal_65fed30, 0x65fee88);
