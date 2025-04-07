#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafa88 _public_6fafa88

PROC_DECLARE(0x6fafa80, internal_6fafa80, public_6fafa80);
/* CHUNK of public_6f5ff50 */
extern "C" NAKED register_t __cdecl internal_6fafa80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f68ec0
        public_6fafa88 : nop
        mov eax, offset public_6fc4ac0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafa80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafa88, public_6fafa88)
    }
}

#undef public_6fafa88

#pragma init_seg(compiler)
extern "C" void const* const public_6fafa88 = __AsmFindLabelExport(&internal_6fafa80, 0x6fafa88);
