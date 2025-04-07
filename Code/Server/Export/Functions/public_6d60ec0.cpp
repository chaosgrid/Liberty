#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60ecb _public_6d60ecb
#define public_6d60eda _public_6d60eda

PROC_DECLARE(0x6d60ec0, internal_6d60ec0, public_6d60ec0);
/* CHUNK of public_6d00e80 */
extern "C" NAKED register_t __cdecl internal_6d60ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6ce6710
        public_6d60ecb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA0
        jmp dword ptr ds : [public_6d643f0]
        public_6d60eda : nop
        mov eax, offset public_6d71a24
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ec0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60ecb, public_6d60ecb)
        ASM_EXPORT_ENTRY_LAST(0x6d60eda, public_6d60eda)
    }
}

#undef public_6d60ecb
#undef public_6d60eda

#pragma init_seg(compiler)
extern "C" void const* const public_6d60ecb = __AsmFindLabelExport(&internal_6d60ec0, 0x6d60ecb);
extern "C" void const* const public_6d60eda = __AsmFindLabelExport(&internal_6d60ec0, 0x6d60eda);
