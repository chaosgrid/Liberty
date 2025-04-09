#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_540fd3 _public_540fd3
#define public_540fd9 _public_540fd9
#define public_540fdf _public_540fdf
#define public_540fe5 _public_540fe5
#define public_540feb _public_540feb
#define public_540ff1 _public_540ff1
#define public_540ff7 _public_540ff7
#define public_540ffd _public_540ffd
#define public_541003 _public_541003
#define public_541009 _public_541009
#define public_54100f _public_54100f

PROC_DECLARE(0x540fc0, internal_540fc0, public_540fc0);
extern "C" NAKED register_t __cdecl internal_540fc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        dec eax
        cmp eax, 9
        ja public_54100f
/*FIXUP jmp dword ptr ds : [eax*4+public_541014] @0x540fcc*/
  JMPTB cmp eax, 0
  JMPTB je public_540fd3
  JMPTB cmp eax, 1
  JMPTB je public_540ff1
  JMPTB cmp eax, 2
  JMPTB je public_540fd9
  JMPTB cmp eax, 3
  JMPTB je public_540fdf
  JMPTB cmp eax, 4
  JMPTB je public_540fe5
  JMPTB cmp eax, 5
  JMPTB je public_540feb
  JMPTB cmp eax, 6
  JMPTB je public_540ffd
  JMPTB cmp eax, 7
  JMPTB je public_541003
  JMPTB cmp eax, 8
  JMPTB je public_541009
  JMPTB cmp eax, 9
  JMPTB je public_540ff7
  JMPTB int 3
        public_540fd3 : nop
        mov eax, dword ptr ds : [public_678aac]
        ret 
        public_540fd9 : nop
        mov eax, dword ptr ds : [public_678a94]
        ret 
        public_540fdf : nop
        mov eax, dword ptr ds : [public_678aa0]
        ret 
        public_540fe5 : nop
        mov eax, dword ptr ds : [public_678a88]
        ret 
        public_540feb : nop
        mov eax, dword ptr ds : [public_678a7c]
        ret 
        public_540ff1 : nop
        mov eax, dword ptr ds : [public_678ab8]
        ret 
        public_540ff7 : nop
        mov eax, dword ptr ds : [public_678a70]
        ret 
        public_540ffd : nop
        mov eax, dword ptr ds : [public_678a64]
        ret 
        public_541003 : nop
        mov eax, dword ptr ds : [public_678a4c]
        ret 
        public_541009 : nop
        mov eax, dword ptr ds : [public_678a40]
        ret 
        public_54100f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x540fc0)
        ASM_EXPORT_ENTRY_SINGLE(0x540ff7, public_540ff7)
    }
}

#undef public_540fd3
#undef public_540fd9
#undef public_540fdf
#undef public_540fe5
#undef public_540feb
#undef public_540ff1
#undef public_540ff7
#undef public_540ffd
#undef public_541003
#undef public_541009
#undef public_54100f

#pragma init_seg(compiler)
extern "C" void const* const public_540ff7 = __AsmFindLabelExport(&internal_540fc0, 0x540ff7);
