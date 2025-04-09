#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5978 _public_5c5978

PROC_DECLARE(0x5c5970, internal_5c5970, public_5c5970);
/* CHUNK of public_5b23c0 */
extern "C" NAKED register_t __cdecl internal_5c5970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp public_576010
        public_5c5978 : nop
        mov eax, offset public_5ff74c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5970)
        ASM_EXPORT_ENTRY_SINGLE(0x5c5978, public_5c5978)
    }
}

#undef public_5c5978

#pragma init_seg(compiler)
extern "C" void const* const public_5c5978 = __AsmFindLabelExport(&internal_5c5970, 0x5c5978);
