#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62474fb _public_62474fb

PROC_DECLARE(0x62474f0, internal_62474f0, public_62474f0);
/* CHUNK of public_6207490 */
extern "C" NAKED register_t __cdecl internal_62474f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209ea0
        public_62474fb : nop
        mov eax, offset public_62502a0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62474f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62474fb, public_62474fb)
    }
}

#undef public_62474fb

#pragma init_seg(compiler)
extern "C" void const* const public_62474fb = __AsmFindLabelExport(&internal_62474f0, 0x62474fb);
