#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392648 _public_6392648

PROC_DECLARE(0x6392640, internal_6392640, public_6392640);
/* CHUNK of public_6266330 */
extern "C" NAKED register_t __cdecl internal_6392640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6269110
        public_6392648 : nop
        mov eax, offset public_63ab230
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392640)
        ASM_EXPORT_ENTRY_SINGLE(0x6392648, public_6392648)
    }
}

#undef public_6392648

#pragma init_seg(compiler)
extern "C" void const* const public_6392648 = __AsmFindLabelExport(&internal_6392640, 0x6392648);
