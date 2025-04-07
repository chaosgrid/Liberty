#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248488 _public_6248488
#define public_6248490 _public_6248490

PROC_DECLARE(0x6248480, internal_6248480, public_6248480);
/* CHUNK of public_62184c0 */
extern "C" NAKED register_t __cdecl internal_6248480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6217c00
        public_6248488 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6217c00
        public_6248490 : nop
        mov eax, offset public_6251348
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248480)
        ASM_EXPORT_ENTRY_FIRST(0x6248488, public_6248488)
        ASM_EXPORT_ENTRY_LAST(0x6248490, public_6248490)
    }
}

#undef public_6248488
#undef public_6248490

#pragma init_seg(compiler)
extern "C" void const* const public_6248488 = __AsmFindLabelExport(&internal_6248480, 0x6248488);
extern "C" void const* const public_6248490 = __AsmFindLabelExport(&internal_6248480, 0x6248490);
