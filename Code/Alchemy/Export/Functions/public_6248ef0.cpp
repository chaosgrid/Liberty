#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62257d0);
CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248ef8 _public_6248ef8
#define public_6248f00 _public_6248f00
#define public_6248f0b _public_6248f0b

PROC_DECLARE(0x6248ef0, internal_6248ef0, public_6248ef0);
/* CHUNK of public_62257f0 */
extern "C" NAKED register_t __cdecl internal_6248ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6225910
        public_6248ef8 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6225910
        public_6248f00 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62257d0
        public_6248f0b : nop
        mov eax, offset public_6251e50
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ef0)
        ASM_EXPORT_ENTRY_FIRST(0x6248ef8, public_6248ef8)
        ASM_EXPORT_ENTRY(0x6248f00, public_6248f00)
        ASM_EXPORT_ENTRY_LAST(0x6248f0b, public_6248f0b)
    }
}

#undef public_6248ef8
#undef public_6248f00
#undef public_6248f0b

#pragma init_seg(compiler)
extern "C" void const* const public_6248ef8 = __AsmFindLabelExport(&internal_6248ef0, 0x6248ef8);
extern "C" void const* const public_6248f00 = __AsmFindLabelExport(&internal_6248ef0, 0x6248f00);
extern "C" void const* const public_6248f0b = __AsmFindLabelExport(&internal_6248ef0, 0x6248f0b);
