#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396b7b _public_6396b7b
#define public_6396b86 _public_6396b86
#define public_6396b92 _public_6396b92
#define public_6396b9e _public_6396b9e

PROC_DECLARE(0x6396b70, internal_6396b70, public_6396b70);
/* CHUNK of public_631c210 */
extern "C" NAKED register_t __cdecl internal_6396b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1974]
        jmp public_6263860
        public_6396b7b : nop
        lea ecx, ss:[ebp-0x1974]
        jmp public_6263310
        public_6396b86 : nop
        mov ecx, dword ptr ss : [ebp-0x19BC]
        jmp dword ptr ds : [public_63991ac]
        public_6396b92 : nop
        lea ecx, ss:[ebp-0x1974]
        jmp dword ptr ds : [public_63991ac]
        public_6396b9e : nop
        mov eax, offset public_63b0b00
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396b70)
        ASM_EXPORT_ENTRY_FIRST(0x6396b7b, public_6396b7b)
        ASM_EXPORT_ENTRY(0x6396b86, public_6396b86)
        ASM_EXPORT_ENTRY(0x6396b92, public_6396b92)
        ASM_EXPORT_ENTRY_LAST(0x6396b9e, public_6396b9e)
    }
}

#undef public_6396b7b
#undef public_6396b86
#undef public_6396b92
#undef public_6396b9e

#pragma init_seg(compiler)
extern "C" void const* const public_6396b7b = __AsmFindLabelExport(&internal_6396b70, 0x6396b7b);
extern "C" void const* const public_6396b86 = __AsmFindLabelExport(&internal_6396b70, 0x6396b86);
extern "C" void const* const public_6396b92 = __AsmFindLabelExport(&internal_6396b70, 0x6396b92);
extern "C" void const* const public_6396b9e = __AsmFindLabelExport(&internal_6396b70, 0x6396b9e);
