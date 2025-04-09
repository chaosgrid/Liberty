#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf2bf _public_5bf2bf

PROC_DECLARE(0x5bf2b0, internal_5bf2b0, public_5bf2b0);
/* CHUNK of public_4f4930 */
extern "C" NAKED register_t __cdecl internal_5bf2b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp dword ptr ds : [public_5c658c]
        public_5bf2bf : nop
        mov eax, offset public_5f91dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf2b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf2bf, public_5bf2bf)
    }
}

#undef public_5bf2bf

#pragma init_seg(compiler)
extern "C" void const* const public_5bf2bf = __AsmFindLabelExport(&internal_5bf2b0, 0x5bf2bf);
