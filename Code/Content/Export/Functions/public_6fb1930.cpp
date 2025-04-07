#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1938 _public_6fb1938
#define public_6fb1940 _public_6fb1940

PROC_DECLARE(0x6fb1930, internal_6fb1930, public_6fb1930);
/* CHUNK of public_6f9ac80 */
extern "C" NAKED register_t __cdecl internal_6fb1930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eec8d0
        public_6fb1938 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fb1940 : nop
        mov eax, offset public_6fc6fc0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1930)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1938, public_6fb1938)
        ASM_EXPORT_ENTRY_LAST(0x6fb1940, public_6fb1940)
    }
}

#undef public_6fb1938
#undef public_6fb1940

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1938 = __AsmFindLabelExport(&internal_6fb1930, 0x6fb1938);
extern "C" void const* const public_6fb1940 = __AsmFindLabelExport(&internal_6fb1930, 0x6fb1940);
