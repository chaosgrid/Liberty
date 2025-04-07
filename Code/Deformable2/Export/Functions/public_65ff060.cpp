#include "Deformable2-PCH.h"


#define public_65ff0a2 _public_65ff0a2
#define public_65ff0c0 _public_65ff0c0
#define public_65ff0c7 _public_65ff0c7
#define public_65ff0ec _public_65ff0ec
#define public_65ff102 _public_65ff102
#define public_65ff110 _public_65ff110
#define public_65ff116 _public_65ff116
#define public_65ff122 _public_65ff122
#define public_65ff130 _public_65ff130
#define public_65ff150 _public_65ff150
#define public_65ff175 _public_65ff175
#define public_65ff188 _public_65ff188
#define public_65ff19a _public_65ff19a
#define public_65ff1ad _public_65ff1ad
#define public_65ff1b2 _public_65ff1b2
#define public_65ff1bb _public_65ff1bb

PROC_DECLARE(0x65ff060, internal_65ff060, public_65ff060);
extern "C" NAKED register_t __cdecl internal_65ff060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x6C]
        mov ebp, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        jbe public_65ff1bb
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, ebp
        imul edx, 0x4C
        mov edi, dword ptr ds : [edx+eax+0x10]
        mov eax, dword ptr ds : [esi]
        cmp edi, eax
        je public_65ff0c7
        sub eax, 5
        je public_65ff0a2
        dec eax
        je public_65ff0ec
        dec eax
        jne public_65ff0c0
        public_65ff0a2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65ff0c0
        push eax
        push 0
        call dword ptr ds : [public_6601020]
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        public_65ff0c0 : nop
        mov dword ptr ds : [esi+4], 0
        public_65ff0c7 : nop
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [edx+0x70]
        test eax, eax
        je public_65ff1bb
        mov ecx, dword ptr ds : [esi]
        dec ecx
        cmp ecx, 9
        ja public_65ff1b2
/*FIXUP jmp dword ptr ds : [ecx*4+public_65ff1c8] @0x65ff0e5*/
  JMPTB cmp ecx, 0
  JMPTB je public_65ff122
  JMPTB cmp ecx, 1
  JMPTB je public_65ff102
  JMPTB cmp ecx, 2
  JMPTB je public_65ff116
  JMPTB cmp ecx, 3
  JMPTB je public_65ff110
  JMPTB cmp ecx, 4
  JMPTB je public_65ff130
  JMPTB cmp ecx, 5
  JMPTB je public_65ff188
  JMPTB cmp ecx, 6
  JMPTB je public_65ff130
  JMPTB cmp ecx, 7
  JMPTB je public_65ff122
  JMPTB cmp ecx, 8
  JMPTB je public_65ff102
  JMPTB cmp ecx, 9
  JMPTB je public_65ff1ad
  JMPTB int 3
        public_65ff0ec : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_65ff0c0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_65ff0c0
        public_65ff102 : nop
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65ff110 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_65ff116 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        public_65ff122 : nop
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65ff130 : nop
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65ff150
        push eax
        push 0
        call dword ptr ds : [public_6601020]
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        public_65ff150 : nop
        test ebp, ebp
        je public_65ff1b2
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
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_65ff175 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65ff175
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65ff188 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_65ff19a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65ff19a : nop
        test edi, edi
        je public_65ff1b2
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65ff1ad : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], edx
        public_65ff1b2 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65ff1bb : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65ff060)
        ASM_EXPORT_ENTRY_FIRST(0x65ff102, public_65ff102)
        ASM_EXPORT_ENTRY(0x65ff110, public_65ff110)
        ASM_EXPORT_ENTRY(0x65ff116, public_65ff116)
        ASM_EXPORT_ENTRY(0x65ff122, public_65ff122)
        ASM_EXPORT_ENTRY(0x65ff130, public_65ff130)
        ASM_EXPORT_ENTRY(0x65ff188, public_65ff188)
        ASM_EXPORT_ENTRY_LAST(0x65ff1ad, public_65ff1ad)
    }
}

#undef public_65ff0a2
#undef public_65ff0c0
#undef public_65ff0c7
#undef public_65ff0ec
#undef public_65ff102
#undef public_65ff110
#undef public_65ff116
#undef public_65ff122
#undef public_65ff130
#undef public_65ff150
#undef public_65ff175
#undef public_65ff188
#undef public_65ff19a
#undef public_65ff1ad
#undef public_65ff1b2
#undef public_65ff1bb

#pragma init_seg(compiler)
extern "C" void const* const public_65ff102 = __AsmFindLabelExport(&internal_65ff060, 0x65ff102);
extern "C" void const* const public_65ff110 = __AsmFindLabelExport(&internal_65ff060, 0x65ff110);
extern "C" void const* const public_65ff116 = __AsmFindLabelExport(&internal_65ff060, 0x65ff116);
extern "C" void const* const public_65ff122 = __AsmFindLabelExport(&internal_65ff060, 0x65ff122);
extern "C" void const* const public_65ff130 = __AsmFindLabelExport(&internal_65ff060, 0x65ff130);
extern "C" void const* const public_65ff188 = __AsmFindLabelExport(&internal_65ff060, 0x65ff188);
extern "C" void const* const public_65ff1ad = __AsmFindLabelExport(&internal_65ff060, 0x65ff1ad);
