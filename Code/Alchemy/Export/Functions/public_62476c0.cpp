#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62476cb _public_62476cb

PROC_DECLARE(0x62476c0, internal_62476c0, public_62476c0);
/* CHUNK of public_62097e0 */
extern "C" NAKED register_t __cdecl internal_62476c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209d60
        public_62476cb : nop
        mov eax, offset public_62504b8
        jmp public_6246126
        UNREACHABLE_TRAP(0x62476c0)
        ASM_EXPORT_ENTRY_SINGLE(0x62476cb, public_62476cb)
    }
}

#undef public_62476cb

#pragma init_seg(compiler)
extern "C" void const* const public_62476cb = __AsmFindLabelExport(&internal_62476c0, 0x62476cb);
