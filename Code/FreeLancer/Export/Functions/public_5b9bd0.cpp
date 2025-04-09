#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9bd8 _public_5b9bd8
#define public_5b9be0 _public_5b9be0
#define public_5b9be8 _public_5b9be8
#define public_5b9bf0 _public_5b9bf0
#define public_5b9bf8 _public_5b9bf8
#define public_5b9c00 _public_5b9c00
#define public_5b9c08 _public_5b9c08

PROC_DECLARE(0x5b9bd0, internal_5b9bd0, public_5b9bd0);
/* CHUNK of public_44af60 */
extern "C" NAKED register_t __cdecl internal_5b9bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9bd8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9be0 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9be8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9bf0 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9bf8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b9c00 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_526a20
        public_5b9c08 : nop
        mov eax, offset public_5f3c9c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9bd0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9bd8, public_5b9bd8)
        ASM_EXPORT_ENTRY(0x5b9be0, public_5b9be0)
        ASM_EXPORT_ENTRY(0x5b9be8, public_5b9be8)
        ASM_EXPORT_ENTRY(0x5b9bf0, public_5b9bf0)
        ASM_EXPORT_ENTRY(0x5b9bf8, public_5b9bf8)
        ASM_EXPORT_ENTRY(0x5b9c00, public_5b9c00)
        ASM_EXPORT_ENTRY_LAST(0x5b9c08, public_5b9c08)
    }
}

#undef public_5b9bd8
#undef public_5b9be0
#undef public_5b9be8
#undef public_5b9bf0
#undef public_5b9bf8
#undef public_5b9c00
#undef public_5b9c08

#pragma init_seg(compiler)
extern "C" void const* const public_5b9bd8 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9bd8);
extern "C" void const* const public_5b9be0 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9be0);
extern "C" void const* const public_5b9be8 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9be8);
extern "C" void const* const public_5b9bf0 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9bf0);
extern "C" void const* const public_5b9bf8 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9bf8);
extern "C" void const* const public_5b9c00 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9c00);
extern "C" void const* const public_5b9c08 = __AsmFindLabelExport(&internal_5b9bd0, 0x5b9c08);
