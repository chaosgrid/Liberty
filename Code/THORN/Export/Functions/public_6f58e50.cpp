#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f34);

#define public_6f58e5b _public_6f58e5b
#define public_6f58e71 _public_6f58e71

PROC_DECLARE(0x6f58e50, internal_6f58e50, public_6f58e50);
/* CHUNK of public_6f3bca0 */
extern "C" NAKED register_t __cdecl internal_6f58e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF4]
        jmp public_6f3bc10
/*FIXUP public_6f58e5b : nop
        push offset _public_6f3bc10 @0x6f58e5b*/
  FIXUP public_6f58e5b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f3bc10
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6f57f34
        ret 
        public_6f58e71 : nop
        mov eax, offset public_6f5bfd4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58e50)
        ASM_EXPORT_ENTRY_FIRST(0x6f58e5b, public_6f58e5b)
        ASM_EXPORT_ENTRY_LAST(0x6f58e71, public_6f58e71)
    }
}

#undef public_6f58e5b
#undef public_6f58e71

#pragma init_seg(compiler)
extern "C" void const* const public_6f58e5b = __AsmFindLabelExport(&internal_6f58e50, 0x6f58e5b);
extern "C" void const* const public_6f58e71 = __AsmFindLabelExport(&internal_6f58e50, 0x6f58e71);
