#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2540);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfe3b _public_65dfe3b

PROC_DECLARE(0x65dfe30, internal_65dfe30, public_65dfe30);
/* CHUNK of public_65d1000 */
extern "C" NAKED register_t __cdecl internal_65dfe30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_65d2540
        public_65dfe3b : nop
        mov eax, offset public_65e1e08
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfe30)
        ASM_EXPORT_ENTRY_SINGLE(0x65dfe3b, public_65dfe3b)
    }
}

#undef public_65dfe3b

#pragma init_seg(compiler)
extern "C" void const* const public_65dfe3b = __AsmFindLabelExport(&internal_65dfe30, 0x65dfe3b);
