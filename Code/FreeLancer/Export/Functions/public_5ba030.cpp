#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba038 _public_5ba038

PROC_DECLARE(0x5ba030, internal_5ba030, public_5ba030);
/* CHUNK of public_456360 */
extern "C" NAKED register_t __cdecl internal_5ba030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_576010
        public_5ba038 : nop
        mov eax, offset public_5f4368
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba030)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba038, public_5ba038)
    }
}

#undef public_5ba038

#pragma init_seg(compiler)
extern "C" void const* const public_5ba038 = __AsmFindLabelExport(&internal_5ba030, 0x5ba038);
