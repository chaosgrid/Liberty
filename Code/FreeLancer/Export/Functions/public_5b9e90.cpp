#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9e98 _public_5b9e98

PROC_DECLARE(0x5b9e90, internal_5b9e90, public_5b9e90);
/* CHUNK of public_453480 */
extern "C" NAKED register_t __cdecl internal_5b9e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_44fd80
        public_5b9e98 : nop
        mov eax, offset public_5f41c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9e90)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9e98, public_5b9e98)
    }
}

#undef public_5b9e98

#pragma init_seg(compiler)
extern "C" void const* const public_5b9e98 = __AsmFindLabelExport(&internal_5b9e90, 0x5b9e98);
