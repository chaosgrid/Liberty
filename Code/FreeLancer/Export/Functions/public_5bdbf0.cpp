#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdbfb _public_5bdbfb

PROC_DECLARE(0x5bdbf0, internal_5bdbf0, public_5bdbf0);
/* CHUNK of public_4cab70 */
extern "C" NAKED register_t __cdecl internal_5bdbf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_59ef20
        public_5bdbfb : nop
        mov eax, offset public_5f803c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdbf0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bdbfb, public_5bdbfb)
    }
}

#undef public_5bdbfb

#pragma init_seg(compiler)
extern "C" void const* const public_5bdbfb = __AsmFindLabelExport(&internal_5bdbf0, 0x5bdbfb);
