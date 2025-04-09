#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba0b8 _public_5ba0b8

PROC_DECLARE(0x5ba0b0, internal_5ba0b0, public_5ba0b0);
/* CHUNK of public_456ee0 */
extern "C" NAKED register_t __cdecl internal_5ba0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_44fd80
        public_5ba0b8 : nop
        mov eax, offset public_5f4450
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba0b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba0b8, public_5ba0b8)
    }
}

#undef public_5ba0b8

#pragma init_seg(compiler)
extern "C" void const* const public_5ba0b8 = __AsmFindLabelExport(&internal_5ba0b0, 0x5ba0b8);
