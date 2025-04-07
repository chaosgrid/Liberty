#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac499 _public_6fac499

PROC_DECLARE(0x6fac490, internal_6fac490, public_6fac490);
/* CHUNK of public_6ef75a0 */
extern "C" NAKED register_t __cdecl internal_6fac490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp dword ptr ds : [public_6fb3138]
        public_6fac499 : nop
        mov eax, offset public_6fc1110
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac490)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac499, public_6fac499)
    }
}

#undef public_6fac499

#pragma init_seg(compiler)
extern "C" void const* const public_6fac499 = __AsmFindLabelExport(&internal_6fac490, 0x6fac499);
