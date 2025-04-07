#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5647a);
CLANG_FORWARD_PROC_SYMBOL(public_6d56b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d56f0f);

#define public_6d56f50 _public_6d56f50
#define public_6d56fa5 _public_6d56fa5
#define public_6d56fb9 _public_6d56fb9
#define public_6d56fcd _public_6d56fcd
#define public_6d56fec _public_6d56fec
#define public_6d56ffd _public_6d56ffd
#define public_6d5701c _public_6d5701c
#define public_6d5703b _public_6d5703b
#define public_6d57066 _public_6d57066
#define public_6d570ff _public_6d570ff
#define public_6d57106 _public_6d57106

PROC_DECLARE(0x6d56f0f, internal_6d56f0f, public_6d56f0f);
extern "C" NAKED register_t __cdecl internal_6d56f0f()
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
        ja public_6d57066
/*FIXUP jmp dword ptr ds : [eax*4+public_6d57115] @0x6d56f49*/
  JMPTB cmp eax, 0
  JMPTB je public_6d56f50
  JMPTB cmp eax, 1
  JMPTB je public_6d56fa5
  JMPTB cmp eax, 2
  JMPTB je public_6d56fb9
  JMPTB cmp eax, 3
  JMPTB je public_6d56fcd
  JMPTB cmp eax, 4
  JMPTB je public_6d56fec
  JMPTB cmp eax, 5
  JMPTB je public_6d56ffd
  JMPTB cmp eax, 6
  JMPTB je public_6d5701c
  JMPTB cmp eax, 7
  JMPTB je public_6d5703b
  JMPTB int 3
        public_6d56f50 : nop
        fldz 
        fstp dword ptr ss : [ebp-8]
        fldz 
        fstp dword ptr ss : [ebp-0xC]
        fldz 
        fstp dword ptr ss : [ebp-0x10]
        fldz 
        fstp dword ptr ss : [ebp-0x14]
        fldz 
        fstp dword ptr ss : [ebp-0x1C]
        fldz 
        fstp dword ptr ss : [ebp-0x20]
        fldz 
        fstp dword ptr ss : [ebp-0x24]
        fldz 
        fstp dword ptr ss : [ebp-0x28]
        fldz 
        fstp dword ptr ss : [ebp-0x30]
        fldz 
        fstp dword ptr ss : [ebp-0x34]
        fldz 
        fstp dword ptr ss : [ebp-0x38]
        fldz 
        fstp dword ptr ss : [ebp-0x3C]
        fld1 
        fstp dword ptr ss : [ebp-4]
        fld1 
        fstp dword ptr ss : [ebp-0x18]
        fld1 
        fstp dword ptr ss : [ebp-0x2C]
        fld1 
        fstp dword ptr ss : [ebp-0x40]
        jmp public_6d57066
        public_6d56fa5 : nop
        femms 
        push ebx
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d56fb9 : nop
        femms 
        push edi
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d56fcd : nop
        femms 
        push ebx
        push edi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        lea eax, ss:[ebp-0x40]
        push eax
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d56fec : nop
        femms 
        push ecx
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d56ffd : nop
        femms 
        push ebx
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        lea eax, ss:[ebp-0x40]
        push eax
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d5701c : nop
        femms 
        push edi
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        lea eax, ss:[ebp-0x40]
        push eax
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        jmp public_6d57066
        public_6d5703b : nop
        femms 
        push edi
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        push ebx
        lea eax, ss:[ebp-0x40]
        push eax
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        lea eax, ss:[ebp-0x40]
        push eax
        push esi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d5647a
        femms 
        public_6d57066 : nop
        cmp dword ptr ss : [ebp+0x10], esi
        pop edi
        pop esi
        pop ebx
        je public_6d570ff
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
        jmp public_6d57106
        public_6d570ff : nop
        lea eax, ss:[ebp-0x40]
        push eax
        push dword ptr ss : [ebp+0xC]
        public_6d57106 : nop
        push dword ptr ss : [ebp+8]
        call public_6d56b30
        mov eax, dword ptr ss : [ebp+8]
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d56f0f)
        ASM_EXPORT_ENTRY_FIRST(0x6d56f50, public_6d56f50)
        ASM_EXPORT_ENTRY(0x6d56fa5, public_6d56fa5)
        ASM_EXPORT_ENTRY(0x6d56fb9, public_6d56fb9)
        ASM_EXPORT_ENTRY(0x6d56fcd, public_6d56fcd)
        ASM_EXPORT_ENTRY(0x6d56fec, public_6d56fec)
        ASM_EXPORT_ENTRY(0x6d56ffd, public_6d56ffd)
        ASM_EXPORT_ENTRY(0x6d5701c, public_6d5701c)
        ASM_EXPORT_ENTRY_LAST(0x6d5703b, public_6d5703b)
    }
}

#undef public_6d56f50
#undef public_6d56fa5
#undef public_6d56fb9
#undef public_6d56fcd
#undef public_6d56fec
#undef public_6d56ffd
#undef public_6d5701c
#undef public_6d5703b
#undef public_6d57066
#undef public_6d570ff
#undef public_6d57106

#pragma init_seg(compiler)
extern "C" void const* const public_6d56f50 = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56f50);
extern "C" void const* const public_6d56fa5 = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56fa5);
extern "C" void const* const public_6d56fb9 = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56fb9);
extern "C" void const* const public_6d56fcd = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56fcd);
extern "C" void const* const public_6d56fec = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56fec);
extern "C" void const* const public_6d56ffd = __AsmFindLabelExport(&internal_6d56f0f, 0x6d56ffd);
extern "C" void const* const public_6d5701c = __AsmFindLabelExport(&internal_6d56f0f, 0x6d5701c);
extern "C" void const* const public_6d5703b = __AsmFindLabelExport(&internal_6d56f0f, 0x6d5703b);
