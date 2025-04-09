#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c070);
CLANG_FORWARD_PROC_SYMBOL(public_43c0f0);
CLANG_FORWARD_PROC_SYMBOL(public_43c2b0);
CLANG_FORWARD_PROC_SYMBOL(public_43c330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9368 _public_5b9368
#define public_5b9373 _public_5b9373
#define public_5b937b _public_5b937b
#define public_5b9383 _public_5b9383

PROC_DECLARE(0x5b9360, internal_5b9360, public_5b9360);
/* CHUNK of public_439c10 */
extern "C" NAKED register_t __cdecl internal_5b9360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_43c0f0
        public_5b9368 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_43c330
        public_5b9373 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c2b0
        public_5b937b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_43c070
        public_5b9383 : nop
        mov eax, offset public_5f3300
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9360)
        ASM_EXPORT_ENTRY_FIRST(0x5b9368, public_5b9368)
        ASM_EXPORT_ENTRY(0x5b9373, public_5b9373)
        ASM_EXPORT_ENTRY(0x5b937b, public_5b937b)
        ASM_EXPORT_ENTRY_LAST(0x5b9383, public_5b9383)
    }
}

#undef public_5b9368
#undef public_5b9373
#undef public_5b937b
#undef public_5b9383

#pragma init_seg(compiler)
extern "C" void const* const public_5b9368 = __AsmFindLabelExport(&internal_5b9360, 0x5b9368);
extern "C" void const* const public_5b9373 = __AsmFindLabelExport(&internal_5b9360, 0x5b9373);
extern "C" void const* const public_5b937b = __AsmFindLabelExport(&internal_5b9360, 0x5b937b);
extern "C" void const* const public_5b9383 = __AsmFindLabelExport(&internal_5b9360, 0x5b9383);
