#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc298 _public_5bc298

PROC_DECLARE(0x5bc290, internal_5bc290, public_5bc290);
/* CHUNK of public_489cd0 */
extern "C" NAKED register_t __cdecl internal_5bc290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_489ec0
        public_5bc298 : nop
        mov eax, offset public_5f66a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc290)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc298, public_5bc298)
    }
}

#undef public_5bc298

#pragma init_seg(compiler)
extern "C" void const* const public_5bc298 = __AsmFindLabelExport(&internal_5bc290, 0x5bc298);
