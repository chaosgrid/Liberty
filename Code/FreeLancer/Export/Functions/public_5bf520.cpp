#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf528 _public_5bf528

PROC_DECLARE(0x5bf520, internal_5bf520, public_5bf520);
/* CHUNK of public_4fe0e0 */
extern "C" NAKED register_t __cdecl internal_5bf520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4de730
        public_5bf528 : nop
        mov eax, offset public_5f9510
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf520)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf528, public_5bf528)
    }
}

#undef public_5bf528

#pragma init_seg(compiler)
extern "C" void const* const public_5bf528 = __AsmFindLabelExport(&internal_5bf520, 0x5bf528);
