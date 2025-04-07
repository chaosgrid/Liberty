#include "FLMaterials-PCH.h"


#define public_66f87b0 _public_66f87b0
#define public_66f87b6 _public_66f87b6
#define public_66f87bc _public_66f87bc
#define public_66f87c5 _public_66f87c5
#define public_66f87ce _public_66f87ce
#define public_66f87d7 _public_66f87d7
#define public_66f87e0 _public_66f87e0
#define public_66f87e9 _public_66f87e9
#define public_66f87f2 _public_66f87f2
#define public_66f87fb _public_66f87fb

PROC_DECLARE(0x66f87a0, internal_66f87a0, public_66f87a0);
extern "C" NAKED register_t __cdecl internal_66f87a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 8
        ja public_66f87fb
/*FIXUP jmp dword ptr ds : [eax*4+public_66f8800] @0x66f87a9*/
  JMPTB cmp eax, 0
  JMPTB je public_66f87b0
  JMPTB cmp eax, 1
  JMPTB je public_66f87b6
  JMPTB cmp eax, 2
  JMPTB je public_66f87bc
  JMPTB cmp eax, 3
  JMPTB je public_66f87c5
  JMPTB cmp eax, 4
  JMPTB je public_66f87ce
  JMPTB cmp eax, 5
  JMPTB je public_66f87d7
  JMPTB cmp eax, 6
  JMPTB je public_66f87e0
  JMPTB cmp eax, 7
  JMPTB je public_66f87e9
  JMPTB cmp eax, 8
  JMPTB je public_66f87f2
  JMPTB int 3
        public_66f87b0 : nop
        lea eax, ds:[ecx+0x74]
        ret 4
        public_66f87b6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_66f87bc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_66f87c5 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_66f87ce : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_66f87d7 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x2C
        ret 4
        public_66f87e0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x48
        ret 4
        public_66f87e9 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x4C
        ret 4
        public_66f87f2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x50
        ret 4
        public_66f87fb : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66f87a0)
        ASM_EXPORT_ENTRY_FIRST(0x66f87b0, public_66f87b0)
        ASM_EXPORT_ENTRY(0x66f87b6, public_66f87b6)
        ASM_EXPORT_ENTRY(0x66f87bc, public_66f87bc)
        ASM_EXPORT_ENTRY(0x66f87c5, public_66f87c5)
        ASM_EXPORT_ENTRY(0x66f87ce, public_66f87ce)
        ASM_EXPORT_ENTRY(0x66f87d7, public_66f87d7)
        ASM_EXPORT_ENTRY(0x66f87e0, public_66f87e0)
        ASM_EXPORT_ENTRY(0x66f87e9, public_66f87e9)
        ASM_EXPORT_ENTRY_LAST(0x66f87f2, public_66f87f2)
    }
}

#undef public_66f87b0
#undef public_66f87b6
#undef public_66f87bc
#undef public_66f87c5
#undef public_66f87ce
#undef public_66f87d7
#undef public_66f87e0
#undef public_66f87e9
#undef public_66f87f2
#undef public_66f87fb

#pragma init_seg(compiler)
extern "C" void const* const public_66f87b0 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87b0);
extern "C" void const* const public_66f87b6 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87b6);
extern "C" void const* const public_66f87bc = __AsmFindLabelExport(&internal_66f87a0, 0x66f87bc);
extern "C" void const* const public_66f87c5 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87c5);
extern "C" void const* const public_66f87ce = __AsmFindLabelExport(&internal_66f87a0, 0x66f87ce);
extern "C" void const* const public_66f87d7 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87d7);
extern "C" void const* const public_66f87e0 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87e0);
extern "C" void const* const public_66f87e9 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87e9);
extern "C" void const* const public_66f87f2 = __AsmFindLabelExport(&internal_66f87a0, 0x66f87f2);
