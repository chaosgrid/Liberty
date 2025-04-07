#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);

#define public_6eb2917 _public_6eb2917
#define public_6eb2930 _public_6eb2930
#define public_6eb2937 _public_6eb2937
#define public_6eb2950 _public_6eb2950
#define public_6eb2966 _public_6eb2966
#define public_6eb2976 _public_6eb2976
#define public_6eb297c _public_6eb297c
#define public_6eb2994 _public_6eb2994
#define public_6eb29aa _public_6eb29aa
#define public_6eb29d0 _public_6eb29d0
#define public_6eb29e1 _public_6eb29e1
#define public_6eb29f5 _public_6eb29f5
#define public_6eb2a06 _public_6eb2a06
#define public_6eb2a14 _public_6eb2a14
#define public_6eb2a22 _public_6eb2a22
#define public_6eb2a29 _public_6eb2a29

PROC_DECLARE(0x6eb28f0, internal_6eb28f0, public_6eb28f0);
extern "C" NAKED register_t __cdecl internal_6eb28f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6ed1020]
        push ebp
        mov ebp, dword ptr ds : [public_6ed101c]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, eax
        je public_6eb2937
        sub eax, 5
        je public_6eb2917
        dec eax
        je public_6eb2950
        dec eax
        jne public_6eb2930
        public_6eb2917 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb2930
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_6eb2930 : nop
        mov dword ptr ds : [esi+4], 0
        public_6eb2937 : nop
        lea ecx, ds:[edi-1]
        cmp ecx, 9
        mov dword ptr ds : [esi], edi
        ja public_6eb2a29
        mov eax, dword ptr ss : [esp+0x18]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6eb2a30] @0x6eb2949*/
  JMPTB cmp ecx, 0
  JMPTB je public_6eb2a22
  JMPTB cmp ecx, 1
  JMPTB je public_6eb2966
  JMPTB cmp ecx, 2
  JMPTB je public_6eb297c
  JMPTB cmp ecx, 3
  JMPTB je public_6eb2976
  JMPTB cmp ecx, 4
  JMPTB je public_6eb2994
  JMPTB cmp ecx, 5
  JMPTB je public_6eb29e1
  JMPTB cmp ecx, 6
  JMPTB je public_6eb2994
  JMPTB cmp ecx, 7
  JMPTB je public_6eb2a06
  JMPTB cmp ecx, 8
  JMPTB je public_6eb2a14
  JMPTB cmp ecx, 9
  JMPTB je public_6eb2a22
  JMPTB int 3
        public_6eb2950 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_6eb2930
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb2930
        public_6eb2966 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb2976 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_6eb297c : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb2994 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb29aa
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        public_6eb29aa : nop
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        je public_6eb2a29
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call ebx
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        nop 
        public_6eb29d0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb29d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb29e1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_6eb29f5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6eb29f5 : nop
        test edi, edi
        je public_6eb2a29
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb2a06 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb2a14 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6eb2a22 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], edx
        public_6eb2a29 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb28f0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb2966, public_6eb2966)
        ASM_EXPORT_ENTRY(0x6eb2976, public_6eb2976)
        ASM_EXPORT_ENTRY(0x6eb297c, public_6eb297c)
        ASM_EXPORT_ENTRY(0x6eb2994, public_6eb2994)
        ASM_EXPORT_ENTRY(0x6eb29e1, public_6eb29e1)
        ASM_EXPORT_ENTRY(0x6eb2a06, public_6eb2a06)
        ASM_EXPORT_ENTRY(0x6eb2a14, public_6eb2a14)
        ASM_EXPORT_ENTRY_LAST(0x6eb2a22, public_6eb2a22)
    }
}

#undef public_6eb2917
#undef public_6eb2930
#undef public_6eb2937
#undef public_6eb2950
#undef public_6eb2966
#undef public_6eb2976
#undef public_6eb297c
#undef public_6eb2994
#undef public_6eb29aa
#undef public_6eb29d0
#undef public_6eb29e1
#undef public_6eb29f5
#undef public_6eb2a06
#undef public_6eb2a14
#undef public_6eb2a22
#undef public_6eb2a29

#pragma init_seg(compiler)
extern "C" void const* const public_6eb2966 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2966);
extern "C" void const* const public_6eb2976 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2976);
extern "C" void const* const public_6eb297c = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb297c);
extern "C" void const* const public_6eb2994 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2994);
extern "C" void const* const public_6eb29e1 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb29e1);
extern "C" void const* const public_6eb2a06 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2a06);
extern "C" void const* const public_6eb2a14 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2a14);
extern "C" void const* const public_6eb2a22 = __AsmFindLabelExport(&internal_6eb28f0, 0x6eb2a22);
