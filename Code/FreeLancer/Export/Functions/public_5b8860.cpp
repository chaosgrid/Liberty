#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b886b _public_5b886b

PROC_DECLARE(0x5b8860, internal_5b8860, public_5b8860);
/* CHUNK of public_414d10 */
extern "C" NAKED register_t __cdecl internal_5b8860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_4de730
        public_5b886b : nop
        mov eax, offset public_5f26c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8860)
        ASM_EXPORT_ENTRY_SINGLE(0x5b886b, public_5b886b)
    }
}

#undef public_5b886b

#pragma init_seg(compiler)
extern "C" void const* const public_5b886b = __AsmFindLabelExport(&internal_5b8860, 0x5b886b);
