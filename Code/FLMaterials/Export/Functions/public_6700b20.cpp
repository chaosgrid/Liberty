#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700b28 _public_6700b28
#define public_6700b30 _public_6700b30
#define public_6700b38 _public_6700b38
#define public_6700b40 _public_6700b40

PROC_DECLARE(0x6700b20, internal_6700b20, public_6700b20);
/* CHUNK of public_66f2ec0 */
extern "C" NAKED register_t __cdecl internal_6700b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_66f3080
        public_6700b28 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_66f3080
        public_6700b30 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_66f3080
        public_6700b38 : nop
        lea ecx, ss:[ebp+8]
        jmp public_66ff6b0
        public_6700b40 : nop
        mov eax, offset public_6703324
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700b20)
        ASM_EXPORT_ENTRY_FIRST(0x6700b28, public_6700b28)
        ASM_EXPORT_ENTRY(0x6700b30, public_6700b30)
        ASM_EXPORT_ENTRY(0x6700b38, public_6700b38)
        ASM_EXPORT_ENTRY_LAST(0x6700b40, public_6700b40)
    }
}

#undef public_6700b28
#undef public_6700b30
#undef public_6700b38
#undef public_6700b40

#pragma init_seg(compiler)
extern "C" void const* const public_6700b28 = __AsmFindLabelExport(&internal_6700b20, 0x6700b28);
extern "C" void const* const public_6700b30 = __AsmFindLabelExport(&internal_6700b20, 0x6700b30);
extern "C" void const* const public_6700b38 = __AsmFindLabelExport(&internal_6700b20, 0x6700b38);
extern "C" void const* const public_6700b40 = __AsmFindLabelExport(&internal_6700b20, 0x6700b40);
