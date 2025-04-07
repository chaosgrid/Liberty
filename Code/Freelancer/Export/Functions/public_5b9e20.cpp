#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9e28 _public_5b9e28

PROC_DECLARE(0x5b9e20, internal_5b9e20, public_5b9e20);
/* CHUNK of public_451240 */
extern "C" NAKED register_t __cdecl internal_5b9e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_44fd80
        public_5b9e28 : nop
        mov eax, offset public_5f4120
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9e20)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9e28, public_5b9e28)
    }
}

#undef public_5b9e28

#pragma init_seg(compiler)
extern "C" void const* const public_5b9e28 = __AsmFindLabelExport(&internal_5b9e20, 0x5b9e28);
