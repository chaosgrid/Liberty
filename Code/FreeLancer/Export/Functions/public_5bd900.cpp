#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd909 _public_5bd909

PROC_DECLARE(0x5bd900, internal_5bd900, public_5bd900);
/* CHUNK of public_4c95b0 */
extern "C" NAKED register_t __cdecl internal_5bd900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bd909 : nop
        mov eax, offset public_5f7d74
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd900)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd909, public_5bd909)
    }
}

#undef public_5bd909

#pragma init_seg(compiler)
extern "C" void const* const public_5bd909 = __AsmFindLabelExport(&internal_5bd900, 0x5bd909);
