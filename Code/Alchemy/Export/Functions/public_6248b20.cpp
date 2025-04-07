#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff50);
CLANG_FORWARD_PROC_SYMBOL(public_621ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6220c40);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248b28 _public_6248b28
#define public_6248b30 _public_6248b30
#define public_6248b38 _public_6248b38

PROC_DECLARE(0x6248b20, internal_6248b20, public_6248b20);
/* CHUNK of public_621fd50 */
extern "C" NAKED register_t __cdecl internal_6248b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6220c40
        public_6248b28 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_621ff50
        public_6248b30 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_621ff70
        public_6248b38 : nop
        mov eax, offset public_62519ec
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248b20)
        ASM_EXPORT_ENTRY_FIRST(0x6248b28, public_6248b28)
        ASM_EXPORT_ENTRY(0x6248b30, public_6248b30)
        ASM_EXPORT_ENTRY_LAST(0x6248b38, public_6248b38)
    }
}

#undef public_6248b28
#undef public_6248b30
#undef public_6248b38

#pragma init_seg(compiler)
extern "C" void const* const public_6248b28 = __AsmFindLabelExport(&internal_6248b20, 0x6248b28);
extern "C" void const* const public_6248b30 = __AsmFindLabelExport(&internal_6248b20, 0x6248b30);
extern "C" void const* const public_6248b38 = __AsmFindLabelExport(&internal_6248b20, 0x6248b38);
