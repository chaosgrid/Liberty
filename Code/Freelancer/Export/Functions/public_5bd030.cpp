#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd038 _public_5bd038

PROC_DECLARE(0x5bd030, internal_5bd030, public_5bd030);
/* CHUNK of public_4b2c10 */
extern "C" NAKED register_t __cdecl internal_5bd030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bd038 : nop
        mov eax, offset public_5f72b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd030)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd038, public_5bd038)
    }
}

#undef public_5bd038

#pragma init_seg(compiler)
extern "C" void const* const public_5bd038 = __AsmFindLabelExport(&internal_5bd030, 0x5bd038);
