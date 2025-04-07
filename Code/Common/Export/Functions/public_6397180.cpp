#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397188 _public_6397188
#define public_6397194 _public_6397194

PROC_DECLARE(0x6397180, internal_6397180, public_6397180);
/* CHUNK of public_6328770 */
extern "C" NAKED register_t __cdecl internal_6397180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6329710
        public_6397188 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6399178]
        public_6397194 : nop
        mov eax, offset public_63b1294
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397180)
        ASM_EXPORT_ENTRY_FIRST(0x6397188, public_6397188)
        ASM_EXPORT_ENTRY_LAST(0x6397194, public_6397194)
    }
}

#undef public_6397188
#undef public_6397194

#pragma init_seg(compiler)
extern "C" void const* const public_6397188 = __AsmFindLabelExport(&internal_6397180, 0x6397188);
extern "C" void const* const public_6397194 = __AsmFindLabelExport(&internal_6397180, 0x6397194);
