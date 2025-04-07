#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62492fb _public_62492fb

PROC_DECLARE(0x62492f0, internal_62492f0, public_62492f0);
/* CHUNK of public_6229eb0 */
extern "C" NAKED register_t __cdecl internal_62492f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209bb0
        public_62492fb : nop
        mov eax, offset public_625225c
        jmp public_6246126
        UNREACHABLE_TRAP(0x62492f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62492fb, public_62492fb)
    }
}

#undef public_62492fb

#pragma init_seg(compiler)
extern "C" void const* const public_62492fb = __AsmFindLabelExport(&internal_62492f0, 0x62492fb);
