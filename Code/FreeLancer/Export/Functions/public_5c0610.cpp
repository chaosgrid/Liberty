#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0618 _public_5c0618

PROC_DECLARE(0x5c0610, internal_5c0610, public_5c0610);
/* CHUNK of public_530160 */
extern "C" NAKED register_t __cdecl internal_5c0610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5394b0
        public_5c0618 : nop
        mov eax, offset public_5fa76c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0610)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0618, public_5c0618)
    }
}

#undef public_5c0618

#pragma init_seg(compiler)
extern "C" void const* const public_5c0618 = __AsmFindLabelExport(&internal_5c0610, 0x5c0618);
