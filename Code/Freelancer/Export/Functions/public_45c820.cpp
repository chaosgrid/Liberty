#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45c820);

#define public_45c833 _public_45c833
#define public_45c842 _public_45c842
#define public_45c851 _public_45c851
#define public_45c860 _public_45c860
#define public_45c86f _public_45c86f
#define public_45c87e _public_45c87e
#define public_45c88d _public_45c88d

PROC_DECLARE(0x45c820, internal_45c820, public_45c820);
extern "C" NAKED register_t __cdecl internal_45c820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45c88d
/*FIXUP jmp dword ptr ds : [eax*4+public_45c89c] @0x45c82c*/
  JMPTB cmp eax, 0
  JMPTB je public_45c88d
  JMPTB cmp eax, 1
  JMPTB je public_45c88d
  JMPTB cmp eax, 2
  JMPTB je public_45c851
  JMPTB cmp eax, 3
  JMPTB je public_45c833
  JMPTB cmp eax, 4
  JMPTB je public_45c842
  JMPTB cmp eax, 5
  JMPTB je public_45c86f
  JMPTB cmp eax, 6
  JMPTB je public_45c87e
  JMPTB cmp eax, 7
  JMPTB je public_45c860
  JMPTB int 3
        public_45c833 : nop
        mov eax, 1
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c842 : nop
        mov eax, 2
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c851 : nop
        mov eax, 3
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c860 : nop
        mov eax, 4
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c86f : nop
        mov eax, 5
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c87e : nop
        mov eax, 6
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        public_45c88d : nop
        xor eax, eax
        mov eax, dword ptr ds : [ecx+eax*4+0x3B8]
        ret 4
        UNREACHABLE_TRAP(0x45c820)
        ASM_EXPORT_ENTRY_SINGLE(0x45c860, public_45c860)
    }
}

#undef public_45c833
#undef public_45c842
#undef public_45c851
#undef public_45c860
#undef public_45c86f
#undef public_45c87e
#undef public_45c88d

#pragma init_seg(compiler)
extern "C" void const* const public_45c860 = __AsmFindLabelExport(&internal_45c820, 0x45c860);
