#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63946e8 _public_63946e8
#define public_63946f6 _public_63946f6

PROC_DECLARE(0x63946e0, internal_63946e0, public_63946e0);
/* CHUNK of public_62b5850 */
extern "C" NAKED register_t __cdecl internal_63946e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_63946e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_63946f6 : nop
        mov eax, offset public_63adc84
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63946e0)
        ASM_EXPORT_ENTRY_FIRST(0x63946e8, public_63946e8)
        ASM_EXPORT_ENTRY_LAST(0x63946f6, public_63946f6)
    }
}

#undef public_63946e8
#undef public_63946f6

#pragma init_seg(compiler)
extern "C" void const* const public_63946e8 = __AsmFindLabelExport(&internal_63946e0, 0x63946e8);
extern "C" void const* const public_63946f6 = __AsmFindLabelExport(&internal_63946e0, 0x63946f6);
