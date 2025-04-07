#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393738 _public_6393738

PROC_DECLARE(0x6393730, internal_6393730, public_6393730);
/* CHUNK of public_6295880 */
extern "C" NAKED register_t __cdecl internal_6393730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393738 : nop
        mov eax, offset public_63ac950
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393730)
        ASM_EXPORT_ENTRY_SINGLE(0x6393738, public_6393738)
    }
}

#undef public_6393738

#pragma init_seg(compiler)
extern "C" void const* const public_6393738 = __AsmFindLabelExport(&internal_6393730, 0x6393738);
