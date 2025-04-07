#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63946c8 _public_63946c8
#define public_63946d0 _public_63946d0

PROC_DECLARE(0x63946c0, internal_63946c0, public_63946c0);
/* CHUNK of public_62b24d0 */
extern "C" NAKED register_t __cdecl internal_63946c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_62881d0
        public_63946c8 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_62881d0
        public_63946d0 : nop
        mov eax, offset public_63adc58
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63946c0)
        ASM_EXPORT_ENTRY_FIRST(0x63946c8, public_63946c8)
        ASM_EXPORT_ENTRY_LAST(0x63946d0, public_63946d0)
    }
}

#undef public_63946c8
#undef public_63946d0

#pragma init_seg(compiler)
extern "C" void const* const public_63946c8 = __AsmFindLabelExport(&internal_63946c0, 0x63946c8);
extern "C" void const* const public_63946d0 = __AsmFindLabelExport(&internal_63946c0, 0x63946d0);
