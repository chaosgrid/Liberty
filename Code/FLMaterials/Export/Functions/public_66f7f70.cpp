#include "FLMaterials-PCH.h"


#define public_66f7f80 _public_66f7f80
#define public_66f7f86 _public_66f7f86
#define public_66f7f8c _public_66f7f8c
#define public_66f7f92 _public_66f7f92
#define public_66f7f98 _public_66f7f98
#define public_66f7f9e _public_66f7f9e
#define public_66f7fa4 _public_66f7fa4
#define public_66f7faa _public_66f7faa
#define public_66f7fb3 _public_66f7fb3
#define public_66f7fbc _public_66f7fbc
#define public_66f7fc5 _public_66f7fc5

PROC_DECLARE(0x66f7f70, internal_66f7f70, public_66f7f70);
extern "C" NAKED register_t __cdecl internal_66f7f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 9
        ja public_66f7fc5
/*FIXUP jmp dword ptr ds : [eax*4+public_66f7fcc] @0x66f7f79*/
  JMPTB cmp eax, 0
  JMPTB je public_66f7f80
  JMPTB cmp eax, 1
  JMPTB je public_66f7f86
  JMPTB cmp eax, 2
  JMPTB je public_66f7f8c
  JMPTB cmp eax, 3
  JMPTB je public_66f7f92
  JMPTB cmp eax, 4
  JMPTB je public_66f7f98
  JMPTB cmp eax, 5
  JMPTB je public_66f7f9e
  JMPTB cmp eax, 6
  JMPTB je public_66f7fa4
  JMPTB cmp eax, 7
  JMPTB je public_66f7faa
  JMPTB cmp eax, 8
  JMPTB je public_66f7fb3
  JMPTB cmp eax, 9
  JMPTB je public_66f7fbc
  JMPTB int 3
        public_66f7f80 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_66f7f86 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_66f7f8c : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_66f7f92 : nop
        lea eax, ds:[ecx+0x40]
        ret 4
        public_66f7f98 : nop
        lea eax, ds:[ecx+0x60]
        ret 4
        public_66f7f9e : nop
        lea eax, ds:[ecx+0x2C]
        ret 4
        public_66f7fa4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_66f7faa : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_66f7fb3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_66f7fbc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_66f7fc5 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66f7f70)
        ASM_EXPORT_ENTRY_FIRST(0x66f7f80, public_66f7f80)
        ASM_EXPORT_ENTRY(0x66f7f86, public_66f7f86)
        ASM_EXPORT_ENTRY(0x66f7f8c, public_66f7f8c)
        ASM_EXPORT_ENTRY(0x66f7f92, public_66f7f92)
        ASM_EXPORT_ENTRY(0x66f7f98, public_66f7f98)
        ASM_EXPORT_ENTRY(0x66f7f9e, public_66f7f9e)
        ASM_EXPORT_ENTRY(0x66f7fa4, public_66f7fa4)
        ASM_EXPORT_ENTRY(0x66f7faa, public_66f7faa)
        ASM_EXPORT_ENTRY(0x66f7fb3, public_66f7fb3)
        ASM_EXPORT_ENTRY_LAST(0x66f7fbc, public_66f7fbc)
    }
}

#undef public_66f7f80
#undef public_66f7f86
#undef public_66f7f8c
#undef public_66f7f92
#undef public_66f7f98
#undef public_66f7f9e
#undef public_66f7fa4
#undef public_66f7faa
#undef public_66f7fb3
#undef public_66f7fbc
#undef public_66f7fc5

#pragma init_seg(compiler)
extern "C" void const* const public_66f7f80 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f80);
extern "C" void const* const public_66f7f86 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f86);
extern "C" void const* const public_66f7f8c = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f8c);
extern "C" void const* const public_66f7f92 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f92);
extern "C" void const* const public_66f7f98 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f98);
extern "C" void const* const public_66f7f9e = __AsmFindLabelExport(&internal_66f7f70, 0x66f7f9e);
extern "C" void const* const public_66f7fa4 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7fa4);
extern "C" void const* const public_66f7faa = __AsmFindLabelExport(&internal_66f7f70, 0x66f7faa);
extern "C" void const* const public_66f7fb3 = __AsmFindLabelExport(&internal_66f7f70, 0x66f7fb3);
extern "C" void const* const public_66f7fbc = __AsmFindLabelExport(&internal_66f7f70, 0x66f7fbc);
