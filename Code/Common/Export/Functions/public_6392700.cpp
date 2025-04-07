#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392708 _public_6392708

PROC_DECLARE(0x6392700, internal_6392700, public_6392700);
/* CHUNK of public_626d000 */
extern "C" NAKED register_t __cdecl internal_6392700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f1670
        public_6392708 : nop
        mov eax, offset public_63ab4a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392700)
        ASM_EXPORT_ENTRY_SINGLE(0x6392708, public_6392708)
    }
}

#undef public_6392708

#pragma init_seg(compiler)
extern "C" void const* const public_6392708 = __AsmFindLabelExport(&internal_6392700, 0x6392708);
