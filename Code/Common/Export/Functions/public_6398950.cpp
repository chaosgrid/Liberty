#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398958 _public_6398958

PROC_DECLARE(0x6398950, internal_6398950, public_6398950);
/* CHUNK of public_6379460 */
extern "C" NAKED register_t __cdecl internal_6398950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_634d260
        public_6398958 : nop
        mov eax, offset public_63b2fb0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398950)
        ASM_EXPORT_ENTRY_SINGLE(0x6398958, public_6398958)
    }
}

#undef public_6398958

#pragma init_seg(compiler)
extern "C" void const* const public_6398958 = __AsmFindLabelExport(&internal_6398950, 0x6398958);
