#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639274b _public_639274b
#define public_6392756 _public_6392756

PROC_DECLARE(0x6392740, internal_6392740, public_6392740);
/* CHUNK of public_626fa70 */
extern "C" NAKED register_t __cdecl internal_6392740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_62a68e0
        public_639274b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62a68e0
        public_6392756 : nop
        mov eax, offset public_63ab514
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392740)
        ASM_EXPORT_ENTRY_FIRST(0x639274b, public_639274b)
        ASM_EXPORT_ENTRY_LAST(0x6392756, public_6392756)
    }
}

#undef public_639274b
#undef public_6392756

#pragma init_seg(compiler)
extern "C" void const* const public_639274b = __AsmFindLabelExport(&internal_6392740, 0x639274b);
extern "C" void const* const public_6392756 = __AsmFindLabelExport(&internal_6392740, 0x6392756);
