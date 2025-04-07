#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59438 _public_6f59438
#define public_6f59447 _public_6f59447

PROC_DECLARE(0x6f59430, internal_6f59430, public_6f59430);
/* CHUNK of public_6f46550 */
extern "C" NAKED register_t __cdecl internal_6f59430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59438 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA8
        jmp dword ptr ds : [public_6f5a014]
        public_6f59447 : nop
        mov eax, offset public_6f5c628
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59430)
        ASM_EXPORT_ENTRY_FIRST(0x6f59438, public_6f59438)
        ASM_EXPORT_ENTRY_LAST(0x6f59447, public_6f59447)
    }
}

#undef public_6f59438
#undef public_6f59447

#pragma init_seg(compiler)
extern "C" void const* const public_6f59438 = __AsmFindLabelExport(&internal_6f59430, 0x6f59438);
extern "C" void const* const public_6f59447 = __AsmFindLabelExport(&internal_6f59430, 0x6f59447);
