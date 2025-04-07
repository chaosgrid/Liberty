#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a338 _public_41a338

PROC_DECLARE(0x41a330, internal_41a330, public_41a330);
/* CHUNK of public_40e940 */
extern "C" NAKED register_t __cdecl internal_41a330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40e910
        public_41a338 : nop
        mov eax, offset public_41f4a4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a330)
        ASM_EXPORT_ENTRY_SINGLE(0x41a338, public_41a338)
    }
}

#undef public_41a338

#pragma init_seg(compiler)
extern "C" void const* const public_41a338 = __AsmFindLabelExport(&internal_41a330, 0x41a338);
