#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e790);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392d98 _public_6392d98

PROC_DECLARE(0x6392d90, internal_6392d90, public_6392d90);
/* CHUNK of public_627d460 */
extern "C" NAKED register_t __cdecl internal_6392d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627e790
        public_6392d98 : nop
        mov eax, offset public_63abc78
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392d90)
        ASM_EXPORT_ENTRY_SINGLE(0x6392d98, public_6392d98)
    }
}

#undef public_6392d98

#pragma init_seg(compiler)
extern "C" void const* const public_6392d98 = __AsmFindLabelExport(&internal_6392d90, 0x6392d98);
