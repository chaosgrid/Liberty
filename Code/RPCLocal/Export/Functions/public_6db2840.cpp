#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2848 _public_6db2848

PROC_DECLARE(0x6db2840, internal_6db2840, public_6db2840);
/* CHUNK of public_6d9c540 */
extern "C" NAKED register_t __cdecl internal_6db2840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db2848 : nop
        mov eax, offset public_6db7068
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2840)
        ASM_EXPORT_ENTRY_SINGLE(0x6db2848, public_6db2848)
    }
}

#undef public_6db2848

#pragma init_seg(compiler)
extern "C" void const* const public_6db2848 = __AsmFindLabelExport(&internal_6db2840, 0x6db2848);
