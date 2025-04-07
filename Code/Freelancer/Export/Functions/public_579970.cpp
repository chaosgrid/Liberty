#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579970);

#define public_57998e _public_57998e
#define public_57999d _public_57999d
#define public_5799aa _public_5799aa
#define public_5799c8 _public_5799c8
#define public_5799dc _public_5799dc

PROC_DECLARE(0x579970, internal_579970, public_579970);
extern "C" NAKED register_t __cdecl internal_579970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x360]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x408]
        cmp eax, 3
        ja public_5799dc
/*FIXUP jmp dword ptr ds : [eax*4+public_5799e0] @0x579987*/
  JMPTB cmp eax, 0
  JMPTB je public_57998e
  JMPTB cmp eax, 1
  JMPTB je public_57999d
  JMPTB cmp eax, 2
  JMPTB je public_5799aa
  JMPTB cmp eax, 3
  JMPTB je public_5799c8
  JMPTB int 3
        public_57998e : nop
        mov eax, dword ptr ds : [ecx+0x364]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        ret 8
        public_57999d : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], 0
        ret 8
        public_5799aa : nop
        mov edx, dword ptr ds : [ecx+0x380]
        mov eax, dword ptr ds : [ecx+0x35C]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, edx
        cdq 
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr ds : [ecx], eax
        ret 8
        public_5799c8 : nop
        mov eax, dword ptr ds : [ecx+0x35C]
        mov edx, dword ptr ds : [ecx+0x380]
        sub edx, eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        public_5799dc : nop
        ret 8
        UNREACHABLE_TRAP(0x579970)
        ASM_EXPORT_ENTRY_SINGLE(0x5799c8, public_5799c8)
    }
}

#undef public_57998e
#undef public_57999d
#undef public_5799aa
#undef public_5799c8
#undef public_5799dc

#pragma init_seg(compiler)
extern "C" void const* const public_5799c8 = __AsmFindLabelExport(&internal_579970, 0x5799c8);
