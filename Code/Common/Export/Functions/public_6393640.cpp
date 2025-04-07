#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393648 _public_6393648

PROC_DECLARE(0x6393640, internal_6393640, public_6393640);
/* CHUNK of public_6293d00 */
extern "C" NAKED register_t __cdecl internal_6393640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6292bf0
        public_6393648 : nop
        mov eax, offset public_63ac7c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393640)
        ASM_EXPORT_ENTRY_SINGLE(0x6393648, public_6393648)
    }
}

#undef public_6393648

#pragma init_seg(compiler)
extern "C" void const* const public_6393648 = __AsmFindLabelExport(&internal_6393640, 0x6393648);
