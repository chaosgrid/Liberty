#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1518 _public_5c1518

PROC_DECLARE(0x5c1510, internal_5c1510, public_5c1510);
/* CHUNK of public_5581b0 */
extern "C" NAKED register_t __cdecl internal_5c1510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_4a2d30
        public_5c1518 : nop
        mov eax, offset public_5fb884
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1510)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1518, public_5c1518)
    }
}

#undef public_5c1518

#pragma init_seg(compiler)
extern "C" void const* const public_5c1518 = __AsmFindLabelExport(&internal_5c1510, 0x5c1518);
