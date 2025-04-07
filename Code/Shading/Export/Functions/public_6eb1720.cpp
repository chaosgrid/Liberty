#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1660);
CLANG_FORWARD_PROC_SYMBOL(public_6eb16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb19d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3450);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3780);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3840);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3900);

#define public_6eb1757 _public_6eb1757
#define public_6eb1783 _public_6eb1783
#define public_6eb17ae _public_6eb17ae
#define public_6eb17b6 _public_6eb17b6
#define public_6eb17bd _public_6eb17bd
#define public_6eb17cb _public_6eb17cb
#define public_6eb17d3 _public_6eb17d3
#define public_6eb17e1 _public_6eb17e1
#define public_6eb17ef _public_6eb17ef
#define public_6eb17f5 _public_6eb17f5
#define public_6eb180c _public_6eb180c
#define public_6eb1820 _public_6eb1820
#define public_6eb1834 _public_6eb1834
#define public_6eb1841 _public_6eb1841
#define public_6eb184c _public_6eb184c
#define public_6eb1852 _public_6eb1852
#define public_6eb1855 _public_6eb1855
#define public_6eb185d _public_6eb185d
#define public_6eb186e _public_6eb186e
#define public_6eb189c _public_6eb189c
#define public_6eb18b7 _public_6eb18b7
#define public_6eb18fa _public_6eb18fa
#define public_6eb1927 _public_6eb1927
#define public_6eb1936 _public_6eb1936
#define public_6eb1944 _public_6eb1944
#define public_6eb195e _public_6eb195e
#define public_6eb196c _public_6eb196c
#define public_6eb197b _public_6eb197b

PROC_DECLARE(0x6eb1720, internal_6eb1720, public_6eb1720);
extern "C" NAKED register_t __cdecl internal_6eb1720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x6C]
        xor ebp, ebp
        xor ecx, ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+4], ebp
        jbe public_6eb197b
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x14], esi
        public_6eb1757 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [esi+eax]
        add esi, eax
        not cl
        test cl, 1
        je public_6eb186e
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_6eb1783
        lea ecx, ss:[esp+0x24]
        call public_6eb1660
        public_6eb1783 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [edx+0x70]
        cmp eax, ebp
        je public_6eb185d
        mov ecx, dword ptr ss : [esp+0x24]
        dec ecx
        cmp ecx, 9
        ja public_6eb17f5
/*FIXUP jmp dword ptr ds : [ecx*4+public_6eb1984] @0x6eb17a7*/
  JMPTB cmp ecx, 0
  JMPTB je public_6eb17cb
  JMPTB cmp ecx, 1
  JMPTB je public_6eb17ae
  JMPTB cmp ecx, 2
  JMPTB je public_6eb17bd
  JMPTB cmp ecx, 3
  JMPTB je public_6eb17b6
  JMPTB cmp ecx, 4
  JMPTB je public_6eb17d3
  JMPTB cmp ecx, 5
  JMPTB je public_6eb17e1
  JMPTB cmp ecx, 6
  JMPTB je public_6eb17d3
  JMPTB cmp ecx, 7
  JMPTB je public_6eb17cb
  JMPTB cmp ecx, 8
  JMPTB je public_6eb17ae
  JMPTB cmp ecx, 9
  JMPTB je public_6eb17ef
  JMPTB int 3
        public_6eb17ae : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6eb17f5
        public_6eb17b6 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x34], ecx
        public_6eb17bd : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        public_6eb17cb : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6eb17f5
        public_6eb17d3 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6eb16c0
        jmp public_6eb17f5
        public_6eb17e1 : nop
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6eb19d0
        jmp public_6eb17f5
        public_6eb17ef : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        public_6eb17f5 : nop
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx-1]
        cmp eax, 8
        ja public_6eb195e
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb19ac] @0x6eb1805*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb180c
  JMPTB cmp eax, 1
  JMPTB je public_6eb1820
  JMPTB cmp eax, 2
  JMPTB je public_6eb1834
  JMPTB cmp eax, 3
  JMPTB je public_6eb1841
  JMPTB cmp eax, 4
  JMPTB je public_6eb189c
  JMPTB cmp eax, 5
  JMPTB je public_6eb195e
  JMPTB cmp eax, 6
  JMPTB je public_6eb189c
  JMPTB cmp eax, 7
  JMPTB je public_6eb18b7
  JMPTB cmp eax, 8
  JMPTB je public_6eb18fa
  JMPTB int 3
        public_6eb180c : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        push ebx
        call public_6eb3780
        add esp, 0xC
        jmp public_6eb1855
        public_6eb1820 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        push ebx
        call public_6eb3780
        add esp, 0xC
        jmp public_6eb1855
        public_6eb1834 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 3
        push edx
        jmp public_6eb184c
        public_6eb1841 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x28]
        push eax
        push 4
        push ecx
        public_6eb184c : nop
        push ebx
        call public_6eb3840
        public_6eb1852 : nop
        add esp, 0x10
        public_6eb1855 : nop
        test eax, eax
        jge public_6eb195e
        public_6eb185d : nop
        lea ecx, ss:[esp+0x24]
        call public_6eb1660
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        public_6eb186e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        add esi, 0x4C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        jb public_6eb1757
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 0x28
        ret 8
        public_6eb189c : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+4]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        push edx
        push ebx
        call public_6eb3900
        jmp public_6eb1852
        public_6eb18b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x4C], ebp
        call public_6eb3450
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [esi+4]
        shl edx, 4
        xor edx, eax
        and edx, 0xF0
        xor eax, edx
        mov dword ptr ss : [esp+0x4C], eax
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        push ebx
        call public_6eb3780
        add esp, 0x18
        jmp public_6eb1855
        public_6eb18fa : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        push ebx
        mov dword ptr ss : [esp+0x4C], ebp
        xor edi, edi
        call public_6eb3450
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        test eax, 0x20000
        jne public_6eb1927
        test eax, 0x40000
        je public_6eb1927
        mov edi, 1
        public_6eb1927 : nop
        sub edi, ebp
        mov ecx, dword ptr ss : [esp+0x28]
        je public_6eb196c
        dec edi
        jne public_6eb1944
        mov eax, dword ptr ss : [esp+0x40]
        public_6eb1936 : nop
        shl ecx, 2
        xor ecx, eax
        and ecx, 0xC
        xor eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        public_6eb1944 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        push ebx
        call public_6eb3780
        add esp, 0xC
        test eax, eax
        jl public_6eb185d
        public_6eb195e : nop
        lea ecx, ss:[esp+0x24]
        call public_6eb1660
        jmp public_6eb186e
        public_6eb196c : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, eax
        xor edx, ecx
        and edx, 3
        xor eax, edx
        jmp public_6eb1936
        public_6eb197b : nop
        mov eax, ecx
        pop ebp
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6eb1720)
        ASM_EXPORT_ENTRY_FIRST(0x6eb17ae, public_6eb17ae)
        ASM_EXPORT_ENTRY(0x6eb17b6, public_6eb17b6)
        ASM_EXPORT_ENTRY(0x6eb17bd, public_6eb17bd)
        ASM_EXPORT_ENTRY(0x6eb17cb, public_6eb17cb)
        ASM_EXPORT_ENTRY(0x6eb17d3, public_6eb17d3)
        ASM_EXPORT_ENTRY(0x6eb17e1, public_6eb17e1)
        ASM_EXPORT_ENTRY(0x6eb17ef, public_6eb17ef)
        ASM_EXPORT_ENTRY(0x6eb180c, public_6eb180c)
        ASM_EXPORT_ENTRY(0x6eb1820, public_6eb1820)
        ASM_EXPORT_ENTRY(0x6eb1834, public_6eb1834)
        ASM_EXPORT_ENTRY(0x6eb1841, public_6eb1841)
        ASM_EXPORT_ENTRY(0x6eb189c, public_6eb189c)
        ASM_EXPORT_ENTRY(0x6eb18b7, public_6eb18b7)
        ASM_EXPORT_ENTRY(0x6eb18fa, public_6eb18fa)
        ASM_EXPORT_ENTRY_LAST(0x6eb195e, public_6eb195e)
    }
}

#undef public_6eb1757
#undef public_6eb1783
#undef public_6eb17ae
#undef public_6eb17b6
#undef public_6eb17bd
#undef public_6eb17cb
#undef public_6eb17d3
#undef public_6eb17e1
#undef public_6eb17ef
#undef public_6eb17f5
#undef public_6eb180c
#undef public_6eb1820
#undef public_6eb1834
#undef public_6eb1841
#undef public_6eb184c
#undef public_6eb1852
#undef public_6eb1855
#undef public_6eb185d
#undef public_6eb186e
#undef public_6eb189c
#undef public_6eb18b7
#undef public_6eb18fa
#undef public_6eb1927
#undef public_6eb1936
#undef public_6eb1944
#undef public_6eb195e
#undef public_6eb196c
#undef public_6eb197b

#pragma init_seg(compiler)
extern "C" void const* const public_6eb17ae = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17ae);
extern "C" void const* const public_6eb17b6 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17b6);
extern "C" void const* const public_6eb17bd = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17bd);
extern "C" void const* const public_6eb17cb = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17cb);
extern "C" void const* const public_6eb17d3 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17d3);
extern "C" void const* const public_6eb17e1 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17e1);
extern "C" void const* const public_6eb17ef = __AsmFindLabelExport(&internal_6eb1720, 0x6eb17ef);
extern "C" void const* const public_6eb180c = __AsmFindLabelExport(&internal_6eb1720, 0x6eb180c);
extern "C" void const* const public_6eb1820 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb1820);
extern "C" void const* const public_6eb1834 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb1834);
extern "C" void const* const public_6eb1841 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb1841);
extern "C" void const* const public_6eb189c = __AsmFindLabelExport(&internal_6eb1720, 0x6eb189c);
extern "C" void const* const public_6eb18b7 = __AsmFindLabelExport(&internal_6eb1720, 0x6eb18b7);
extern "C" void const* const public_6eb18fa = __AsmFindLabelExport(&internal_6eb1720, 0x6eb18fa);
extern "C" void const* const public_6eb195e = __AsmFindLabelExport(&internal_6eb1720, 0x6eb195e);
