#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1f98 _public_5c1f98
#define public_5c1fa0 _public_5c1fa0
#define public_5c1fa8 _public_5c1fa8
#define public_5c1fb0 _public_5c1fb0
#define public_5c1fb8 _public_5c1fb8
#define public_5c1fc0 _public_5c1fc0
#define public_5c1fc8 _public_5c1fc8

PROC_DECLARE(0x5c1f90, internal_5c1f90, public_5c1f90);
/* CHUNK of public_565a10 */
extern "C" NAKED register_t __cdecl internal_5c1f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x34]
        jmp public_405840
        public_5c1f98 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_405840
        public_5c1fa0 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_405840
        public_5c1fa8 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_405840
        public_5c1fb0 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_405840
        public_5c1fb8 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_405840
        public_5c1fc0 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_405840
        public_5c1fc8 : nop
        mov eax, offset public_5fc2b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1f90)
        ASM_EXPORT_ENTRY_FIRST(0x5c1f98, public_5c1f98)
        ASM_EXPORT_ENTRY(0x5c1fa0, public_5c1fa0)
        ASM_EXPORT_ENTRY(0x5c1fa8, public_5c1fa8)
        ASM_EXPORT_ENTRY(0x5c1fb0, public_5c1fb0)
        ASM_EXPORT_ENTRY(0x5c1fb8, public_5c1fb8)
        ASM_EXPORT_ENTRY(0x5c1fc0, public_5c1fc0)
        ASM_EXPORT_ENTRY_LAST(0x5c1fc8, public_5c1fc8)
    }
}

#undef public_5c1f98
#undef public_5c1fa0
#undef public_5c1fa8
#undef public_5c1fb0
#undef public_5c1fb8
#undef public_5c1fc0
#undef public_5c1fc8

#pragma init_seg(compiler)
extern "C" void const* const public_5c1f98 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1f98);
extern "C" void const* const public_5c1fa0 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fa0);
extern "C" void const* const public_5c1fa8 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fa8);
extern "C" void const* const public_5c1fb0 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fb0);
extern "C" void const* const public_5c1fb8 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fb8);
extern "C" void const* const public_5c1fc0 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fc0);
extern "C" void const* const public_5c1fc8 = __AsmFindLabelExport(&internal_5c1f90, 0x5c1fc8);
