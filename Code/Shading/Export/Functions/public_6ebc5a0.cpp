#include "Shading-PCH.h"


#define public_6ebc5b0 _public_6ebc5b0
#define public_6ebc5b6 _public_6ebc5b6
#define public_6ebc5bf _public_6ebc5bf
#define public_6ebc5c8 _public_6ebc5c8
#define public_6ebc5d1 _public_6ebc5d1

PROC_DECLARE(0x6ebc5a0, internal_6ebc5a0, public_6ebc5a0);
extern "C" NAKED register_t __cdecl internal_6ebc5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 3
        ja public_6ebc5d1
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebc5d8] @0x6ebc5a9*/
  JMPTB cmp eax, 0
  JMPTB je public_6ebc5b0
  JMPTB cmp eax, 1
  JMPTB je public_6ebc5b6
  JMPTB cmp eax, 2
  JMPTB je public_6ebc5bf
  JMPTB cmp eax, 3
  JMPTB je public_6ebc5c8
  JMPTB int 3
        public_6ebc5b0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6ebc5b6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6ebc5bf : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6ebc5c8 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6ebc5d1 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ebc5a0)
        ASM_EXPORT_ENTRY_FIRST(0x6ebc5b0, public_6ebc5b0)
        ASM_EXPORT_ENTRY(0x6ebc5b6, public_6ebc5b6)
        ASM_EXPORT_ENTRY(0x6ebc5bf, public_6ebc5bf)
        ASM_EXPORT_ENTRY_LAST(0x6ebc5c8, public_6ebc5c8)
    }
}

#undef public_6ebc5b0
#undef public_6ebc5b6
#undef public_6ebc5bf
#undef public_6ebc5c8
#undef public_6ebc5d1

#pragma init_seg(compiler)
extern "C" void const* const public_6ebc5b0 = __AsmFindLabelExport(&internal_6ebc5a0, 0x6ebc5b0);
extern "C" void const* const public_6ebc5b6 = __AsmFindLabelExport(&internal_6ebc5a0, 0x6ebc5b6);
extern "C" void const* const public_6ebc5bf = __AsmFindLabelExport(&internal_6ebc5a0, 0x6ebc5bf);
extern "C" void const* const public_6ebc5c8 = __AsmFindLabelExport(&internal_6ebc5a0, 0x6ebc5c8);
