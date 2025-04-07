#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db22ac _public_6db22ac

PROC_DECLARE(0x6db22a0, internal_6db22a0, public_6db22a0);
/* CHUNK of public_6d842b0 */
extern "C" NAKED register_t __cdecl internal_6db22a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_6db3094]
        public_6db22ac : nop
        mov eax, offset public_6db698c
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db22a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6db22ac, public_6db22ac)
    }
}

#undef public_6db22ac

#pragma init_seg(compiler)
extern "C" void const* const public_6db22ac = __AsmFindLabelExport(&internal_6db22a0, 0x6db22ac);
