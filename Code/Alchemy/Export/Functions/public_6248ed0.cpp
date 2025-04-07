#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62257d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248edb _public_6248edb

PROC_DECLARE(0x6248ed0, internal_6248ed0, public_6248ed0);
/* CHUNK of public_6225750 */
extern "C" NAKED register_t __cdecl internal_6248ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62257d0
        public_6248edb : nop
        mov eax, offset public_6251e1c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ed0)
        ASM_EXPORT_ENTRY_SINGLE(0x6248edb, public_6248edb)
    }
}

#undef public_6248edb

#pragma init_seg(compiler)
extern "C" void const* const public_6248edb = __AsmFindLabelExport(&internal_6248ed0, 0x6248edb);
