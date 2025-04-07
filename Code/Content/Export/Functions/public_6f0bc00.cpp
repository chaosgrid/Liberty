#include "Content-PCH.h"


#define public_6f0bc0f _public_6f0bc0f
#define public_6f0bc15 _public_6f0bc15
#define public_6f0bc1b _public_6f0bc1b

PROC_DECLARE(0x6f0bc00, internal_6f0bc00, public_6f0bc00);
extern "C" NAKED register_t __cdecl internal_6f0bc00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x18]
        cmp eax, 4
        ja public_6f0bc1b
/*FIXUP jmp dword ptr ds : [eax*4+public_6f0bc24] @0x6f0bc08*/
  JMPTB cmp eax, 0
  JMPTB je public_6f0bc1b
  JMPTB cmp eax, 1
  JMPTB je public_6f0bc0f
  JMPTB cmp eax, 2
  JMPTB je public_6f0bc0f
  JMPTB cmp eax, 3
  JMPTB je public_6f0bc1b
  JMPTB cmp eax, 4
  JMPTB je public_6f0bc15
  JMPTB int 3
        public_6f0bc0f : nop
        mov eax, 1
        ret 
        public_6f0bc15 : nop
        mov eax, 3
        ret 
        public_6f0bc1b : nop
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f0bc00)
        ASM_EXPORT_ENTRY_FIRST(0x6f0bc0f, public_6f0bc0f)
        ASM_EXPORT_ENTRY(0x6f0bc15, public_6f0bc15)
        ASM_EXPORT_ENTRY_LAST(0x6f0bc1b, public_6f0bc1b)
    }
}

#undef public_6f0bc0f
#undef public_6f0bc15
#undef public_6f0bc1b

#pragma init_seg(compiler)
extern "C" void const* const public_6f0bc0f = __AsmFindLabelExport(&internal_6f0bc00, 0x6f0bc0f);
extern "C" void const* const public_6f0bc15 = __AsmFindLabelExport(&internal_6f0bc00, 0x6f0bc15);
extern "C" void const* const public_6f0bc1b = __AsmFindLabelExport(&internal_6f0bc00, 0x6f0bc1b);
