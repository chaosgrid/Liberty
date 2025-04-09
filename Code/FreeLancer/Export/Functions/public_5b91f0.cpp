#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b91fc _public_5b91fc

PROC_DECLARE(0x5b91f0, internal_5b91f0, public_5b91f0);
/* CHUNK of public_437720 */
extern "C" NAKED register_t __cdecl internal_5b91f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x26C]
        jmp dword ptr ds : [public_5c6118]
        public_5b91fc : nop
        mov eax, offset public_5f3150
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b91f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b91fc, public_5b91fc)
    }
}

#undef public_5b91fc

#pragma init_seg(compiler)
extern "C" void const* const public_5b91fc = __AsmFindLabelExport(&internal_5b91f0, 0x5b91fc);
