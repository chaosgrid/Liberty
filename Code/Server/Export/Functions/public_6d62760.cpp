#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62769 _public_6d62769

PROC_DECLARE(0x6d62760, internal_6d62760, public_6d62760);
/* CHUNK of public_6d1f360 */
extern "C" NAKED register_t __cdecl internal_6d62760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6d64c60]
        public_6d62769 : nop
        mov eax, offset public_6d733bc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62760)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62769, public_6d62769)
    }
}

#undef public_6d62769

#pragma init_seg(compiler)
extern "C" void const* const public_6d62769 = __AsmFindLabelExport(&internal_6d62760, 0x6d62769);
