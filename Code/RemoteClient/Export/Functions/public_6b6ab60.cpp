#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6ab69 _public_6b6ab69

PROC_DECLARE(0x6b6ab60, internal_6b6ab60, public_6b6ab60);
/* CHUNK of public_6b4ebf0 */
extern "C" NAKED register_t __cdecl internal_6b6ab60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6b6b18c]
        public_6b6ab69 : nop
        mov eax, offset public_6b6f204
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6ab60)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6ab69, public_6b6ab69)
    }
}

#undef public_6b6ab69

#pragma init_seg(compiler)
extern "C" void const* const public_6b6ab69 = __AsmFindLabelExport(&internal_6b6ab60, 0x6b6ab69);
