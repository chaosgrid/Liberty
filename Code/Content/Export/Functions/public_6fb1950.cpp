#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1959 _public_6fb1959

PROC_DECLARE(0x6fb1950, internal_6fb1950, public_6fb1950);
/* CHUNK of public_6f9cb00 */
extern "C" NAKED register_t __cdecl internal_6fb1950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6fb3138]
        public_6fb1959 : nop
        mov eax, offset public_6fc6fe4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1950)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1959, public_6fb1959)
    }
}

#undef public_6fb1959

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1959 = __AsmFindLabelExport(&internal_6fb1950, 0x6fb1959);
