#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393ad8 _public_6393ad8
#define public_6393ae0 _public_6393ae0
#define public_6393ae8 _public_6393ae8

PROC_DECLARE(0x6393ad0, internal_6393ad0, public_6393ad0);
/* CHUNK of public_629e270 */
extern "C" NAKED register_t __cdecl internal_6393ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x4C]
        jmp public_62881d0
        public_6393ad8 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_629dbd0
        public_6393ae0 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_62881d0
        public_6393ae8 : nop
        mov eax, offset public_63acdf8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393ad0)
        ASM_EXPORT_ENTRY_FIRST(0x6393ad8, public_6393ad8)
        ASM_EXPORT_ENTRY(0x6393ae0, public_6393ae0)
        ASM_EXPORT_ENTRY_LAST(0x6393ae8, public_6393ae8)
    }
}

#undef public_6393ad8
#undef public_6393ae0
#undef public_6393ae8

#pragma init_seg(compiler)
extern "C" void const* const public_6393ad8 = __AsmFindLabelExport(&internal_6393ad0, 0x6393ad8);
extern "C" void const* const public_6393ae0 = __AsmFindLabelExport(&internal_6393ad0, 0x6393ae0);
extern "C" void const* const public_6393ae8 = __AsmFindLabelExport(&internal_6393ad0, 0x6393ae8);
