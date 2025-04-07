#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313a10);
CLANG_FORWARD_PROC_SYMBOL(public_6313ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6313bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63964fb _public_63964fb
#define public_6396506 _public_6396506
#define public_6396511 _public_6396511

PROC_DECLARE(0x63964f0, internal_63964f0, public_63964f0);
/* CHUNK of public_6313890 */
extern "C" NAKED register_t __cdecl internal_63964f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6313a10
        public_63964fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_6313ae0
        public_6396506 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6313bb0
        public_6396511 : nop
        mov eax, offset public_63b0404
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63964f0)
        ASM_EXPORT_ENTRY_FIRST(0x63964fb, public_63964fb)
        ASM_EXPORT_ENTRY(0x6396506, public_6396506)
        ASM_EXPORT_ENTRY_LAST(0x6396511, public_6396511)
    }
}

#undef public_63964fb
#undef public_6396506
#undef public_6396511

#pragma init_seg(compiler)
extern "C" void const* const public_63964fb = __AsmFindLabelExport(&internal_63964f0, 0x63964fb);
extern "C" void const* const public_6396506 = __AsmFindLabelExport(&internal_63964f0, 0x6396506);
extern "C" void const* const public_6396511 = __AsmFindLabelExport(&internal_63964f0, 0x6396511);
