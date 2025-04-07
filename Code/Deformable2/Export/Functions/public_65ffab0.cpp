#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ffab0);

#define public_65ffad7 _public_65ffad7
#define public_65ffaf0 _public_65ffaf0
#define public_65ffaf7 _public_65ffaf7
#define public_65ffb10 _public_65ffb10
#define public_65ffb26 _public_65ffb26
#define public_65ffb36 _public_65ffb36
#define public_65ffb3c _public_65ffb3c
#define public_65ffb54 _public_65ffb54
#define public_65ffb6a _public_65ffb6a
#define public_65ffb90 _public_65ffb90
#define public_65ffba1 _public_65ffba1
#define public_65ffbb5 _public_65ffbb5
#define public_65ffbc6 _public_65ffbc6
#define public_65ffbd4 _public_65ffbd4
#define public_65ffbe2 _public_65ffbe2
#define public_65ffbe9 _public_65ffbe9

PROC_DECLARE(0x65ffab0, internal_65ffab0, public_65ffab0);
extern "C" NAKED register_t __cdecl internal_65ffab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6601020]
        push ebp
        mov ebp, dword ptr ds : [public_6601018]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, eax
        je public_65ffaf7
        sub eax, 5
        je public_65ffad7
        dec eax
        je public_65ffb10
        dec eax
        jne public_65ffaf0
        public_65ffad7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65ffaf0
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_65ffaf0 : nop
        mov dword ptr ds : [esi+4], 0
        public_65ffaf7 : nop
        lea ecx, ds:[edi-1]
        cmp ecx, 9
        mov dword ptr ds : [esi], edi
        ja public_65ffbe9
        mov eax, dword ptr ss : [esp+0x18]
/*FIXUP jmp dword ptr ds : [ecx*4+public_65ffbf0] @0x65ffb09*/
  JMPTB cmp ecx, 0
  JMPTB je public_65ffbe2
  JMPTB cmp ecx, 1
  JMPTB je public_65ffb26
  JMPTB cmp ecx, 2
  JMPTB je public_65ffb3c
  JMPTB cmp ecx, 3
  JMPTB je public_65ffb36
  JMPTB cmp ecx, 4
  JMPTB je public_65ffb54
  JMPTB cmp ecx, 5
  JMPTB je public_65ffba1
  JMPTB cmp ecx, 6
  JMPTB je public_65ffb54
  JMPTB cmp ecx, 7
  JMPTB je public_65ffbc6
  JMPTB cmp ecx, 8
  JMPTB je public_65ffbd4
  JMPTB cmp ecx, 9
  JMPTB je public_65ffbe2
  JMPTB int 3
        public_65ffb10 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_65ffaf0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_65ffaf0
        public_65ffb26 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65ffb36 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_65ffb3c : nop
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
        public_65ffb54 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65ffb6a
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        public_65ffb6a : nop
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        je public_65ffbe9
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call ebx
        push eax
        call dword ptr ds : [public_6601014]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        nop 
        public_65ffb90 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65ffb90
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65ffba1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_65ffbb5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65ffbb5 : nop
        test edi, edi
        je public_65ffbe9
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65ffbc6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65ffbd4 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65ffbe2 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], edx
        public_65ffbe9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65ffab0)
        ASM_EXPORT_ENTRY_FIRST(0x65ffb26, public_65ffb26)
        ASM_EXPORT_ENTRY(0x65ffb36, public_65ffb36)
        ASM_EXPORT_ENTRY(0x65ffb3c, public_65ffb3c)
        ASM_EXPORT_ENTRY(0x65ffb54, public_65ffb54)
        ASM_EXPORT_ENTRY(0x65ffba1, public_65ffba1)
        ASM_EXPORT_ENTRY(0x65ffbc6, public_65ffbc6)
        ASM_EXPORT_ENTRY(0x65ffbd4, public_65ffbd4)
        ASM_EXPORT_ENTRY_LAST(0x65ffbe2, public_65ffbe2)
    }
}

#undef public_65ffad7
#undef public_65ffaf0
#undef public_65ffaf7
#undef public_65ffb10
#undef public_65ffb26
#undef public_65ffb36
#undef public_65ffb3c
#undef public_65ffb54
#undef public_65ffb6a
#undef public_65ffb90
#undef public_65ffba1
#undef public_65ffbb5
#undef public_65ffbc6
#undef public_65ffbd4
#undef public_65ffbe2
#undef public_65ffbe9

#pragma init_seg(compiler)
extern "C" void const* const public_65ffb26 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffb26);
extern "C" void const* const public_65ffb36 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffb36);
extern "C" void const* const public_65ffb3c = __AsmFindLabelExport(&internal_65ffab0, 0x65ffb3c);
extern "C" void const* const public_65ffb54 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffb54);
extern "C" void const* const public_65ffba1 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffba1);
extern "C" void const* const public_65ffbc6 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffbc6);
extern "C" void const* const public_65ffbd4 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffbd4);
extern "C" void const* const public_65ffbe2 = __AsmFindLabelExport(&internal_65ffab0, 0x65ffbe2);
