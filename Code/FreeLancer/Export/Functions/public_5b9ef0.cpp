#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9ef8 _public_5b9ef8

PROC_DECLARE(0x5b9ef0, internal_5b9ef0, public_5b9ef0);
/* CHUNK of public_454390 */
extern "C" NAKED register_t __cdecl internal_5b9ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x54]
        jmp public_44fd80
        public_5b9ef8 : nop
        mov eax, offset public_5f422c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9ef0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9ef8, public_5b9ef8)
    }
}

#undef public_5b9ef8

#pragma init_seg(compiler)
extern "C" void const* const public_5b9ef8 = __AsmFindLabelExport(&internal_5b9ef0, 0x5b9ef8);
