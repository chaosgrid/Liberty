#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63989ab _public_63989ab

PROC_DECLARE(0x63989a0, internal_63989a0, public_63989a0);
/* CHUNK of public_637a2e0 */
extern "C" NAKED register_t __cdecl internal_63989a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        jmp public_63449d0
        public_63989ab : nop
        mov eax, offset public_63b3010
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63989a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63989ab, public_63989ab)
    }
}

#undef public_63989ab

#pragma init_seg(compiler)
extern "C" void const* const public_63989ab = __AsmFindLabelExport(&internal_63989a0, 0x63989ab);
