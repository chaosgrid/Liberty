#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_62307e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249878 _public_6249878
#define public_6249880 _public_6249880

PROC_DECLARE(0x6249870, internal_6249870, public_6249870);
/* CHUNK of public_622f960 */
extern "C" NAKED register_t __cdecl internal_6249870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_62307e0
        public_6249878 : nop
        lea ecx, ss:[ebp+4]
        jmp public_62307d0
        public_6249880 : nop
        mov eax, offset public_625282c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249870)
        ASM_EXPORT_ENTRY_FIRST(0x6249878, public_6249878)
        ASM_EXPORT_ENTRY_LAST(0x6249880, public_6249880)
    }
}

#undef public_6249878
#undef public_6249880

#pragma init_seg(compiler)
extern "C" void const* const public_6249878 = __AsmFindLabelExport(&internal_6249870, 0x6249878);
extern "C" void const* const public_6249880 = __AsmFindLabelExport(&internal_6249870, 0x6249880);
