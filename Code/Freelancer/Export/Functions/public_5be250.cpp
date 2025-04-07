#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be258 _public_5be258

PROC_DECLARE(0x5be250, internal_5be250, public_5be250);
/* CHUNK of public_4d72a0 */
extern "C" NAKED register_t __cdecl internal_5be250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x4C]
        jmp public_59ef20
        public_5be258 : nop
        mov eax, offset public_5f85a8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be250)
        ASM_EXPORT_ENTRY_SINGLE(0x5be258, public_5be258)
    }
}

#undef public_5be258

#pragma init_seg(compiler)
extern "C" void const* const public_5be258 = __AsmFindLabelExport(&internal_5be250, 0x5be258);
