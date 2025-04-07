#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63989fb _public_63989fb
#define public_6398a06 _public_6398a06

PROC_DECLARE(0x63989f0, internal_63989f0, public_63989f0);
/* CHUNK of public_637a750 */
extern "C" NAKED register_t __cdecl internal_63989f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_63449d0
        public_63989fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_63449d0
        public_6398a06 : nop
        mov eax, offset public_63b3070
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63989f0)
        ASM_EXPORT_ENTRY_FIRST(0x63989fb, public_63989fb)
        ASM_EXPORT_ENTRY_LAST(0x6398a06, public_6398a06)
    }
}

#undef public_63989fb
#undef public_6398a06

#pragma init_seg(compiler)
extern "C" void const* const public_63989fb = __AsmFindLabelExport(&internal_63989f0, 0x63989fb);
extern "C" void const* const public_6398a06 = __AsmFindLabelExport(&internal_63989f0, 0x6398a06);
