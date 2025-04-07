#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247cdb _public_6247cdb

PROC_DECLARE(0x6247cd0, internal_6247cd0, public_6247cd0);
/* CHUNK of public_6210a80 */
extern "C" NAKED register_t __cdecl internal_6247cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209fc0
        public_6247cdb : nop
        mov eax, offset public_6250b14
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247cd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247cdb, public_6247cdb)
    }
}

#undef public_6247cdb

#pragma init_seg(compiler)
extern "C" void const* const public_6247cdb = __AsmFindLabelExport(&internal_6247cd0, 0x6247cdb);
