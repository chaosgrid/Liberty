#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faafe9 _public_6faafe9

PROC_DECLARE(0x6faafe0, internal_6faafe0, public_6faafe0);
/* CHUNK of public_6eb9760 */
extern "C" NAKED register_t __cdecl internal_6faafe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6faafe9 : nop
        mov eax, offset public_6fbf4a4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faafe0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faafe9, public_6faafe9)
    }
}

#undef public_6faafe9

#pragma init_seg(compiler)
extern "C" void const* const public_6faafe9 = __AsmFindLabelExport(&internal_6faafe0, 0x6faafe9);
