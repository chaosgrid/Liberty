#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf169 _public_6faf169

PROC_DECLARE(0x6faf160, internal_6faf160, public_6faf160);
/* CHUNK of public_6f4d090 */
extern "C" NAKED register_t __cdecl internal_6faf160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6fb32d8]
        public_6faf169 : nop
        mov eax, offset public_6fc4138
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf160)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf169, public_6faf169)
    }
}

#undef public_6faf169

#pragma init_seg(compiler)
extern "C" void const* const public_6faf169 = __AsmFindLabelExport(&internal_6faf160, 0x6faf169);
