#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624937b _public_624937b

PROC_DECLARE(0x6249370, internal_6249370, public_6249370);
/* CHUNK of public_622b140 */
extern "C" NAKED register_t __cdecl internal_6249370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_62022d0
        public_624937b : nop
        mov eax, offset public_62522f4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249370)
        ASM_EXPORT_ENTRY_SINGLE(0x624937b, public_624937b)
    }
}

#undef public_624937b

#pragma init_seg(compiler)
extern "C" void const* const public_624937b = __AsmFindLabelExport(&internal_6249370, 0x624937b);
