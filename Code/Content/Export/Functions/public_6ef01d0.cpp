#include "Content-PCH.h"


#define public_6ef01e0 _public_6ef01e0
#define public_6ef01e8 _public_6ef01e8
#define public_6ef01f0 _public_6ef01f0
#define public_6ef01f8 _public_6ef01f8
#define public_6ef0200 _public_6ef0200
#define public_6ef0208 _public_6ef0208
#define public_6ef0210 _public_6ef0210
#define public_6ef0218 _public_6ef0218
#define public_6ef0220 _public_6ef0220
#define public_6ef0228 _public_6ef0228
#define public_6ef0230 _public_6ef0230
#define public_6ef0238 _public_6ef0238
#define public_6ef0240 _public_6ef0240
#define public_6ef0248 _public_6ef0248
#define public_6ef0250 _public_6ef0250

PROC_DECLARE(0x6ef01d0, internal_6ef01d0, public_6ef01d0);
extern "C" NAKED register_t __cdecl internal_6ef01d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        ja public_6ef0250
/*FIXUP jmp dword ptr ds : [eax*4+public_6ef0258] @0x6ef01d9*/
  JMPTB cmp eax, 0
  JMPTB je public_6ef01e0
  JMPTB cmp eax, 1
  JMPTB je public_6ef01e8
  JMPTB cmp eax, 2
  JMPTB je public_6ef01f0
  JMPTB cmp eax, 3
  JMPTB je public_6ef01f8
  JMPTB cmp eax, 4
  JMPTB je public_6ef0200
  JMPTB cmp eax, 5
  JMPTB je public_6ef0208
  JMPTB cmp eax, 6
  JMPTB je public_6ef0210
  JMPTB cmp eax, 7
  JMPTB je public_6ef0220
  JMPTB cmp eax, 8
  JMPTB je public_6ef0218
  JMPTB cmp eax, 9
  JMPTB je public_6ef0228
  JMPTB cmp eax, 0xA
  JMPTB je public_6ef0230
  JMPTB cmp eax, 0xB
  JMPTB je public_6ef0238
  JMPTB cmp eax, 0xC
  JMPTB je public_6ef0240
  JMPTB cmp eax, 0xD
  JMPTB je public_6ef0238
  JMPTB cmp eax, 0xE
  JMPTB je public_6ef0248
  JMPTB int 3
        public_6ef01e0 : nop
        mov eax, 0x331D
        ret 4
        public_6ef01e8 : nop
        mov eax, 0x331E
        ret 4
        public_6ef01f0 : nop
        mov eax, 0x331F
        ret 4
        public_6ef01f8 : nop
        mov eax, 0x3320
        ret 4
        public_6ef0200 : nop
        mov eax, 0x3321
        ret 4
        public_6ef0208 : nop
        mov eax, 0x3322
        ret 4
        public_6ef0210 : nop
        mov eax, 0x3328
        ret 4
        public_6ef0218 : nop
        mov eax, 0x332A
        ret 4
        public_6ef0220 : nop
        mov eax, 0x3329
        ret 4
        public_6ef0228 : nop
        mov eax, 0x3323
        ret 4
        public_6ef0230 : nop
        mov eax, 0x3324
        ret 4
        public_6ef0238 : nop
        mov eax, 0x3325
        ret 4
        public_6ef0240 : nop
        mov eax, 0x3326
        ret 4
        public_6ef0248 : nop
        mov eax, 0x3327
        ret 4
        public_6ef0250 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6ef01d0)
        ASM_EXPORT_ENTRY_FIRST(0x6ef01e0, public_6ef01e0)
        ASM_EXPORT_ENTRY(0x6ef01e8, public_6ef01e8)
        ASM_EXPORT_ENTRY(0x6ef01f0, public_6ef01f0)
        ASM_EXPORT_ENTRY(0x6ef01f8, public_6ef01f8)
        ASM_EXPORT_ENTRY(0x6ef0200, public_6ef0200)
        ASM_EXPORT_ENTRY(0x6ef0208, public_6ef0208)
        ASM_EXPORT_ENTRY(0x6ef0210, public_6ef0210)
        ASM_EXPORT_ENTRY(0x6ef0218, public_6ef0218)
        ASM_EXPORT_ENTRY(0x6ef0220, public_6ef0220)
        ASM_EXPORT_ENTRY(0x6ef0228, public_6ef0228)
        ASM_EXPORT_ENTRY(0x6ef0230, public_6ef0230)
        ASM_EXPORT_ENTRY(0x6ef0238, public_6ef0238)
        ASM_EXPORT_ENTRY(0x6ef0240, public_6ef0240)
        ASM_EXPORT_ENTRY_LAST(0x6ef0248, public_6ef0248)
    }
}

#undef public_6ef01e0
#undef public_6ef01e8
#undef public_6ef01f0
#undef public_6ef01f8
#undef public_6ef0200
#undef public_6ef0208
#undef public_6ef0210
#undef public_6ef0218
#undef public_6ef0220
#undef public_6ef0228
#undef public_6ef0230
#undef public_6ef0238
#undef public_6ef0240
#undef public_6ef0248
#undef public_6ef0250

#pragma init_seg(compiler)
extern "C" void const* const public_6ef01e0 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef01e0);
extern "C" void const* const public_6ef01e8 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef01e8);
extern "C" void const* const public_6ef01f0 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef01f0);
extern "C" void const* const public_6ef01f8 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef01f8);
extern "C" void const* const public_6ef0200 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0200);
extern "C" void const* const public_6ef0208 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0208);
extern "C" void const* const public_6ef0210 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0210);
extern "C" void const* const public_6ef0218 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0218);
extern "C" void const* const public_6ef0220 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0220);
extern "C" void const* const public_6ef0228 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0228);
extern "C" void const* const public_6ef0230 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0230);
extern "C" void const* const public_6ef0238 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0238);
extern "C" void const* const public_6ef0240 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0240);
extern "C" void const* const public_6ef0248 = __AsmFindLabelExport(&internal_6ef01d0, 0x6ef0248);
