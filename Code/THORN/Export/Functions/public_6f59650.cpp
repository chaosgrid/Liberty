#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59658 _public_6f59658

PROC_DECLARE(0x6f59650, internal_6f59650, public_6f59650);
/* CHUNK of public_6f49c20 */
extern "C" NAKED register_t __cdecl internal_6f59650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59658 : nop
        mov eax, offset public_6f5c898
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59650)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59658, public_6f59658)
    }
}

#undef public_6f59658

#pragma init_seg(compiler)
extern "C" void const* const public_6f59658 = __AsmFindLabelExport(&internal_6f59650, 0x6f59658);
