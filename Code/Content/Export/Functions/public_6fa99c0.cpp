#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa99c9 _public_6fa99c9

PROC_DECLARE(0x6fa99c0, internal_6fa99c0, public_6fa99c0);
/* CHUNK of public_6ea8d50 */
extern "C" NAKED register_t __cdecl internal_6fa99c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fa99c9 : nop
        mov eax, offset public_6fbdd24
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa99c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa99c9, public_6fa99c9)
    }
}

#undef public_6fa99c9

#pragma init_seg(compiler)
extern "C" void const* const public_6fa99c9 = __AsmFindLabelExport(&internal_6fa99c0, 0x6fa99c9);
