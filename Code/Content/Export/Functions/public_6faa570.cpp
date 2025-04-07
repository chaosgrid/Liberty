#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa578 _public_6faa578
#define public_6faa580 _public_6faa580
#define public_6faa588 _public_6faa588

PROC_DECLARE(0x6faa570, internal_6faa570, public_6faa570);
/* CHUNK of public_6eb8d10 */
extern "C" NAKED register_t __cdecl internal_6faa570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6ecfa90
        public_6faa578 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6f28e10
        public_6faa580 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6faa588 : nop
        mov eax, offset public_6fbe920
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa570)
        ASM_EXPORT_ENTRY_FIRST(0x6faa578, public_6faa578)
        ASM_EXPORT_ENTRY(0x6faa580, public_6faa580)
        ASM_EXPORT_ENTRY_LAST(0x6faa588, public_6faa588)
    }
}

#undef public_6faa578
#undef public_6faa580
#undef public_6faa588

#pragma init_seg(compiler)
extern "C" void const* const public_6faa578 = __AsmFindLabelExport(&internal_6faa570, 0x6faa578);
extern "C" void const* const public_6faa580 = __AsmFindLabelExport(&internal_6faa570, 0x6faa580);
extern "C" void const* const public_6faa588 = __AsmFindLabelExport(&internal_6faa570, 0x6faa588);
