#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262400);
CLANG_FORWARD_PROC_SYMBOL(public_62656c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392588 _public_6392588
#define public_6392593 _public_6392593
#define public_639259e _public_639259e

PROC_DECLARE(0x6392580, internal_6392580, public_6392580);
/* CHUNK of public_6265560 */
extern "C" NAKED register_t __cdecl internal_6392580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62a68e0
        public_6392588 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_6262400
        public_6392593 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        jmp public_62656c0
        public_639259e : nop
        mov eax, offset public_63ab0fc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392580)
        ASM_EXPORT_ENTRY_FIRST(0x6392588, public_6392588)
        ASM_EXPORT_ENTRY(0x6392593, public_6392593)
        ASM_EXPORT_ENTRY_LAST(0x639259e, public_639259e)
    }
}

#undef public_6392588
#undef public_6392593
#undef public_639259e

#pragma init_seg(compiler)
extern "C" void const* const public_6392588 = __AsmFindLabelExport(&internal_6392580, 0x6392588);
extern "C" void const* const public_6392593 = __AsmFindLabelExport(&internal_6392580, 0x6392593);
extern "C" void const* const public_639259e = __AsmFindLabelExport(&internal_6392580, 0x639259e);
