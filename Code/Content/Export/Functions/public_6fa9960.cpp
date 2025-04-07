#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9968 _public_6fa9968

PROC_DECLARE(0x6fa9960, internal_6fa9960, public_6fa9960);
/* CHUNK of public_6ea7d20 */
extern "C" NAKED register_t __cdecl internal_6fa9960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_6ebf720
        public_6fa9968 : nop
        mov eax, offset public_6fbdcbc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9960)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9968, public_6fa9968)
    }
}

#undef public_6fa9968

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9968 = __AsmFindLabelExport(&internal_6fa9960, 0x6fa9968);
