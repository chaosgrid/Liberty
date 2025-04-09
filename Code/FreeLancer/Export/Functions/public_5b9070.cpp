#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9078 _public_5b9078
#define public_5b9080 _public_5b9080
#define public_5b9088 _public_5b9088

PROC_DECLARE(0x5b9070, internal_5b9070, public_5b9070);
/* CHUNK of public_433f40 */
extern "C" NAKED register_t __cdecl internal_5b9070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x14]
        jmp public_526a20
        public_5b9078 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_42cfd0
        public_5b9080 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_42cfd0
        public_5b9088 : nop
        mov eax, offset public_5f2f8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9070)
        ASM_EXPORT_ENTRY_FIRST(0x5b9078, public_5b9078)
        ASM_EXPORT_ENTRY(0x5b9080, public_5b9080)
        ASM_EXPORT_ENTRY_LAST(0x5b9088, public_5b9088)
    }
}

#undef public_5b9078
#undef public_5b9080
#undef public_5b9088

#pragma init_seg(compiler)
extern "C" void const* const public_5b9078 = __AsmFindLabelExport(&internal_5b9070, 0x5b9078);
extern "C" void const* const public_5b9080 = __AsmFindLabelExport(&internal_5b9070, 0x5b9080);
extern "C" void const* const public_5b9088 = __AsmFindLabelExport(&internal_5b9070, 0x5b9088);
