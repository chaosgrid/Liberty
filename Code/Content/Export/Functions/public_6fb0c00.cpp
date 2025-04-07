#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f92e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0c08 _public_6fb0c08
#define public_6fb0c13 _public_6fb0c13
#define public_6fb0c1c _public_6fb0c1c

PROC_DECLARE(0x6fb0c00, internal_6fb0c00, public_6fb0c00);
/* CHUNK of public_6f86920 */
extern "C" NAKED register_t __cdecl internal_6fb0c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f92e80
        public_6fb0c08 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_6f867a0
        public_6fb0c13 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_6fb3250]
        public_6fb0c1c : nop
        mov eax, offset public_6fc609c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0c00)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0c08, public_6fb0c08)
        ASM_EXPORT_ENTRY(0x6fb0c13, public_6fb0c13)
        ASM_EXPORT_ENTRY_LAST(0x6fb0c1c, public_6fb0c1c)
    }
}

#undef public_6fb0c08
#undef public_6fb0c13
#undef public_6fb0c1c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0c08 = __AsmFindLabelExport(&internal_6fb0c00, 0x6fb0c08);
extern "C" void const* const public_6fb0c13 = __AsmFindLabelExport(&internal_6fb0c00, 0x6fb0c13);
extern "C" void const* const public_6fb0c1c = __AsmFindLabelExport(&internal_6fb0c00, 0x6fb0c1c);
