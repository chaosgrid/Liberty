#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f34);

#define public_6f5880b _public_6f5880b
#define public_6f58821 _public_6f58821

PROC_DECLARE(0x6f58800, internal_6f58800, public_6f58800);
/* CHUNK of public_6f30d20 */
extern "C" NAKED register_t __cdecl internal_6f58800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF4]
        jmp public_6f30cd0
/*FIXUP public_6f5880b : nop
        push offset _public_6f30cd0 @0x6f5880b*/
  FIXUP public_6f5880b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f30cd0
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6f57f34
        ret 
        public_6f58821 : nop
        mov eax, offset public_6f5b998
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58800)
        ASM_EXPORT_ENTRY_FIRST(0x6f5880b, public_6f5880b)
        ASM_EXPORT_ENTRY_LAST(0x6f58821, public_6f58821)
    }
}

#undef public_6f5880b
#undef public_6f58821

#pragma init_seg(compiler)
extern "C" void const* const public_6f5880b = __AsmFindLabelExport(&internal_6f58800, 0x6f5880b);
extern "C" void const* const public_6f58821 = __AsmFindLabelExport(&internal_6f58800, 0x6f58821);
