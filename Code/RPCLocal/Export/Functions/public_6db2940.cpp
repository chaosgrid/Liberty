#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2948 _public_6db2948

PROC_DECLARE(0x6db2940, internal_6db2940, public_6db2940);
/* CHUNK of public_6da10b0 */
extern "C" NAKED register_t __cdecl internal_6db2940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db2948 : nop
        mov eax, offset public_6db7214
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2940)
        ASM_EXPORT_ENTRY_SINGLE(0x6db2948, public_6db2948)
    }
}

#undef public_6db2948

#pragma init_seg(compiler)
extern "C" void const* const public_6db2948 = __AsmFindLabelExport(&internal_6db2940, 0x6db2948);
