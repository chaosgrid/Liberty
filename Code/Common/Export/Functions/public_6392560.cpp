#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262400);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392568 _public_6392568
#define public_6392573 _public_6392573

PROC_DECLARE(0x6392560, internal_6392560, public_6392560);
/* CHUNK of public_6265450 */
extern "C" NAKED register_t __cdecl internal_6392560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62a68e0
        public_6392568 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6262400
        public_6392573 : nop
        mov eax, offset public_63ab0c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392560)
        ASM_EXPORT_ENTRY_FIRST(0x6392568, public_6392568)
        ASM_EXPORT_ENTRY_LAST(0x6392573, public_6392573)
    }
}

#undef public_6392568
#undef public_6392573

#pragma init_seg(compiler)
extern "C" void const* const public_6392568 = __AsmFindLabelExport(&internal_6392560, 0x6392568);
extern "C" void const* const public_6392573 = __AsmFindLabelExport(&internal_6392560, 0x6392573);
