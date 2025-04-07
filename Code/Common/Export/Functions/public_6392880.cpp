#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_639288b _public_639288b
#define public_63928a1 _public_63928a1

PROC_DECLARE(0x6392880, internal_6392880, public_6392880);
/* CHUNK of public_6272150 */
extern "C" NAKED register_t __cdecl internal_6392880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_62a68e0
/*FIXUP public_639288b : nop
        push offset _public_62a68e0 @0x639288b*/
  FIXUP public_639288b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_6391dfc
        ret 
        public_63928a1 : nop
        mov eax, offset public_63ab64c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392880)
        ASM_EXPORT_ENTRY_FIRST(0x639288b, public_639288b)
        ASM_EXPORT_ENTRY_LAST(0x63928a1, public_63928a1)
    }
}

#undef public_639288b
#undef public_63928a1

#pragma init_seg(compiler)
extern "C" void const* const public_639288b = __AsmFindLabelExport(&internal_6392880, 0x639288b);
extern "C" void const* const public_63928a1 = __AsmFindLabelExport(&internal_6392880, 0x63928a1);
