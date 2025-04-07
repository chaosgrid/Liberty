#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d0eb _public_6d5d0eb

PROC_DECLARE(0x6d5d0e3, internal_6d5d0e3, public_6d5d0e3);
/* CHUNK of public_6d3762c */
extern "C" NAKED register_t __cdecl internal_6d5d0e3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d3731f
        public_6d5d0eb : nop
        mov eax, offset public_6d62af8
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d0e3)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5d0eb, public_6d5d0eb)
    }
}

#undef public_6d5d0eb

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d0eb = __AsmFindLabelExport(&internal_6d5d0e3, 0x6d5d0eb);
