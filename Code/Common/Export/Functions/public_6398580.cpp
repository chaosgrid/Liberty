#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639858b _public_639858b

PROC_DECLARE(0x6398580, internal_6398580, public_6398580);
/* CHUNK of public_6368f60 */
extern "C" NAKED register_t __cdecl internal_6398580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x83C]
        jmp public_6369080
        public_639858b : nop
        mov eax, offset public_63b2bb8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398580)
        ASM_EXPORT_ENTRY_SINGLE(0x639858b, public_639858b)
    }
}

#undef public_639858b

#pragma init_seg(compiler)
extern "C" void const* const public_639858b = __AsmFindLabelExport(&internal_6398580, 0x639858b);
