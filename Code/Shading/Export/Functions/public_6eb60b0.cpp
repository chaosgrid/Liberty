#include "Shading-PCH.h"


#define public_6eb60c0 _public_6eb60c0
#define public_6eb60c6 _public_6eb60c6
#define public_6eb60cc _public_6eb60cc
#define public_6eb60d5 _public_6eb60d5
#define public_6eb60de _public_6eb60de
#define public_6eb60e7 _public_6eb60e7
#define public_6eb60f0 _public_6eb60f0
#define public_6eb60f9 _public_6eb60f9
#define public_6eb6102 _public_6eb6102
#define public_6eb610b _public_6eb610b

PROC_DECLARE(0x6eb60b0, internal_6eb60b0, public_6eb60b0);
extern "C" NAKED register_t __cdecl internal_6eb60b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 8
        ja public_6eb610b
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb6110] @0x6eb60b9*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb60c0
  JMPTB cmp eax, 1
  JMPTB je public_6eb60c6
  JMPTB cmp eax, 2
  JMPTB je public_6eb60cc
  JMPTB cmp eax, 3
  JMPTB je public_6eb60d5
  JMPTB cmp eax, 4
  JMPTB je public_6eb60de
  JMPTB cmp eax, 5
  JMPTB je public_6eb60e7
  JMPTB cmp eax, 6
  JMPTB je public_6eb60f0
  JMPTB cmp eax, 7
  JMPTB je public_6eb60f9
  JMPTB cmp eax, 8
  JMPTB je public_6eb6102
  JMPTB int 3
        public_6eb60c0 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6eb60c6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6eb60cc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6eb60d5 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6eb60de : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6eb60e7 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x2C
        ret 4
        public_6eb60f0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x48
        ret 4
        public_6eb60f9 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x4C
        ret 4
        public_6eb6102 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x50
        ret 4
        public_6eb610b : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb60b0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb60c0, public_6eb60c0)
        ASM_EXPORT_ENTRY(0x6eb60c6, public_6eb60c6)
        ASM_EXPORT_ENTRY(0x6eb60cc, public_6eb60cc)
        ASM_EXPORT_ENTRY(0x6eb60d5, public_6eb60d5)
        ASM_EXPORT_ENTRY(0x6eb60de, public_6eb60de)
        ASM_EXPORT_ENTRY(0x6eb60e7, public_6eb60e7)
        ASM_EXPORT_ENTRY(0x6eb60f0, public_6eb60f0)
        ASM_EXPORT_ENTRY(0x6eb60f9, public_6eb60f9)
        ASM_EXPORT_ENTRY_LAST(0x6eb6102, public_6eb6102)
    }
}

#undef public_6eb60c0
#undef public_6eb60c6
#undef public_6eb60cc
#undef public_6eb60d5
#undef public_6eb60de
#undef public_6eb60e7
#undef public_6eb60f0
#undef public_6eb60f9
#undef public_6eb6102
#undef public_6eb610b

#pragma init_seg(compiler)
extern "C" void const* const public_6eb60c0 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60c0);
extern "C" void const* const public_6eb60c6 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60c6);
extern "C" void const* const public_6eb60cc = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60cc);
extern "C" void const* const public_6eb60d5 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60d5);
extern "C" void const* const public_6eb60de = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60de);
extern "C" void const* const public_6eb60e7 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60e7);
extern "C" void const* const public_6eb60f0 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60f0);
extern "C" void const* const public_6eb60f9 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb60f9);
extern "C" void const* const public_6eb6102 = __AsmFindLabelExport(&internal_6eb60b0, 0x6eb6102);
