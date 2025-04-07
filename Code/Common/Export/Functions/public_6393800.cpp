#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393808 _public_6393808
#define public_6393810 _public_6393810

PROC_DECLARE(0x6393800, internal_6393800, public_6393800);
/* CHUNK of public_6296d00 */
extern "C" NAKED register_t __cdecl internal_6393800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6299380
        public_6393808 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62881d0
        public_6393810 : nop
        mov eax, offset public_63aca3c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393800)
        ASM_EXPORT_ENTRY_FIRST(0x6393808, public_6393808)
        ASM_EXPORT_ENTRY_LAST(0x6393810, public_6393810)
    }
}

#undef public_6393808
#undef public_6393810

#pragma init_seg(compiler)
extern "C" void const* const public_6393808 = __AsmFindLabelExport(&internal_6393800, 0x6393808);
extern "C" void const* const public_6393810 = __AsmFindLabelExport(&internal_6393800, 0x6393810);
