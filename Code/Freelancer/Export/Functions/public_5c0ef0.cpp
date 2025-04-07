#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0efb _public_5c0efb

PROC_DECLARE(0x5c0ef0, internal_5c0ef0, public_5c0ef0);
/* CHUNK of public_544710 */
extern "C" NAKED register_t __cdecl internal_5c0ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_502d90
        public_5c0efb : nop
        mov eax, offset public_5fb18c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ef0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0efb, public_5c0efb)
    }
}

#undef public_5c0efb

#pragma init_seg(compiler)
extern "C" void const* const public_5c0efb = __AsmFindLabelExport(&internal_5c0ef0, 0x5c0efb);
