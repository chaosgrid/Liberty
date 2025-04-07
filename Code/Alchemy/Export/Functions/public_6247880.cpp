#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247888 _public_6247888
#define public_6247893 _public_6247893
#define public_624789e _public_624789e

PROC_DECLARE(0x6247880, internal_6247880, public_6247880);
/* CHUNK of public_620afc0 */
extern "C" NAKED register_t __cdecl internal_6247880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_6247888 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_6247893 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_624789e : nop
        mov eax, offset public_62506ac
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247880)
        ASM_EXPORT_ENTRY_FIRST(0x6247888, public_6247888)
        ASM_EXPORT_ENTRY(0x6247893, public_6247893)
        ASM_EXPORT_ENTRY_LAST(0x624789e, public_624789e)
    }
}

#undef public_6247888
#undef public_6247893
#undef public_624789e

#pragma init_seg(compiler)
extern "C" void const* const public_6247888 = __AsmFindLabelExport(&internal_6247880, 0x6247888);
extern "C" void const* const public_6247893 = __AsmFindLabelExport(&internal_6247880, 0x6247893);
extern "C" void const* const public_624789e = __AsmFindLabelExport(&internal_6247880, 0x624789e);
