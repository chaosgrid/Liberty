#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392418 _public_6392418

PROC_DECLARE(0x6392410, internal_6392410, public_6392410);
/* CHUNK of public_62634f0 */
extern "C" NAKED register_t __cdecl internal_6392410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6263310
        public_6392418 : nop
        mov eax, offset public_63aaf2c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392410)
        ASM_EXPORT_ENTRY_SINGLE(0x6392418, public_6392418)
    }
}

#undef public_6392418

#pragma init_seg(compiler)
extern "C" void const* const public_6392418 = __AsmFindLabelExport(&internal_6392410, 0x6392418);
