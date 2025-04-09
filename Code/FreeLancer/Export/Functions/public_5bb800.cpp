#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb809 _public_5bb809
#define public_5bb811 _public_5bb811

PROC_DECLARE(0x5bb800, internal_5bb800, public_5bb800);
/* CHUNK of public_46aeb0 */
extern "C" NAKED register_t __cdecl internal_5bb800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c8]
        public_5bb809 : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5bb811 : nop
        mov eax, offset public_5f5a8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb800)
        ASM_EXPORT_ENTRY_FIRST(0x5bb809, public_5bb809)
        ASM_EXPORT_ENTRY_LAST(0x5bb811, public_5bb811)
    }
}

#undef public_5bb809
#undef public_5bb811

#pragma init_seg(compiler)
extern "C" void const* const public_5bb809 = __AsmFindLabelExport(&internal_5bb800, 0x5bb809);
extern "C" void const* const public_5bb811 = __AsmFindLabelExport(&internal_5bb800, 0x5bb811);
