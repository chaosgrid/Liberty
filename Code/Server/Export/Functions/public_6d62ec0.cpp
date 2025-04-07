#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62ecc _public_6d62ecc

PROC_DECLARE(0x6d62ec0, internal_6d62ec0, public_6d62ec0);
/* CHUNK of public_6d45980 */
extern "C" NAKED register_t __cdecl internal_6d62ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6d6484c]
        public_6d62ecc : nop
        mov eax, offset public_6d75310
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62ec0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62ecc, public_6d62ecc)
    }
}

#undef public_6d62ecc

#pragma init_seg(compiler)
extern "C" void const* const public_6d62ecc = __AsmFindLabelExport(&internal_6d62ec0, 0x6d62ecc);
