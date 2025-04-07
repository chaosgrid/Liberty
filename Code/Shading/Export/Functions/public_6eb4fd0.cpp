#include "Shading-PCH.h"


#define public_6eb4fe0 _public_6eb4fe0
#define public_6eb4fe6 _public_6eb4fe6
#define public_6eb4fec _public_6eb4fec
#define public_6eb4ff2 _public_6eb4ff2
#define public_6eb4ff8 _public_6eb4ff8
#define public_6eb4ffe _public_6eb4ffe
#define public_6eb5004 _public_6eb5004
#define public_6eb500a _public_6eb500a
#define public_6eb5013 _public_6eb5013
#define public_6eb501c _public_6eb501c
#define public_6eb5025 _public_6eb5025
#define public_6eb502e _public_6eb502e
#define public_6eb5037 _public_6eb5037
#define public_6eb5040 _public_6eb5040
#define public_6eb5049 _public_6eb5049

PROC_DECLARE(0x6eb4fd0, internal_6eb4fd0, public_6eb4fd0);
extern "C" NAKED register_t __cdecl internal_6eb4fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xD
        ja public_6eb5049
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb5050] @0x6eb4fd9*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb4fe0
  JMPTB cmp eax, 1
  JMPTB je public_6eb4fe6
  JMPTB cmp eax, 2
  JMPTB je public_6eb4fec
  JMPTB cmp eax, 3
  JMPTB je public_6eb4ff2
  JMPTB cmp eax, 4
  JMPTB je public_6eb4ff8
  JMPTB cmp eax, 5
  JMPTB je public_6eb4ffe
  JMPTB cmp eax, 6
  JMPTB je public_6eb5004
  JMPTB cmp eax, 7
  JMPTB je public_6eb500a
  JMPTB cmp eax, 8
  JMPTB je public_6eb5013
  JMPTB cmp eax, 9
  JMPTB je public_6eb501c
  JMPTB cmp eax, 0xA
  JMPTB je public_6eb5025
  JMPTB cmp eax, 0xB
  JMPTB je public_6eb502e
  JMPTB cmp eax, 0xC
  JMPTB je public_6eb5037
  JMPTB cmp eax, 0xD
  JMPTB je public_6eb5040
  JMPTB int 3
        public_6eb4fe0 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_6eb4fe6 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6eb4fec : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_6eb4ff2 : nop
        lea eax, ds:[ecx+0x40]
        ret 4
        public_6eb4ff8 : nop
        lea eax, ds:[ecx+0x60]
        ret 4
        public_6eb4ffe : nop
        lea eax, ds:[ecx+0x2C]
        ret 4
        public_6eb5004 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6eb500a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6eb5013 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6eb501c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6eb5025 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x2C
        ret 4
        public_6eb502e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x48
        ret 4
        public_6eb5037 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x4C
        ret 4
        public_6eb5040 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x50
        ret 4
        public_6eb5049 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb4fd0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb4fe0, public_6eb4fe0)
        ASM_EXPORT_ENTRY(0x6eb4fe6, public_6eb4fe6)
        ASM_EXPORT_ENTRY(0x6eb4fec, public_6eb4fec)
        ASM_EXPORT_ENTRY(0x6eb4ff2, public_6eb4ff2)
        ASM_EXPORT_ENTRY(0x6eb4ff8, public_6eb4ff8)
        ASM_EXPORT_ENTRY(0x6eb4ffe, public_6eb4ffe)
        ASM_EXPORT_ENTRY(0x6eb5004, public_6eb5004)
        ASM_EXPORT_ENTRY(0x6eb500a, public_6eb500a)
        ASM_EXPORT_ENTRY(0x6eb5013, public_6eb5013)
        ASM_EXPORT_ENTRY(0x6eb501c, public_6eb501c)
        ASM_EXPORT_ENTRY(0x6eb5025, public_6eb5025)
        ASM_EXPORT_ENTRY(0x6eb502e, public_6eb502e)
        ASM_EXPORT_ENTRY(0x6eb5037, public_6eb5037)
        ASM_EXPORT_ENTRY_LAST(0x6eb5040, public_6eb5040)
    }
}

#undef public_6eb4fe0
#undef public_6eb4fe6
#undef public_6eb4fec
#undef public_6eb4ff2
#undef public_6eb4ff8
#undef public_6eb4ffe
#undef public_6eb5004
#undef public_6eb500a
#undef public_6eb5013
#undef public_6eb501c
#undef public_6eb5025
#undef public_6eb502e
#undef public_6eb5037
#undef public_6eb5040
#undef public_6eb5049

#pragma init_seg(compiler)
extern "C" void const* const public_6eb4fe0 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4fe0);
extern "C" void const* const public_6eb4fe6 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4fe6);
extern "C" void const* const public_6eb4fec = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4fec);
extern "C" void const* const public_6eb4ff2 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4ff2);
extern "C" void const* const public_6eb4ff8 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4ff8);
extern "C" void const* const public_6eb4ffe = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb4ffe);
extern "C" void const* const public_6eb5004 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb5004);
extern "C" void const* const public_6eb500a = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb500a);
extern "C" void const* const public_6eb5013 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb5013);
extern "C" void const* const public_6eb501c = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb501c);
extern "C" void const* const public_6eb5025 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb5025);
extern "C" void const* const public_6eb502e = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb502e);
extern "C" void const* const public_6eb5037 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb5037);
extern "C" void const* const public_6eb5040 = __AsmFindLabelExport(&internal_6eb4fd0, 0x6eb5040);
