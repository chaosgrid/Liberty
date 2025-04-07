#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a358 _public_41a358

PROC_DECLARE(0x41a350, internal_41a350, public_41a350);
/* CHUNK of public_40e9b0 */
extern "C" NAKED register_t __cdecl internal_41a350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40e910
        public_41a358 : nop
        mov eax, offset public_41f4c8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a350)
        ASM_EXPORT_ENTRY_SINGLE(0x41a358, public_41a358)
    }
}

#undef public_41a358

#pragma init_seg(compiler)
extern "C" void const* const public_41a358 = __AsmFindLabelExport(&internal_41a350, 0x41a358);
