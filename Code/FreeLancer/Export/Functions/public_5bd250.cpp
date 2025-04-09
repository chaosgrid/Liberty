#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd258 _public_5bd258

PROC_DECLARE(0x5bd250, internal_5bd250, public_5bd250);
/* CHUNK of public_4b6c80 */
extern "C" NAKED register_t __cdecl internal_5bd250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_477da0
        public_5bd258 : nop
        mov eax, offset public_5f752c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd250)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd258, public_5bd258)
    }
}

#undef public_5bd258

#pragma init_seg(compiler)
extern "C" void const* const public_5bd258 = __AsmFindLabelExport(&internal_5bd250, 0x5bd258);
