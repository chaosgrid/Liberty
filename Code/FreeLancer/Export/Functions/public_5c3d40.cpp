#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3d48 _public_5c3d48

PROC_DECLARE(0x5c3d40, internal_5c3d40, public_5c3d40);
/* CHUNK of public_57b1b0 */
extern "C" NAKED register_t __cdecl internal_5c3d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_579620
        public_5c3d48 : nop
        mov eax, offset public_5fd9f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3d40)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3d48, public_5c3d48)
    }
}

#undef public_5c3d48

#pragma init_seg(compiler)
extern "C" void const* const public_5c3d48 = __AsmFindLabelExport(&internal_5c3d40, 0x5c3d48);
