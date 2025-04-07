#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272c0);
CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397228 _public_6397228
#define public_6397230 _public_6397230

PROC_DECLARE(0x6397220, internal_6397220, public_6397220);
/* CHUNK of public_632a2f0 */
extern "C" NAKED register_t __cdecl internal_6397220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6329710
        public_6397228 : nop
        lea ecx, ss:[ebp+4]
        jmp public_63272c0
        public_6397230 : nop
        mov eax, offset public_63b1340
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397220)
        ASM_EXPORT_ENTRY_FIRST(0x6397228, public_6397228)
        ASM_EXPORT_ENTRY_LAST(0x6397230, public_6397230)
    }
}

#undef public_6397228
#undef public_6397230

#pragma init_seg(compiler)
extern "C" void const* const public_6397228 = __AsmFindLabelExport(&internal_6397220, 0x6397228);
extern "C" void const* const public_6397230 = __AsmFindLabelExport(&internal_6397220, 0x6397230);
