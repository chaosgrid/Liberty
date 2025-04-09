#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4df8 _public_5c4df8

PROC_DECLARE(0x5c4df0, internal_5c4df0, public_5c4df0);
/* CHUNK of public_59cf70 */
extern "C" NAKED register_t __cdecl internal_5c4df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c4df8 : nop
        mov eax, offset public_5feba0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4df0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4df8, public_5c4df8)
    }
}

#undef public_5c4df8

#pragma init_seg(compiler)
extern "C" void const* const public_5c4df8 = __AsmFindLabelExport(&internal_5c4df0, 0x5c4df8);
