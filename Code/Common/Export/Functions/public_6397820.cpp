#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639782e _public_639782e

PROC_DECLARE(0x6397820, internal_6397820, public_6397820);
/* CHUNK of public_6339010 */
extern "C" NAKED register_t __cdecl internal_6397820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x8C
        jmp public_6269110
        public_639782e : nop
        mov eax, offset public_63b1a18
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397820)
        ASM_EXPORT_ENTRY_SINGLE(0x639782e, public_639782e)
    }
}

#undef public_639782e

#pragma init_seg(compiler)
extern "C" void const* const public_639782e = __AsmFindLabelExport(&internal_6397820, 0x639782e);
