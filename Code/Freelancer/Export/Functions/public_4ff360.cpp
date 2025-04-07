#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ff360);

#define public_4ff376 _public_4ff376
#define public_4ff37e _public_4ff37e
#define public_4ff386 _public_4ff386
#define public_4ff38e _public_4ff38e
#define public_4ff393 _public_4ff393

PROC_DECLARE(0x4ff360, internal_4ff360, public_4ff360);
extern "C" NAKED register_t __cdecl internal_4ff360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 3
        mov dword ptr ds : [ecx+0x2A4], eax
        ja public_4ff393
/*FIXUP jmp dword ptr ds : [eax*4+public_4ff398] @0x4ff36f*/
  JMPTB cmp eax, 0
  JMPTB je public_4ff376
  JMPTB cmp eax, 1
  JMPTB je public_4ff37e
  JMPTB cmp eax, 2
  JMPTB je public_4ff386
  JMPTB cmp eax, 3
  JMPTB je public_4ff38e
  JMPTB int 3
        public_4ff376 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        ret 4
        public_4ff37e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        ret 4
        public_4ff386 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        ret 4
        public_4ff38e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_4ff393 : nop
        ret 4
        UNREACHABLE_TRAP(0x4ff360)
        ASM_EXPORT_ENTRY_SINGLE(0x4ff38e, public_4ff38e)
    }
}

#undef public_4ff376
#undef public_4ff37e
#undef public_4ff386
#undef public_4ff38e
#undef public_4ff393

#pragma init_seg(compiler)
extern "C" void const* const public_4ff38e = __AsmFindLabelExport(&internal_4ff360, 0x4ff38e);
