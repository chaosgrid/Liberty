#include "Content-PCH.h"


#define public_6f9a44a _public_6f9a44a
#define public_6f9a44c _public_6f9a44c

PROC_DECLARE(0x6f9a430, internal_6f9a430, public_6f9a430);
extern "C" NAKED register_t __cdecl internal_6f9a430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        xor al, al
        dec ecx
        cmp ecx, 0xC
        ja public_6f9a44c
/*FIXUP movzx edx, byte ptr ds : [ecx+public_6f9a458] @0x6f9a43c*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6f9a450] @0x6f9a443*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 1
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 2
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 3
  JMPTB mov edx, 1
  JMPTB je public_6f9a44c
  JMPTB cmp ecx, 4
  JMPTB mov edx, 1
  JMPTB je public_6f9a44c
  JMPTB cmp ecx, 5
  JMPTB mov edx, 1
  JMPTB je public_6f9a44c
  JMPTB cmp ecx, 6
  JMPTB mov edx, 1
  JMPTB je public_6f9a44c
  JMPTB cmp ecx, 7
  JMPTB mov edx, 1
  JMPTB je public_6f9a44c
  JMPTB cmp ecx, 8
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 9
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 0xA
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 0xB
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB cmp ecx, 0xC
  JMPTB mov edx, 0
  JMPTB je public_6f9a44a
  JMPTB int 3
        public_6f9a44a : nop
        mov al, 1
        public_6f9a44c : nop
        ret 4
        UNREACHABLE_TRAP(0x6f9a430)
        ASM_EXPORT_ENTRY_FIRST(0x6f9a44a, public_6f9a44a)
        ASM_EXPORT_ENTRY_LAST(0x6f9a44c, public_6f9a44c)
    }
}

#undef public_6f9a44a
#undef public_6f9a44c

#pragma init_seg(compiler)
extern "C" void const* const public_6f9a44a = __AsmFindLabelExport(&internal_6f9a430, 0x6f9a44a);
extern "C" void const* const public_6f9a44c = __AsmFindLabelExport(&internal_6f9a430, 0x6f9a44c);
