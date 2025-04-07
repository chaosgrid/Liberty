#include "Shading-PCH.h"


#define public_6eb89f0 _public_6eb89f0
#define public_6eb89f6 _public_6eb89f6
#define public_6eb89fc _public_6eb89fc
#define public_6eb8a05 _public_6eb8a05
#define public_6eb8a0e _public_6eb8a0e
#define public_6eb8a17 _public_6eb8a17

PROC_DECLARE(0x6eb89e0, internal_6eb89e0, public_6eb89e0);
extern "C" NAKED register_t __cdecl internal_6eb89e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 4
        ja public_6eb8a17
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb8a1c] @0x6eb89e9*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb89f0
  JMPTB cmp eax, 1
  JMPTB je public_6eb89f6
  JMPTB cmp eax, 2
  JMPTB je public_6eb89fc
  JMPTB cmp eax, 3
  JMPTB je public_6eb8a05
  JMPTB cmp eax, 4
  JMPTB je public_6eb8a0e
  JMPTB int 3
        public_6eb89f0 : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_6eb89f6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6eb89fc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6eb8a05 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6eb8a0e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6eb8a17 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb89e0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb89f0, public_6eb89f0)
        ASM_EXPORT_ENTRY(0x6eb89f6, public_6eb89f6)
        ASM_EXPORT_ENTRY(0x6eb89fc, public_6eb89fc)
        ASM_EXPORT_ENTRY(0x6eb8a05, public_6eb8a05)
        ASM_EXPORT_ENTRY_LAST(0x6eb8a0e, public_6eb8a0e)
    }
}

#undef public_6eb89f0
#undef public_6eb89f6
#undef public_6eb89fc
#undef public_6eb8a05
#undef public_6eb8a0e
#undef public_6eb8a17

#pragma init_seg(compiler)
extern "C" void const* const public_6eb89f0 = __AsmFindLabelExport(&internal_6eb89e0, 0x6eb89f0);
extern "C" void const* const public_6eb89f6 = __AsmFindLabelExport(&internal_6eb89e0, 0x6eb89f6);
extern "C" void const* const public_6eb89fc = __AsmFindLabelExport(&internal_6eb89e0, 0x6eb89fc);
extern "C" void const* const public_6eb8a05 = __AsmFindLabelExport(&internal_6eb89e0, 0x6eb8a05);
extern "C" void const* const public_6eb8a0e = __AsmFindLabelExport(&internal_6eb89e0, 0x6eb8a0e);
