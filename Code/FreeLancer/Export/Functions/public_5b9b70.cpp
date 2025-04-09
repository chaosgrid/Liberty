#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9b79 _public_5b9b79

PROC_DECLARE(0x5b9b70, internal_5b9b70, public_5b9b70);
/* CHUNK of public_449d50 */
extern "C" NAKED register_t __cdecl internal_5b9b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c61cc]
        public_5b9b79 : nop
        mov eax, offset public_5f3bf8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9b70)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9b79, public_5b9b79)
    }
}

#undef public_5b9b79

#pragma init_seg(compiler)
extern "C" void const* const public_5b9b79 = __AsmFindLabelExport(&internal_5b9b70, 0x5b9b79);
