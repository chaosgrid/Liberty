#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395228 _public_6395228
#define public_6395233 _public_6395233

PROC_DECLARE(0x6395220, internal_6395220, public_6395220);
/* CHUNK of public_62d4e60 */
extern "C" NAKED register_t __cdecl internal_6395220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395228 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62881d0
        public_6395233 : nop
        mov eax, offset public_63aecb4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395220)
        ASM_EXPORT_ENTRY_FIRST(0x6395228, public_6395228)
        ASM_EXPORT_ENTRY_LAST(0x6395233, public_6395233)
    }
}

#undef public_6395228
#undef public_6395233

#pragma init_seg(compiler)
extern "C" void const* const public_6395228 = __AsmFindLabelExport(&internal_6395220, 0x6395228);
extern "C" void const* const public_6395233 = __AsmFindLabelExport(&internal_6395220, 0x6395233);
