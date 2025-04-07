#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60f29 _public_6d60f29

PROC_DECLARE(0x6d60f20, internal_6d60f20, public_6d60f20);
/* CHUNK of public_6d01150 */
extern "C" NAKED register_t __cdecl internal_6d60f20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60f29 : nop
        mov eax, offset public_6d71a74
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60f20)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60f29, public_6d60f29)
    }
}

#undef public_6d60f29

#pragma init_seg(compiler)
extern "C" void const* const public_6d60f29 = __AsmFindLabelExport(&internal_6d60f20, 0x6d60f29);
