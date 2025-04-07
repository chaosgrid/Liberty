#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3d00);
CLANG_FORWARD_PROC_SYMBOL(public_62a42b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393d38 _public_6393d38
#define public_6393d40 _public_6393d40
#define public_6393d48 _public_6393d48
#define public_6393d50 _public_6393d50

PROC_DECLARE(0x6393d30, internal_6393d30, public_6393d30);
/* CHUNK of public_62a3bb0 */
extern "C" NAKED register_t __cdecl internal_6393d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_62a68e0
        public_6393d38 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_62a42b0
        public_6393d40 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_62a3d00
        public_6393d48 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_62a68e0
        public_6393d50 : nop
        mov eax, offset public_63ad17c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393d30)
        ASM_EXPORT_ENTRY_FIRST(0x6393d38, public_6393d38)
        ASM_EXPORT_ENTRY(0x6393d40, public_6393d40)
        ASM_EXPORT_ENTRY(0x6393d48, public_6393d48)
        ASM_EXPORT_ENTRY_LAST(0x6393d50, public_6393d50)
    }
}

#undef public_6393d38
#undef public_6393d40
#undef public_6393d48
#undef public_6393d50

#pragma init_seg(compiler)
extern "C" void const* const public_6393d38 = __AsmFindLabelExport(&internal_6393d30, 0x6393d38);
extern "C" void const* const public_6393d40 = __AsmFindLabelExport(&internal_6393d30, 0x6393d40);
extern "C" void const* const public_6393d48 = __AsmFindLabelExport(&internal_6393d30, 0x6393d48);
extern "C" void const* const public_6393d50 = __AsmFindLabelExport(&internal_6393d30, 0x6393d50);
