#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf838 _public_6faf838

PROC_DECLARE(0x6faf830, internal_6faf830, public_6faf830);
/* CHUNK of public_6f5a550 */
extern "C" NAKED register_t __cdecl internal_6faf830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6faf838 : nop
        mov eax, offset public_6fc4810
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf830)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf838, public_6faf838)
    }
}

#undef public_6faf838

#pragma init_seg(compiler)
extern "C" void const* const public_6faf838 = __AsmFindLabelExport(&internal_6faf830, 0x6faf838);
