#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53102);
CLANG_FORWARD_PROC_SYMBOL(public_6d55da0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d57135);

#define public_6d57172 _public_6d57172
#define public_6d5717e _public_6d5717e
#define public_6d57181 _public_6d57181
#define public_6d57184 _public_6d57184
#define public_6d57188 _public_6d57188
#define public_6d5718b _public_6d5718b
#define public_6d5718e _public_6d5718e
#define public_6d5718f _public_6d5718f
#define public_6d57192 _public_6d57192
#define public_6d571a2 _public_6d571a2
#define public_6d571af _public_6d571af
#define public_6d571b9 _public_6d571b9
#define public_6d57252 _public_6d57252
#define public_6d57259 _public_6d57259

PROC_DECLARE(0x6d57135, internal_6d57135, public_6d57135);
extern "C" NAKED register_t __cdecl internal_6d57135()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov ecx, dword ptr ss : [ebp+0x1C]
        xor eax, eax
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        xor esi, esi
        cmp ecx, esi
        setne al
        xor edx, edx
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        shl eax, 1
        cmp edi, esi
        setne dl
        or eax, edx
        xor edx, edx
        shl eax, 1
        cmp ebx, esi
        setne dl
        or eax, edx
        cmp eax, 7
        ja public_6d571b9
/*FIXUP jmp dword ptr ds : [eax*4+public_6d57268] @0x6d5716b*/
  JMPTB cmp eax, 0
  JMPTB je public_6d57172
  JMPTB cmp eax, 1
  JMPTB je public_6d5717e
  JMPTB cmp eax, 2
  JMPTB je public_6d57181
  JMPTB cmp eax, 3
  JMPTB je public_6d57184
  JMPTB cmp eax, 4
  JMPTB je public_6d57188
  JMPTB cmp eax, 5
  JMPTB je public_6d5718b
  JMPTB cmp eax, 6
  JMPTB je public_6d5718e
  JMPTB cmp eax, 7
  JMPTB je public_6d57192
  JMPTB int 3
        public_6d57172 : nop
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d53102
        pop ecx
        jmp public_6d571b9
        public_6d5717e : nop
        push ebx
        jmp public_6d571af
        public_6d57181 : nop
        push edi
        jmp public_6d571af
        public_6d57184 : nop
        push ebx
        push edi
        jmp public_6d571a2
        public_6d57188 : nop
        push ecx
        jmp public_6d571af
        public_6d5718b : nop
        push ebx
        jmp public_6d5718f
        public_6d5718e : nop
        push edi
        public_6d5718f : nop
        push ecx
        jmp public_6d571a2
        public_6d57192 : nop
        push edi
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        push ebx
        lea eax, ss:[ebp-0x40]
        push eax
        public_6d571a2 : nop
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        lea eax, ss:[ebp-0x40]
        push eax
        public_6d571af : nop
        lea eax, ss:[ebp-0x40]
        push esi
        push eax
        call public_6d55da0
        public_6d571b9 : nop
        cmp dword ptr ss : [ebp+0x10], esi
        pop edi
        pop esi
        pop ebx
        je public_6d57252
        femms 
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        movq mm1, qword ptr ds : [eax]
        movq mm2, qword ptr ds : [eax+8]
        movq mm0, qword ptr ds : [ecx]
        pi2fd mm1, mm1
        movq mm4, qword ptr ds : [eax+0x10]
        pi2fd mm2, mm2
        movq mm3, mm2
        punpckhdq mm3, mm3
        pfrcp mm5, mm2
        pfrcp mm3, mm3
        pfsub mm0, mm1
        punpckldq mm5, mm3
        pfrcpit1 mm2, mm5
        movd mm3, dword ptr ds : [ecx+8]
        pfrcpit2 mm2, mm5
        pfmul mm2, mmword ptr ds : [public_6d61478]
        movq mm5, mm4
        pfmul mm0, mm2
        punpckhdq mm5, mm5
        pfsub mm0, mmword ptr ds : [public_6d61468]
        pfsub mm5, mm4
        pfrcp mm6, mm5
        pxor mm0, mmword ptr ds : [public_6d61460]
        pfrcpit1 mm5, mm6
        pfrcpit2 mm5, mm6
        pfsub mm3, mm4
        pfmul mm3, mm5
        movq qword ptr ds : [edx], mm0
        movd dword ptr ds : [edx+8], mm3
        femms 
        lea eax, ss:[ebp-0x40]
        push eax
        push dword ptr ss : [ebp+8]
        jmp public_6d57259
        public_6d57252 : nop
        lea eax, ss:[ebp-0x40]
        push eax
        push dword ptr ss : [ebp+0xC]
        public_6d57259 : nop
        push dword ptr ss : [ebp+8]
        call public_6d56b30
        mov eax, dword ptr ss : [ebp+8]
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d57135)
        ASM_EXPORT_ENTRY_FIRST(0x6d57172, public_6d57172)
        ASM_EXPORT_ENTRY(0x6d5717e, public_6d5717e)
        ASM_EXPORT_ENTRY(0x6d57181, public_6d57181)
        ASM_EXPORT_ENTRY(0x6d57184, public_6d57184)
        ASM_EXPORT_ENTRY(0x6d57188, public_6d57188)
        ASM_EXPORT_ENTRY(0x6d5718b, public_6d5718b)
        ASM_EXPORT_ENTRY(0x6d5718e, public_6d5718e)
        ASM_EXPORT_ENTRY_LAST(0x6d57192, public_6d57192)
    }
}

#undef public_6d57172
#undef public_6d5717e
#undef public_6d57181
#undef public_6d57184
#undef public_6d57188
#undef public_6d5718b
#undef public_6d5718e
#undef public_6d5718f
#undef public_6d57192
#undef public_6d571a2
#undef public_6d571af
#undef public_6d571b9
#undef public_6d57252
#undef public_6d57259

#pragma init_seg(compiler)
extern "C" void const* const public_6d57172 = __AsmFindLabelExport(&internal_6d57135, 0x6d57172);
extern "C" void const* const public_6d5717e = __AsmFindLabelExport(&internal_6d57135, 0x6d5717e);
extern "C" void const* const public_6d57181 = __AsmFindLabelExport(&internal_6d57135, 0x6d57181);
extern "C" void const* const public_6d57184 = __AsmFindLabelExport(&internal_6d57135, 0x6d57184);
extern "C" void const* const public_6d57188 = __AsmFindLabelExport(&internal_6d57135, 0x6d57188);
extern "C" void const* const public_6d5718b = __AsmFindLabelExport(&internal_6d57135, 0x6d5718b);
extern "C" void const* const public_6d5718e = __AsmFindLabelExport(&internal_6d57135, 0x6d5718e);
extern "C" void const* const public_6d57192 = __AsmFindLabelExport(&internal_6d57135, 0x6d57192);
