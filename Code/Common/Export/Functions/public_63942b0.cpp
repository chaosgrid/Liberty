#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63942b8 _public_63942b8
#define public_63942c2 _public_63942c2

PROC_DECLARE(0x63942b0, internal_63942b0, public_63942b0);
/* CHUNK of public_62ae4e0 */
extern "C" NAKED register_t __cdecl internal_63942b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_63942b8 : nop
        mov ecx, offset public_63fc338
        jmp public_627e5e0
        public_63942c2 : nop
        mov eax, offset public_63ad860
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63942b0)
        ASM_EXPORT_ENTRY_FIRST(0x63942b8, public_63942b8)
        ASM_EXPORT_ENTRY_LAST(0x63942c2, public_63942c2)
    }
}

#undef public_63942b8
#undef public_63942c2

#pragma init_seg(compiler)
extern "C" void const* const public_63942b8 = __AsmFindLabelExport(&internal_63942b0, 0x63942b8);
extern "C" void const* const public_63942c2 = __AsmFindLabelExport(&internal_63942b0, 0x63942c2);
