#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6358b00);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398128 _public_6398128
#define public_6398130 _public_6398130
#define public_6398138 _public_6398138
#define public_6398140 _public_6398140
#define public_6398148 _public_6398148

PROC_DECLARE(0x6398120, internal_6398120, public_6398120);
/* CHUNK of public_6358680 */
extern "C" NAKED register_t __cdecl internal_6398120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_63449d0
        public_6398128 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_63449d0
        public_6398130 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6358b00
        public_6398138 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_63449d0
        public_6398140 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_63449d0
        public_6398148 : nop
        mov eax, offset public_63b2560
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398120)
        ASM_EXPORT_ENTRY_FIRST(0x6398128, public_6398128)
        ASM_EXPORT_ENTRY(0x6398130, public_6398130)
        ASM_EXPORT_ENTRY(0x6398138, public_6398138)
        ASM_EXPORT_ENTRY(0x6398140, public_6398140)
        ASM_EXPORT_ENTRY_LAST(0x6398148, public_6398148)
    }
}

#undef public_6398128
#undef public_6398130
#undef public_6398138
#undef public_6398140
#undef public_6398148

#pragma init_seg(compiler)
extern "C" void const* const public_6398128 = __AsmFindLabelExport(&internal_6398120, 0x6398128);
extern "C" void const* const public_6398130 = __AsmFindLabelExport(&internal_6398120, 0x6398130);
extern "C" void const* const public_6398138 = __AsmFindLabelExport(&internal_6398120, 0x6398138);
extern "C" void const* const public_6398140 = __AsmFindLabelExport(&internal_6398120, 0x6398140);
extern "C" void const* const public_6398148 = __AsmFindLabelExport(&internal_6398120, 0x6398148);
