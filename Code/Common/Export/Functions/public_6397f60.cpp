#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc20);
CLANG_FORWARD_PROC_SYMBOL(public_634dca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397f68 _public_6397f68
#define public_6397f70 _public_6397f70

PROC_DECLARE(0x6397f60, internal_6397f60, public_6397f60);
/* CHUNK of public_634dd60 */
extern "C" NAKED register_t __cdecl internal_6397f60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dca0
        public_6397f68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dc20
        public_6397f70 : nop
        mov eax, offset public_63b2320
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397f60)
        ASM_EXPORT_ENTRY_FIRST(0x6397f68, public_6397f68)
        ASM_EXPORT_ENTRY_LAST(0x6397f70, public_6397f70)
    }
}

#undef public_6397f68
#undef public_6397f70

#pragma init_seg(compiler)
extern "C" void const* const public_6397f68 = __AsmFindLabelExport(&internal_6397f60, 0x6397f68);
extern "C" void const* const public_6397f70 = __AsmFindLabelExport(&internal_6397f60, 0x6397f70);
