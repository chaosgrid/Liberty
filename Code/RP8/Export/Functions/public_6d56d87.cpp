#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d56b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d56d87);

#define public_6d56dc9 _public_6d56dc9
#define public_6d56e1b _public_6d56e1b
#define public_6d56e1f _public_6d56e1f
#define public_6d56e23 _public_6d56e23
#define public_6d56e34 _public_6d56e34
#define public_6d56e38 _public_6d56e38
#define public_6d56e49 _public_6d56e49
#define public_6d56e5a _public_6d56e5a
#define public_6d56e77 _public_6d56e77
#define public_6d56ee8 _public_6d56ee8

PROC_DECLARE(0x6d56d87, internal_6d56d87, public_6d56d87);
extern "C" NAKED register_t __cdecl internal_6d56d87()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov ecx, dword ptr ss : [ebp+0x1C]
        xor eax, eax
        test ecx, ecx
        setne al
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        xor edx, edx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        shl eax, 1
        test edi, edi
        setne dl
        lea esi, ss:[ebp-0x40]
        or eax, edx
        xor edx, edx
        shl eax, 1
        test ebx, ebx
        setne dl
        or eax, edx
        cmp eax, 7
        ja public_6d56e77
/*FIXUP jmp dword ptr ds : [eax*4+public_6d56eef] @0x6d56dc2*/
  JMPTB cmp eax, 0
  JMPTB je public_6d56dc9
  JMPTB cmp eax, 1
  JMPTB je public_6d56e1b
  JMPTB cmp eax, 2
  JMPTB je public_6d56e1f
  JMPTB cmp eax, 3
  JMPTB je public_6d56e23
  JMPTB cmp eax, 4
  JMPTB je public_6d56e34
  JMPTB cmp eax, 5
  JMPTB je public_6d56e38
  JMPTB cmp eax, 6
  JMPTB je public_6d56e49
  JMPTB cmp eax, 7
  JMPTB je public_6d56e5a
  JMPTB int 3
        public_6d56dc9 : nop
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
        jmp public_6d56e77
        public_6d56e1b : nop
        mov esi, ebx
        jmp public_6d56e77
        public_6d56e1f : nop
        mov esi, edi
        jmp public_6d56e77
        public_6d56e23 : nop
        femms 
        push ebx
        push edi
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        femms 
        jmp public_6d56e77
        public_6d56e34 : nop
        mov esi, ecx
        jmp public_6d56e77
        public_6d56e38 : nop
        femms 
        push ebx
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        femms 
        jmp public_6d56e77
        public_6d56e49 : nop
        femms 
        push edi
        push ecx
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6d56bbb
        femms 
        jmp public_6d56e77
        public_6d56e5a : nop
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
        femms 
        public_6d56e77 : nop
        push esi
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d56b30
        cmp dword ptr ss : [ebp+0x10], 0
        pop edi
        pop esi
        pop ebx
        je public_6d56ee8
        femms 
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x10]
        movq mm0, qword ptr ds : [eax]
        movd mm1, dword ptr ds : [eax+8]
        movq mm2, qword ptr ds : [ecx]
        pxor mm0, mmword ptr ds : [public_6d61460]
        movq mm3, qword ptr ds : [ecx+8]
        movq mm4, qword ptr ds : [ecx+0x10]
        pi2fd mm2, mm2
        pi2fd mm3, mm3
        pfadd mm0, mmword ptr ds : [public_6d61468]
        pfmul mm3, mmword ptr ds : [public_6d61470]
        movq mm5, mm4
        punpckhdq mm5, mm5
        pfsub mm5, mm4
        pfmul mm0, mm3
        pfmul mm1, mm5
        pfadd mm1, mm4
        pfadd mm0, mm2
        movq qword ptr ds : [eax], mm0
        movd dword ptr ds : [eax+8], mm1
        femms 
        public_6d56ee8 : nop
        mov eax, dword ptr ss : [ebp+8]
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d56d87)
        ASM_EXPORT_ENTRY_FIRST(0x6d56dc9, public_6d56dc9)
        ASM_EXPORT_ENTRY(0x6d56e1b, public_6d56e1b)
        ASM_EXPORT_ENTRY(0x6d56e1f, public_6d56e1f)
        ASM_EXPORT_ENTRY(0x6d56e23, public_6d56e23)
        ASM_EXPORT_ENTRY(0x6d56e34, public_6d56e34)
        ASM_EXPORT_ENTRY(0x6d56e38, public_6d56e38)
        ASM_EXPORT_ENTRY(0x6d56e49, public_6d56e49)
        ASM_EXPORT_ENTRY_LAST(0x6d56e5a, public_6d56e5a)
    }
}

#undef public_6d56dc9
#undef public_6d56e1b
#undef public_6d56e1f
#undef public_6d56e23
#undef public_6d56e34
#undef public_6d56e38
#undef public_6d56e49
#undef public_6d56e5a
#undef public_6d56e77
#undef public_6d56ee8

#pragma init_seg(compiler)
extern "C" void const* const public_6d56dc9 = __AsmFindLabelExport(&internal_6d56d87, 0x6d56dc9);
extern "C" void const* const public_6d56e1b = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e1b);
extern "C" void const* const public_6d56e1f = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e1f);
extern "C" void const* const public_6d56e23 = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e23);
extern "C" void const* const public_6d56e34 = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e34);
extern "C" void const* const public_6d56e38 = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e38);
extern "C" void const* const public_6d56e49 = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e49);
extern "C" void const* const public_6d56e5a = __AsmFindLabelExport(&internal_6d56d87, 0x6d56e5a);
