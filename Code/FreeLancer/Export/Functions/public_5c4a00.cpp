#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4a08 _public_5c4a08

PROC_DECLARE(0x5c4a00, internal_5c4a00, public_5c4a00);
/* CHUNK of public_591e30 */
extern "C" NAKED register_t __cdecl internal_5c4a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4a2d30
        public_5c4a08 : nop
        mov eax, offset public_5fe6c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4a00)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4a08, public_5c4a08)
    }
}

#undef public_5c4a08

#pragma init_seg(compiler)
extern "C" void const* const public_5c4a08 = __AsmFindLabelExport(&internal_5c4a00, 0x5c4a08);
