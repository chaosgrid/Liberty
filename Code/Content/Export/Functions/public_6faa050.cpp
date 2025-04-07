#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa058 _public_6faa058

PROC_DECLARE(0x6faa050, internal_6faa050, public_6faa050);
/* CHUNK of public_6eb2a30 */
extern "C" NAKED register_t __cdecl internal_6faa050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ea1650
        public_6faa058 : nop
        mov eax, offset public_6fbe424
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa050)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa058, public_6faa058)
    }
}

#undef public_6faa058

#pragma init_seg(compiler)
extern "C" void const* const public_6faa058 = __AsmFindLabelExport(&internal_6faa050, 0x6faa058);
