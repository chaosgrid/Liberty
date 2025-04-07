#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2988 _public_6db2988

PROC_DECLARE(0x6db2980, internal_6db2980, public_6db2980);
/* CHUNK of public_6da21d0 */
extern "C" NAKED register_t __cdecl internal_6db2980()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db2988 : nop
        mov eax, offset public_6db7264
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2980)
        ASM_EXPORT_ENTRY_SINGLE(0x6db2988, public_6db2988)
    }
}

#undef public_6db2988

#pragma init_seg(compiler)
extern "C" void const* const public_6db2988 = __AsmFindLabelExport(&internal_6db2980, 0x6db2988);
