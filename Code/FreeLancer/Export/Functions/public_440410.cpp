#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_440410);

#define public_44042a _public_44042a
#define public_440433 _public_440433
#define public_44043c _public_44043c

PROC_DECLARE(0x440410, internal_440410, public_440410);
extern "C" NAKED register_t __cdecl internal_440410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFFE
        cmp eax, 0xA
        ja public_44043c
/*FIXUP movzx ecx, byte ptr ds : [eax+public_440454] @0x44041c*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_440448] @0x440423*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_44042a
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0
  JMPTB je public_44042a
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 4
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 5
  JMPTB mov ecx, 1
  JMPTB je public_440433
  JMPTB cmp eax, 6
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 7
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 8
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 9
  JMPTB mov ecx, 2
  JMPTB je public_44043c
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0
  JMPTB je public_44042a
  JMPTB int 3
        public_44042a : nop
        fld dword ptr ds : [public_5cb890]
        ret 4
        public_440433 : nop
        fld dword ptr ds : [public_5cb88c]
        ret 4
        public_44043c : nop
        fld dword ptr ds : [public_5c75dc]
        ret 4
        UNREACHABLE_TRAP(0x440410)
        ASM_EXPORT_ENTRY_SINGLE(0x44043c, public_44043c)
    }
}

#undef public_44042a
#undef public_440433
#undef public_44043c

#pragma init_seg(compiler)
extern "C" void const* const public_44043c = __AsmFindLabelExport(&internal_440410, 0x44043c);
