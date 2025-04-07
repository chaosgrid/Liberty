#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247378 _public_6247378

PROC_DECLARE(0x6247370, internal_6247370, public_6247370);
/* CHUNK of public_6204e30 */
extern "C" NAKED register_t __cdecl internal_6247370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6247378 : nop
        mov eax, offset public_62500e8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247370)
        ASM_EXPORT_ENTRY_SINGLE(0x6247378, public_6247378)
    }
}

#undef public_6247378

#pragma init_seg(compiler)
extern "C" void const* const public_6247378 = __AsmFindLabelExport(&internal_6247370, 0x6247378);
