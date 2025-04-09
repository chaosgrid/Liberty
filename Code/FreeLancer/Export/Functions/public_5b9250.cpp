#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9259 _public_5b9259

PROC_DECLARE(0x5b9250, internal_5b9250, public_5b9250);
/* CHUNK of public_4379b0 */
extern "C" NAKED register_t __cdecl internal_5b9250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c613c]
        public_5b9259 : nop
        mov eax, offset public_5f31bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9250)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9259, public_5b9259)
    }
}

#undef public_5b9259

#pragma init_seg(compiler)
extern "C" void const* const public_5b9259 = __AsmFindLabelExport(&internal_5b9250, 0x5b9259);
