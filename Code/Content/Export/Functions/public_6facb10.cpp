#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facb19 _public_6facb19

PROC_DECLARE(0x6facb10, internal_6facb10, public_6facb10);
/* CHUNK of public_6f00870 */
extern "C" NAKED register_t __cdecl internal_6facb10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6facb19 : nop
        mov eax, offset public_6fc17b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facb10)
        ASM_EXPORT_ENTRY_SINGLE(0x6facb19, public_6facb19)
    }
}

#undef public_6facb19

#pragma init_seg(compiler)
extern "C" void const* const public_6facb19 = __AsmFindLabelExport(&internal_6facb10, 0x6facb19);
