#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c157b _public_5c157b

PROC_DECLARE(0x5c1570, internal_5c1570, public_5c1570);
/* CHUNK of public_5593d0 */
extern "C" NAKED register_t __cdecl internal_5c1570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_4de730
        public_5c157b : nop
        mov eax, offset public_5fb914
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1570)
        ASM_EXPORT_ENTRY_SINGLE(0x5c157b, public_5c157b)
    }
}

#undef public_5c157b

#pragma init_seg(compiler)
extern "C" void const* const public_5c157b = __AsmFindLabelExport(&internal_5c1570, 0x5c157b);
