#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9759 _public_5b9759

PROC_DECLARE(0x5b9750, internal_5b9750, public_5b9750);
/* CHUNK of public_443b10 */
extern "C" NAKED register_t __cdecl internal_5b9750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c6104]
        public_5b9759 : nop
        mov eax, offset public_5f3774
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9750)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9759, public_5b9759)
    }
}

#undef public_5b9759

#pragma init_seg(compiler)
extern "C" void const* const public_5b9759 = __AsmFindLabelExport(&internal_5b9750, 0x5b9759);
