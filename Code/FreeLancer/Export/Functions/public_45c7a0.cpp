#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45c7a0);

#define public_45c7b3 _public_45c7b3
#define public_45c7ba _public_45c7ba
#define public_45c7c1 _public_45c7c1
#define public_45c7c8 _public_45c7c8
#define public_45c7cf _public_45c7cf
#define public_45c7d6 _public_45c7d6
#define public_45c7dd _public_45c7dd
#define public_45c7df _public_45c7df

PROC_DECLARE(0x45c7a0, internal_45c7a0, public_45c7a0);
extern "C" NAKED register_t __cdecl internal_45c7a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45c7dd
/*FIXUP jmp dword ptr ds : [eax*4+public_45c800] @0x45c7ac*/
  JMPTB cmp eax, 0
  JMPTB je public_45c7dd
  JMPTB cmp eax, 1
  JMPTB je public_45c7dd
  JMPTB cmp eax, 2
  JMPTB je public_45c7c1
  JMPTB cmp eax, 3
  JMPTB je public_45c7b3
  JMPTB cmp eax, 4
  JMPTB je public_45c7ba
  JMPTB cmp eax, 5
  JMPTB je public_45c7cf
  JMPTB cmp eax, 6
  JMPTB je public_45c7d6
  JMPTB cmp eax, 7
  JMPTB je public_45c7c8
  JMPTB int 3
        public_45c7b3 : nop
        mov eax, 1
        jmp public_45c7df
        public_45c7ba : nop
        mov eax, 2
        jmp public_45c7df
        public_45c7c1 : nop
        mov eax, 3
        jmp public_45c7df
        public_45c7c8 : nop
        mov eax, 4
        jmp public_45c7df
        public_45c7cf : nop
        mov eax, 5
        jmp public_45c7df
        public_45c7d6 : nop
        mov eax, 6
        jmp public_45c7df
        public_45c7dd : nop
        xor eax, eax
        public_45c7df : nop
        lea edx, ds:[eax+eax*2+0x111]
        lea eax, ds:[ecx+edx*4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 8
        UNREACHABLE_TRAP(0x45c7a0)
        ASM_EXPORT_ENTRY_SINGLE(0x45c7c8, public_45c7c8)
    }
}

#undef public_45c7b3
#undef public_45c7ba
#undef public_45c7c1
#undef public_45c7c8
#undef public_45c7cf
#undef public_45c7d6
#undef public_45c7dd
#undef public_45c7df

#pragma init_seg(compiler)
extern "C" void const* const public_45c7c8 = __AsmFindLabelExport(&internal_45c7a0, 0x45c7c8);
