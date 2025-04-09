#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_592170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4a58 _public_5c4a58

PROC_DECLARE(0x5c4a50, internal_5c4a50, public_5c4a50);
/* CHUNK of public_592080 */
extern "C" NAKED register_t __cdecl internal_5c4a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_592170
        public_5c4a58 : nop
        mov eax, offset public_5fe720
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4a50)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4a58, public_5c4a58)
    }
}

#undef public_5c4a58

#pragma init_seg(compiler)
extern "C" void const* const public_5c4a58 = __AsmFindLabelExport(&internal_5c4a50, 0x5c4a58);
