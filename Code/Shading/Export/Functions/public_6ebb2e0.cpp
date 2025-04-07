#include "Shading-PCH.h"


#define public_6ebb2f4 _public_6ebb2f4
#define public_6ebb2fa _public_6ebb2fa
#define public_6ebb300 _public_6ebb300
#define public_6ebb306 _public_6ebb306
#define public_6ebb30f _public_6ebb30f
#define public_6ebb318 _public_6ebb318
#define public_6ebb321 _public_6ebb321
#define public_6ebb327 _public_6ebb327
#define public_6ebb32d _public_6ebb32d
#define public_6ebb336 _public_6ebb336
#define public_6ebb33f _public_6ebb33f
#define public_6ebb348 _public_6ebb348
#define public_6ebb351 _public_6ebb351
#define public_6ebb357 _public_6ebb357
#define public_6ebb360 _public_6ebb360
#define public_6ebb369 _public_6ebb369
#define public_6ebb372 _public_6ebb372
#define public_6ebb37b _public_6ebb37b
#define public_6ebb381 _public_6ebb381

PROC_DECLARE(0x6ebb2e0, internal_6ebb2e0, public_6ebb2e0);
extern "C" NAKED register_t __cdecl internal_6ebb2e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x11
        ja public_6ebb381
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebb388] @0x6ebb2ed*/
  JMPTB cmp eax, 0
  JMPTB je public_6ebb2f4
  JMPTB cmp eax, 1
  JMPTB je public_6ebb2fa
  JMPTB cmp eax, 2
  JMPTB je public_6ebb300
  JMPTB cmp eax, 3
  JMPTB je public_6ebb306
  JMPTB cmp eax, 4
  JMPTB je public_6ebb30f
  JMPTB cmp eax, 5
  JMPTB je public_6ebb318
  JMPTB cmp eax, 6
  JMPTB je public_6ebb321
  JMPTB cmp eax, 7
  JMPTB je public_6ebb327
  JMPTB cmp eax, 8
  JMPTB je public_6ebb32d
  JMPTB cmp eax, 9
  JMPTB je public_6ebb336
  JMPTB cmp eax, 0xA
  JMPTB je public_6ebb33f
  JMPTB cmp eax, 0xB
  JMPTB je public_6ebb348
  JMPTB cmp eax, 0xC
  JMPTB je public_6ebb351
  JMPTB cmp eax, 0xD
  JMPTB je public_6ebb357
  JMPTB cmp eax, 0xE
  JMPTB je public_6ebb360
  JMPTB cmp eax, 0xF
  JMPTB je public_6ebb369
  JMPTB cmp eax, 0x10
  JMPTB je public_6ebb372
  JMPTB cmp eax, 0x11
  JMPTB je public_6ebb37b
  JMPTB int 3
        public_6ebb2f4 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_6ebb2fa : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6ebb300 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6ebb306 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6ebb30f : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6ebb318 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6ebb321 : nop
        lea eax, ds:[ecx+0x70]
        ret 4
        public_6ebb327 : nop
        lea eax, ds:[ecx+0x74]
        ret 4
        public_6ebb32d : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x2C
        ret 4
        public_6ebb336 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x48
        ret 4
        public_6ebb33f : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x4C
        ret 4
        public_6ebb348 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x50
        ret 4
        public_6ebb351 : nop
        lea eax, ds:[ecx+0x68]
        ret 4
        public_6ebb357 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x58
        ret 4
        public_6ebb360 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x74
        ret 4
        public_6ebb369 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x78
        ret 4
        public_6ebb372 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x7C
        ret 4
        public_6ebb37b : nop
        lea eax, ds:[ecx+0x6C]
        ret 4
        public_6ebb381 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ebb2e0)
        ASM_EXPORT_ENTRY_FIRST(0x6ebb2f4, public_6ebb2f4)
        ASM_EXPORT_ENTRY(0x6ebb2fa, public_6ebb2fa)
        ASM_EXPORT_ENTRY(0x6ebb300, public_6ebb300)
        ASM_EXPORT_ENTRY(0x6ebb306, public_6ebb306)
        ASM_EXPORT_ENTRY(0x6ebb30f, public_6ebb30f)
        ASM_EXPORT_ENTRY(0x6ebb318, public_6ebb318)
        ASM_EXPORT_ENTRY(0x6ebb321, public_6ebb321)
        ASM_EXPORT_ENTRY(0x6ebb327, public_6ebb327)
        ASM_EXPORT_ENTRY(0x6ebb32d, public_6ebb32d)
        ASM_EXPORT_ENTRY(0x6ebb336, public_6ebb336)
        ASM_EXPORT_ENTRY(0x6ebb33f, public_6ebb33f)
        ASM_EXPORT_ENTRY(0x6ebb348, public_6ebb348)
        ASM_EXPORT_ENTRY(0x6ebb351, public_6ebb351)
        ASM_EXPORT_ENTRY(0x6ebb357, public_6ebb357)
        ASM_EXPORT_ENTRY(0x6ebb360, public_6ebb360)
        ASM_EXPORT_ENTRY(0x6ebb369, public_6ebb369)
        ASM_EXPORT_ENTRY(0x6ebb372, public_6ebb372)
        ASM_EXPORT_ENTRY_LAST(0x6ebb37b, public_6ebb37b)
    }
}

#undef public_6ebb2f4
#undef public_6ebb2fa
#undef public_6ebb300
#undef public_6ebb306
#undef public_6ebb30f
#undef public_6ebb318
#undef public_6ebb321
#undef public_6ebb327
#undef public_6ebb32d
#undef public_6ebb336
#undef public_6ebb33f
#undef public_6ebb348
#undef public_6ebb351
#undef public_6ebb357
#undef public_6ebb360
#undef public_6ebb369
#undef public_6ebb372
#undef public_6ebb37b
#undef public_6ebb381

#pragma init_seg(compiler)
extern "C" void const* const public_6ebb2f4 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb2f4);
extern "C" void const* const public_6ebb2fa = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb2fa);
extern "C" void const* const public_6ebb300 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb300);
extern "C" void const* const public_6ebb306 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb306);
extern "C" void const* const public_6ebb30f = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb30f);
extern "C" void const* const public_6ebb318 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb318);
extern "C" void const* const public_6ebb321 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb321);
extern "C" void const* const public_6ebb327 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb327);
extern "C" void const* const public_6ebb32d = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb32d);
extern "C" void const* const public_6ebb336 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb336);
extern "C" void const* const public_6ebb33f = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb33f);
extern "C" void const* const public_6ebb348 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb348);
extern "C" void const* const public_6ebb351 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb351);
extern "C" void const* const public_6ebb357 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb357);
extern "C" void const* const public_6ebb360 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb360);
extern "C" void const* const public_6ebb369 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb369);
extern "C" void const* const public_6ebb372 = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb372);
extern "C" void const* const public_6ebb37b = __AsmFindLabelExport(&internal_6ebb2e0, 0x6ebb37b);
