#include "SoundStreamer-PCH.h"


#define public_6ef355a _public_6ef355a
#define public_6ef3562 _public_6ef3562
#define public_6ef356a _public_6ef356a
#define public_6ef3572 _public_6ef3572
#define public_6ef357a _public_6ef357a
#define public_6ef357c _public_6ef357c

PROC_DECLARE(0x6ef3530, internal_6ef3530, public_6ef3530);
extern "C" NAKED register_t __cdecl internal_6ef3530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        test ecx, ecx
        je public_6ef357a
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx+0x60]
        test esi, esi
        pop esi
        je public_6ef357a
        mov ecx, dword ptr ds : [ecx+0x80]
        dec ecx
        cmp ecx, 8
        ja public_6ef357c
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ef3580] @0x6ef3553*/
  JMPTB cmp ecx, 0
  JMPTB je public_6ef3572
  JMPTB cmp ecx, 1
  JMPTB je public_6ef3572
  JMPTB cmp ecx, 2
  JMPTB je public_6ef355a
  JMPTB cmp ecx, 3
  JMPTB je public_6ef357c
  JMPTB cmp ecx, 4
  JMPTB je public_6ef3562
  JMPTB cmp ecx, 5
  JMPTB je public_6ef355a
  JMPTB cmp ecx, 6
  JMPTB je public_6ef355a
  JMPTB cmp ecx, 7
  JMPTB je public_6ef356a
  JMPTB cmp ecx, 8
  JMPTB je public_6ef3572
  JMPTB int 3
        public_6ef355a : nop
        mov eax, 1
        ret 8
        public_6ef3562 : nop
        mov eax, 3
        ret 8
        public_6ef356a : nop
        mov eax, 4
        ret 8
        public_6ef3572 : nop
        mov eax, 2
        ret 8
        public_6ef357a : nop
        xor eax, eax
        public_6ef357c : nop
        ret 8
        UNREACHABLE_TRAP(0x6ef3530)
        ASM_EXPORT_ENTRY_FIRST(0x6ef355a, public_6ef355a)
        ASM_EXPORT_ENTRY(0x6ef3562, public_6ef3562)
        ASM_EXPORT_ENTRY(0x6ef356a, public_6ef356a)
        ASM_EXPORT_ENTRY(0x6ef3572, public_6ef3572)
        ASM_EXPORT_ENTRY_LAST(0x6ef357c, public_6ef357c)
    }
}

#undef public_6ef355a
#undef public_6ef3562
#undef public_6ef356a
#undef public_6ef3572
#undef public_6ef357a
#undef public_6ef357c

#pragma init_seg(compiler)
extern "C" void const* const public_6ef355a = __AsmFindLabelExport(&internal_6ef3530, 0x6ef355a);
extern "C" void const* const public_6ef3562 = __AsmFindLabelExport(&internal_6ef3530, 0x6ef3562);
extern "C" void const* const public_6ef356a = __AsmFindLabelExport(&internal_6ef3530, 0x6ef356a);
extern "C" void const* const public_6ef3572 = __AsmFindLabelExport(&internal_6ef3530, 0x6ef3572);
extern "C" void const* const public_6ef357c = __AsmFindLabelExport(&internal_6ef3530, 0x6ef357c);
