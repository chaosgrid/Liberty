#include "FLMaterials-PCH.h"


#define public_66f4a10 _public_66f4a10
#define public_66f4a16 _public_66f4a16
#define public_66f4a1c _public_66f4a1c
#define public_66f4a22 _public_66f4a22
#define public_66f4a28 _public_66f4a28
#define public_66f4a2e _public_66f4a2e
#define public_66f4a34 _public_66f4a34
#define public_66f4a3a _public_66f4a3a
#define public_66f4a43 _public_66f4a43
#define public_66f4a4c _public_66f4a4c
#define public_66f4a55 _public_66f4a55
#define public_66f4a5b _public_66f4a5b

PROC_DECLARE(0x66f4a00, internal_66f4a00, public_66f4a00);
extern "C" NAKED register_t __cdecl internal_66f4a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xA
        ja public_66f4a5b
/*FIXUP jmp dword ptr ds : [eax*4+public_66f4a60] @0x66f4a09*/
  JMPTB cmp eax, 0
  JMPTB je public_66f4a10
  JMPTB cmp eax, 1
  JMPTB je public_66f4a16
  JMPTB cmp eax, 2
  JMPTB je public_66f4a1c
  JMPTB cmp eax, 3
  JMPTB je public_66f4a22
  JMPTB cmp eax, 4
  JMPTB je public_66f4a28
  JMPTB cmp eax, 5
  JMPTB je public_66f4a2e
  JMPTB cmp eax, 6
  JMPTB je public_66f4a34
  JMPTB cmp eax, 7
  JMPTB je public_66f4a3a
  JMPTB cmp eax, 8
  JMPTB je public_66f4a43
  JMPTB cmp eax, 9
  JMPTB je public_66f4a4c
  JMPTB cmp eax, 0xA
  JMPTB je public_66f4a55
  JMPTB int 3
        public_66f4a10 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_66f4a16 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_66f4a1c : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_66f4a22 : nop
        lea eax, ds:[ecx+0x40]
        ret 4
        public_66f4a28 : nop
        lea eax, ds:[ecx+0x60]
        ret 4
        public_66f4a2e : nop
        lea eax, ds:[ecx+0x2C]
        ret 4
        public_66f4a34 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_66f4a3a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_66f4a43 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_66f4a4c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_66f4a55 : nop
        lea eax, ds:[ecx+0x6C]
        ret 4
        public_66f4a5b : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66f4a00)
        ASM_EXPORT_ENTRY_FIRST(0x66f4a10, public_66f4a10)
        ASM_EXPORT_ENTRY(0x66f4a16, public_66f4a16)
        ASM_EXPORT_ENTRY(0x66f4a1c, public_66f4a1c)
        ASM_EXPORT_ENTRY(0x66f4a22, public_66f4a22)
        ASM_EXPORT_ENTRY(0x66f4a28, public_66f4a28)
        ASM_EXPORT_ENTRY(0x66f4a2e, public_66f4a2e)
        ASM_EXPORT_ENTRY(0x66f4a34, public_66f4a34)
        ASM_EXPORT_ENTRY(0x66f4a3a, public_66f4a3a)
        ASM_EXPORT_ENTRY(0x66f4a43, public_66f4a43)
        ASM_EXPORT_ENTRY(0x66f4a4c, public_66f4a4c)
        ASM_EXPORT_ENTRY_LAST(0x66f4a55, public_66f4a55)
    }
}

#undef public_66f4a10
#undef public_66f4a16
#undef public_66f4a1c
#undef public_66f4a22
#undef public_66f4a28
#undef public_66f4a2e
#undef public_66f4a34
#undef public_66f4a3a
#undef public_66f4a43
#undef public_66f4a4c
#undef public_66f4a55
#undef public_66f4a5b

#pragma init_seg(compiler)
extern "C" void const* const public_66f4a10 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a10);
extern "C" void const* const public_66f4a16 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a16);
extern "C" void const* const public_66f4a1c = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a1c);
extern "C" void const* const public_66f4a22 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a22);
extern "C" void const* const public_66f4a28 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a28);
extern "C" void const* const public_66f4a2e = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a2e);
extern "C" void const* const public_66f4a34 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a34);
extern "C" void const* const public_66f4a3a = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a3a);
extern "C" void const* const public_66f4a43 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a43);
extern "C" void const* const public_66f4a4c = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a4c);
extern "C" void const* const public_66f4a55 = __AsmFindLabelExport(&internal_66f4a00, 0x66f4a55);
