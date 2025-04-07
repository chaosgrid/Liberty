#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639491b _public_639491b

PROC_DECLARE(0x6394910, internal_6394910, public_6394910);
/* CHUNK of public_62bd020 */
extern "C" NAKED register_t __cdecl internal_6394910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_62bd310
        public_639491b : nop
        mov eax, offset public_63adf30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394910)
        ASM_EXPORT_ENTRY_SINGLE(0x639491b, public_639491b)
    }
}

#undef public_639491b

#pragma init_seg(compiler)
extern "C" void const* const public_639491b = __AsmFindLabelExport(&internal_6394910, 0x639491b);
