#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393848 _public_6393848
#define public_6393856 _public_6393856

PROC_DECLARE(0x6393840, internal_6393840, public_6393840);
/* CHUNK of public_6297070 */
extern "C" NAKED register_t __cdecl internal_6393840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6299380
        public_6393848 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x250
        jmp public_62881d0
        public_6393856 : nop
        mov eax, offset public_63aca94
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393840)
        ASM_EXPORT_ENTRY_FIRST(0x6393848, public_6393848)
        ASM_EXPORT_ENTRY_LAST(0x6393856, public_6393856)
    }
}

#undef public_6393848
#undef public_6393856

#pragma init_seg(compiler)
extern "C" void const* const public_6393848 = __AsmFindLabelExport(&internal_6393840, 0x6393848);
extern "C" void const* const public_6393856 = __AsmFindLabelExport(&internal_6393840, 0x6393856);
