#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393828 _public_6393828
#define public_6393830 _public_6393830

PROC_DECLARE(0x6393820, internal_6393820, public_6393820);
/* CHUNK of public_6296f40 */
extern "C" NAKED register_t __cdecl internal_6393820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_6299380
        public_6393828 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6393830 : nop
        mov eax, offset public_63aca68
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393820)
        ASM_EXPORT_ENTRY_FIRST(0x6393828, public_6393828)
        ASM_EXPORT_ENTRY_LAST(0x6393830, public_6393830)
    }
}

#undef public_6393828
#undef public_6393830

#pragma init_seg(compiler)
extern "C" void const* const public_6393828 = __AsmFindLabelExport(&internal_6393820, 0x6393828);
extern "C" void const* const public_6393830 = __AsmFindLabelExport(&internal_6393820, 0x6393830);
