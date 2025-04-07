#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d612fc _public_6d612fc

PROC_DECLARE(0x6d612f0, internal_6d612f0, public_6d612f0);
/* CHUNK of public_6d07e20 */
extern "C" NAKED register_t __cdecl internal_6d612f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_6d64694]
        public_6d612fc : nop
        mov eax, offset public_6d71edc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d612f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d612fc, public_6d612fc)
    }
}

#undef public_6d612fc

#pragma init_seg(compiler)
extern "C" void const* const public_6d612fc = __AsmFindLabelExport(&internal_6d612f0, 0x6d612fc);
