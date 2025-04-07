#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393c88 _public_6393c88
#define public_6393c93 _public_6393c93
#define public_6393c9e _public_6393c9e

PROC_DECLARE(0x6393c80, internal_6393c80, public_6393c80);
/* CHUNK of public_62a25f0 */
extern "C" NAKED register_t __cdecl internal_6393c80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_627cae0
        public_6393c88 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        jmp public_6269110
        public_6393c93 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x78
        jmp public_62a68e0
        public_6393c9e : nop
        mov eax, offset public_63ad0a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393c80)
        ASM_EXPORT_ENTRY_FIRST(0x6393c88, public_6393c88)
        ASM_EXPORT_ENTRY(0x6393c93, public_6393c93)
        ASM_EXPORT_ENTRY_LAST(0x6393c9e, public_6393c9e)
    }
}

#undef public_6393c88
#undef public_6393c93
#undef public_6393c9e

#pragma init_seg(compiler)
extern "C" void const* const public_6393c88 = __AsmFindLabelExport(&internal_6393c80, 0x6393c88);
extern "C" void const* const public_6393c93 = __AsmFindLabelExport(&internal_6393c80, 0x6393c93);
extern "C" void const* const public_6393c9e = __AsmFindLabelExport(&internal_6393c80, 0x6393c9e);
