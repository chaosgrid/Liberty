#include "Shading-PCH.h"


#define public_6ebd780 _public_6ebd780
#define public_6ebd786 _public_6ebd786
#define public_6ebd78c _public_6ebd78c
#define public_6ebd792 _public_6ebd792
#define public_6ebd798 _public_6ebd798
#define public_6ebd79e _public_6ebd79e
#define public_6ebd7a4 _public_6ebd7a4
#define public_6ebd7aa _public_6ebd7aa
#define public_6ebd7b3 _public_6ebd7b3
#define public_6ebd7bc _public_6ebd7bc
#define public_6ebd7c5 _public_6ebd7c5

PROC_DECLARE(0x6ebd770, internal_6ebd770, public_6ebd770);
extern "C" NAKED register_t __cdecl internal_6ebd770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 9
        ja public_6ebd7c5
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebd7cc] @0x6ebd779*/
  JMPTB cmp eax, 0
  JMPTB je public_6ebd780
  JMPTB cmp eax, 1
  JMPTB je public_6ebd786
  JMPTB cmp eax, 2
  JMPTB je public_6ebd78c
  JMPTB cmp eax, 3
  JMPTB je public_6ebd792
  JMPTB cmp eax, 4
  JMPTB je public_6ebd798
  JMPTB cmp eax, 5
  JMPTB je public_6ebd79e
  JMPTB cmp eax, 6
  JMPTB je public_6ebd7a4
  JMPTB cmp eax, 7
  JMPTB je public_6ebd7aa
  JMPTB cmp eax, 8
  JMPTB je public_6ebd7b3
  JMPTB cmp eax, 9
  JMPTB je public_6ebd7bc
  JMPTB int 3
        public_6ebd780 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_6ebd786 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6ebd78c : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_6ebd792 : nop
        lea eax, ds:[ecx+0x40]
        ret 4
        public_6ebd798 : nop
        lea eax, ds:[ecx+0x60]
        ret 4
        public_6ebd79e : nop
        lea eax, ds:[ecx+0x2C]
        ret 4
        public_6ebd7a4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6ebd7aa : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6ebd7b3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6ebd7bc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6ebd7c5 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ebd770)
        ASM_EXPORT_ENTRY_FIRST(0x6ebd780, public_6ebd780)
        ASM_EXPORT_ENTRY(0x6ebd786, public_6ebd786)
        ASM_EXPORT_ENTRY(0x6ebd78c, public_6ebd78c)
        ASM_EXPORT_ENTRY(0x6ebd792, public_6ebd792)
        ASM_EXPORT_ENTRY(0x6ebd798, public_6ebd798)
        ASM_EXPORT_ENTRY(0x6ebd79e, public_6ebd79e)
        ASM_EXPORT_ENTRY(0x6ebd7a4, public_6ebd7a4)
        ASM_EXPORT_ENTRY(0x6ebd7aa, public_6ebd7aa)
        ASM_EXPORT_ENTRY(0x6ebd7b3, public_6ebd7b3)
        ASM_EXPORT_ENTRY_LAST(0x6ebd7bc, public_6ebd7bc)
    }
}

#undef public_6ebd780
#undef public_6ebd786
#undef public_6ebd78c
#undef public_6ebd792
#undef public_6ebd798
#undef public_6ebd79e
#undef public_6ebd7a4
#undef public_6ebd7aa
#undef public_6ebd7b3
#undef public_6ebd7bc
#undef public_6ebd7c5

#pragma init_seg(compiler)
extern "C" void const* const public_6ebd780 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd780);
extern "C" void const* const public_6ebd786 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd786);
extern "C" void const* const public_6ebd78c = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd78c);
extern "C" void const* const public_6ebd792 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd792);
extern "C" void const* const public_6ebd798 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd798);
extern "C" void const* const public_6ebd79e = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd79e);
extern "C" void const* const public_6ebd7a4 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd7a4);
extern "C" void const* const public_6ebd7aa = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd7aa);
extern "C" void const* const public_6ebd7b3 = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd7b3);
extern "C" void const* const public_6ebd7bc = __AsmFindLabelExport(&internal_6ebd770, 0x6ebd7bc);
