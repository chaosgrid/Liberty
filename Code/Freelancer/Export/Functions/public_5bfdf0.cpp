#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_517340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfdf8 _public_5bfdf8

PROC_DECLARE(0x5bfdf0, internal_5bfdf0, public_5bfdf0);
/* CHUNK of public_517180 */
extern "C" NAKED register_t __cdecl internal_5bfdf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_517340
        public_5bfdf8 : nop
        mov eax, offset public_5f9d7c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfdf0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfdf8, public_5bfdf8)
    }
}

#undef public_5bfdf8

#pragma init_seg(compiler)
extern "C" void const* const public_5bfdf8 = __AsmFindLabelExport(&internal_5bfdf0, 0x5bfdf8);
