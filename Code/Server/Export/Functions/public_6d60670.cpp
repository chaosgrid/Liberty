#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60679 _public_6d60679

PROC_DECLARE(0x6d60670, internal_6d60670, public_6d60670);
/* CHUNK of public_6ced3f0 */
extern "C" NAKED register_t __cdecl internal_6d60670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60679 : nop
        mov eax, offset public_6d70f2c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60670)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60679, public_6d60679)
    }
}

#undef public_6d60679

#pragma init_seg(compiler)
extern "C" void const* const public_6d60679 = __AsmFindLabelExport(&internal_6d60670, 0x6d60679);
