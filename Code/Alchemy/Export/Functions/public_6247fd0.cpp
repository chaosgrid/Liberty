#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247fdb _public_6247fdb

PROC_DECLARE(0x6247fd0, internal_6247fd0, public_6247fd0);
/* CHUNK of public_6212960 */
extern "C" NAKED register_t __cdecl internal_6247fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_6247fdb : nop
        mov eax, offset public_6250e50
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247fd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247fdb, public_6247fdb)
    }
}

#undef public_6247fdb

#pragma init_seg(compiler)
extern "C" void const* const public_6247fdb = __AsmFindLabelExport(&internal_6247fd0, 0x6247fdb);
