#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2618 _public_6db2618
#define public_6db2623 _public_6db2623
#define public_6db262e _public_6db262e

PROC_DECLARE(0x6db2610, internal_6db2610, public_6db2610);
/* CHUNK of public_6d8fb00 */
extern "C" NAKED register_t __cdecl internal_6db2610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6da1370
        public_6db2618 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6d8fbe0
        public_6db2623 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6d8fbe0
        public_6db262e : nop
        mov eax, offset public_6db6e08
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2610)
        ASM_EXPORT_ENTRY_FIRST(0x6db2618, public_6db2618)
        ASM_EXPORT_ENTRY(0x6db2623, public_6db2623)
        ASM_EXPORT_ENTRY_LAST(0x6db262e, public_6db262e)
    }
}

#undef public_6db2618
#undef public_6db2623
#undef public_6db262e

#pragma init_seg(compiler)
extern "C" void const* const public_6db2618 = __AsmFindLabelExport(&internal_6db2610, 0x6db2618);
extern "C" void const* const public_6db2623 = __AsmFindLabelExport(&internal_6db2610, 0x6db2623);
extern "C" void const* const public_6db262e = __AsmFindLabelExport(&internal_6db2610, 0x6db262e);
