#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59538 _public_6f59538

PROC_DECLARE(0x6f59530, internal_6f59530, public_6f59530);
/* CHUNK of public_6f48660 */
extern "C" NAKED register_t __cdecl internal_6f59530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59538 : nop
        mov eax, offset public_6f5c744
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59530)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59538, public_6f59538)
    }
}

#undef public_6f59538

#pragma init_seg(compiler)
extern "C" void const* const public_6f59538 = __AsmFindLabelExport(&internal_6f59530, 0x6f59538);
