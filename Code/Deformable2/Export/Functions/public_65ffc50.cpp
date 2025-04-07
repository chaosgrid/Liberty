#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe5c0);
CLANG_FORWARD_PROC_SYMBOL(public_65fe620);
CLANG_FORWARD_PROC_SYMBOL(public_65ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_65ffc50);

#define public_65ffc87 _public_65ffc87
#define public_65ffca1 _public_65ffca1
#define public_65ffcaa _public_65ffcaa
#define public_65ffcb5 _public_65ffcb5
#define public_65ffcbb _public_65ffcbb
#define public_65ffcce _public_65ffcce
#define public_65ffcee _public_65ffcee
#define public_65ffd13 _public_65ffd13
#define public_65ffd21 _public_65ffd21
#define public_65ffd25 _public_65ffd25
#define public_65ffd37 _public_65ffd37
#define public_65ffd50 _public_65ffd50
#define public_65ffd64 _public_65ffd64
#define public_65ffd70 _public_65ffd70
#define public_65ffd79 _public_65ffd79
#define public_65ffd82 _public_65ffd82
#define public_65ffd8b _public_65ffd8b
#define public_65ffd96 _public_65ffd96
#define public_65ffd9c _public_65ffd9c
#define public_65ffdaf _public_65ffdaf
#define public_65ffdbd _public_65ffdbd
#define public_65ffdd1 _public_65ffdd1
#define public_65ffddb _public_65ffddb
#define public_65ffddf _public_65ffddf
#define public_65ffdf4 _public_65ffdf4
#define public_65ffdfd _public_65ffdfd

PROC_DECLARE(0x65ffc50, internal_65ffc50, public_65ffc50);
extern "C" NAKED register_t __cdecl internal_65ffc50()
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
        je public_65ffc87
        mov ecx, esi
        call public_65fe5c0
        public_65ffc87 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        push ebp
        mov dword ptr ds : [esi], edi
        ja public_65ffd25
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_65ffe08] @0x65ffc9a*/
  JMPTB cmp eax, 0
  JMPTB je public_65ffca1
  JMPTB cmp eax, 1
  JMPTB je public_65ffcaa
  JMPTB cmp eax, 2
  JMPTB je public_65ffcbb
  JMPTB cmp eax, 3
  JMPTB je public_65ffcb5
  JMPTB cmp eax, 4
  JMPTB je public_65ffcce
  JMPTB cmp eax, 5
  JMPTB je public_65ffd50
  JMPTB cmp eax, 6
  JMPTB je public_65ffcce
  JMPTB cmp eax, 7
  JMPTB je public_65ffd70
  JMPTB cmp eax, 8
  JMPTB je public_65ffca1
  JMPTB cmp eax, 9
  JMPTB je public_65ffd79
  JMPTB int 3
        public_65ffca1 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_65ffd25
        public_65ffcaa : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+4], eax
        jmp public_65ffd25
        public_65ffcb5 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_65ffcbb : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], eax
        jmp public_65ffd25
        public_65ffcce : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [public_6601020]
        je public_65ffcee
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        public_65ffcee : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        je public_65ffd21
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_6601014]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        public_65ffd13 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65ffd13
        mov edi, dword ptr ss : [esp+0x18]
        public_65ffd21 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_65ffd25 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp edi, eax
        lea esi, ds:[ebx+0x24]
        pop ebp
        je public_65ffd37
        mov ecx, esi
        call public_65fe5c0
        public_65ffd37 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [esi], edi
        ja public_65ffddf
        mov ecx, dword ptr ss : [esp+0x2C]
/*FIXUP jmp dword ptr ds : [eax*4+public_65ffe30] @0x65ffd49*/
  JMPTB cmp eax, 0
  JMPTB je public_65ffd82
  JMPTB cmp eax, 1
  JMPTB je public_65ffd8b
  JMPTB cmp eax, 2
  JMPTB je public_65ffd9c
  JMPTB cmp eax, 3
  JMPTB je public_65ffd96
  JMPTB cmp eax, 4
  JMPTB je public_65ffdaf
  JMPTB cmp eax, 5
  JMPTB je public_65ffdbd
  JMPTB cmp eax, 6
  JMPTB je public_65ffdaf
  JMPTB cmp eax, 7
  JMPTB je public_65ffd82
  JMPTB cmp eax, 8
  JMPTB je public_65ffdf4
  JMPTB cmp eax, 9
  JMPTB je public_65ffdfd
  JMPTB int 3
        public_65ffd50 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_65ffd64
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65ffd64 : nop
        test ebx, ebx
        je public_65ffd21
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        jmp public_65ffd21
        public_65ffd70 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_65ffd25
        public_65ffd79 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_65ffd25
        public_65ffd82 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        jmp public_65ffddf
        public_65ffd8b : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], edx
        jmp public_65ffddf
        public_65ffd96 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x10], eax
        public_65ffd9c : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+4], ecx
        jmp public_65ffddf
        public_65ffdaf : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov ecx, esi
        call public_65fe620
        jmp public_65ffddf
        public_65ffdbd : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_65ffdd1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65ffdd1 : nop
        test ebx, ebx
        je public_65ffddb
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_65ffddb : nop
        mov ebx, dword ptr ss : [esp+0xC]
        public_65ffddf : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push edi
        lea ecx, ds:[ebx+0x38]
        call public_65ffab0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x20
        public_65ffdf4 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        jmp public_65ffddf
        public_65ffdfd : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], edx
        jmp public_65ffddf
        UNREACHABLE_TRAP(0x65ffc50)
        ASM_EXPORT_ENTRY_FIRST(0x65ffca1, public_65ffca1)
        ASM_EXPORT_ENTRY(0x65ffcaa, public_65ffcaa)
        ASM_EXPORT_ENTRY(0x65ffcb5, public_65ffcb5)
        ASM_EXPORT_ENTRY(0x65ffcbb, public_65ffcbb)
        ASM_EXPORT_ENTRY(0x65ffcce, public_65ffcce)
        ASM_EXPORT_ENTRY(0x65ffd50, public_65ffd50)
        ASM_EXPORT_ENTRY(0x65ffd70, public_65ffd70)
        ASM_EXPORT_ENTRY(0x65ffd79, public_65ffd79)
        ASM_EXPORT_ENTRY(0x65ffd82, public_65ffd82)
        ASM_EXPORT_ENTRY(0x65ffd8b, public_65ffd8b)
        ASM_EXPORT_ENTRY(0x65ffd96, public_65ffd96)
        ASM_EXPORT_ENTRY(0x65ffd9c, public_65ffd9c)
        ASM_EXPORT_ENTRY(0x65ffdaf, public_65ffdaf)
        ASM_EXPORT_ENTRY(0x65ffdbd, public_65ffdbd)
        ASM_EXPORT_ENTRY(0x65ffdf4, public_65ffdf4)
        ASM_EXPORT_ENTRY_LAST(0x65ffdfd, public_65ffdfd)
    }
}

#undef public_65ffc87
#undef public_65ffca1
#undef public_65ffcaa
#undef public_65ffcb5
#undef public_65ffcbb
#undef public_65ffcce
#undef public_65ffcee
#undef public_65ffd13
#undef public_65ffd21
#undef public_65ffd25
#undef public_65ffd37
#undef public_65ffd50
#undef public_65ffd64
#undef public_65ffd70
#undef public_65ffd79
#undef public_65ffd82
#undef public_65ffd8b
#undef public_65ffd96
#undef public_65ffd9c
#undef public_65ffdaf
#undef public_65ffdbd
#undef public_65ffdd1
#undef public_65ffddb
#undef public_65ffddf
#undef public_65ffdf4
#undef public_65ffdfd

#pragma init_seg(compiler)
extern "C" void const* const public_65ffca1 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffca1);
extern "C" void const* const public_65ffcaa = __AsmFindLabelExport(&internal_65ffc50, 0x65ffcaa);
extern "C" void const* const public_65ffcb5 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffcb5);
extern "C" void const* const public_65ffcbb = __AsmFindLabelExport(&internal_65ffc50, 0x65ffcbb);
extern "C" void const* const public_65ffcce = __AsmFindLabelExport(&internal_65ffc50, 0x65ffcce);
extern "C" void const* const public_65ffd50 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd50);
extern "C" void const* const public_65ffd70 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd70);
extern "C" void const* const public_65ffd79 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd79);
extern "C" void const* const public_65ffd82 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd82);
extern "C" void const* const public_65ffd8b = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd8b);
extern "C" void const* const public_65ffd96 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd96);
extern "C" void const* const public_65ffd9c = __AsmFindLabelExport(&internal_65ffc50, 0x65ffd9c);
extern "C" void const* const public_65ffdaf = __AsmFindLabelExport(&internal_65ffc50, 0x65ffdaf);
extern "C" void const* const public_65ffdbd = __AsmFindLabelExport(&internal_65ffc50, 0x65ffdbd);
extern "C" void const* const public_65ffdf4 = __AsmFindLabelExport(&internal_65ffc50, 0x65ffdf4);
extern "C" void const* const public_65ffdfd = __AsmFindLabelExport(&internal_65ffc50, 0x65ffdfd);
