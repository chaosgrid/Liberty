#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db22cc _public_6db22cc

PROC_DECLARE(0x6db22c0, internal_6db22c0, public_6db22c0);
/* CHUNK of public_6d84320 */
extern "C" NAKED register_t __cdecl internal_6db22c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6db3094]
        public_6db22cc : nop
        mov eax, offset public_6db69dc
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db22c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6db22cc, public_6db22cc)
    }
}

#undef public_6db22cc

#pragma init_seg(compiler)
extern "C" void const* const public_6db22cc = __AsmFindLabelExport(&internal_6db22c0, 0x6db22cc);
