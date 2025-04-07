#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faceb8 _public_6faceb8
#define public_6facec0 _public_6facec0
#define public_6facec8 _public_6facec8
#define public_6faced0 _public_6faced0
#define public_6faced8 _public_6faced8
#define public_6facee0 _public_6facee0

PROC_DECLARE(0x6faceb0, internal_6faceb0, public_6faceb0);
/* CHUNK of public_6f06b20 */
extern "C" NAKED register_t __cdecl internal_6faceb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_6ecfa90
        public_6faceb8 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6f28e10
        public_6facec0 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6facec8 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6faced0 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6faced8 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6facee0 : nop
        mov eax, offset public_6fc1c04
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faceb0)
        ASM_EXPORT_ENTRY_FIRST(0x6faceb8, public_6faceb8)
        ASM_EXPORT_ENTRY(0x6facec0, public_6facec0)
        ASM_EXPORT_ENTRY(0x6facec8, public_6facec8)
        ASM_EXPORT_ENTRY(0x6faced0, public_6faced0)
        ASM_EXPORT_ENTRY(0x6faced8, public_6faced8)
        ASM_EXPORT_ENTRY_LAST(0x6facee0, public_6facee0)
    }
}

#undef public_6faceb8
#undef public_6facec0
#undef public_6facec8
#undef public_6faced0
#undef public_6faced8
#undef public_6facee0

#pragma init_seg(compiler)
extern "C" void const* const public_6faceb8 = __AsmFindLabelExport(&internal_6faceb0, 0x6faceb8);
extern "C" void const* const public_6facec0 = __AsmFindLabelExport(&internal_6faceb0, 0x6facec0);
extern "C" void const* const public_6facec8 = __AsmFindLabelExport(&internal_6faceb0, 0x6facec8);
extern "C" void const* const public_6faced0 = __AsmFindLabelExport(&internal_6faceb0, 0x6faced0);
extern "C" void const* const public_6faced8 = __AsmFindLabelExport(&internal_6faceb0, 0x6faced8);
extern "C" void const* const public_6facee0 = __AsmFindLabelExport(&internal_6faceb0, 0x6facee0);
