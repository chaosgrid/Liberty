#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d24d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfedb _public_65dfedb

PROC_DECLARE(0x65dfed0, internal_65dfed0, public_65dfed0);
/* CHUNK of public_65d1b70 */
extern "C" NAKED register_t __cdecl internal_65dfed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_65d24d0
        public_65dfedb : nop
        mov eax, offset public_65e1eb8
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfed0)
        ASM_EXPORT_ENTRY_SINGLE(0x65dfedb, public_65dfedb)
    }
}

#undef public_65dfedb

#pragma init_seg(compiler)
extern "C" void const* const public_65dfedb = __AsmFindLabelExport(&internal_65dfed0, 0x65dfedb);
