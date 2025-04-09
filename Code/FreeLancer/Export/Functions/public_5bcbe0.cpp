#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcbeb _public_5bcbeb

PROC_DECLARE(0x5bcbe0, internal_5bcbe0, public_5bcbe0);
/* CHUNK of public_4a4fd0 */
extern "C" NAKED register_t __cdecl internal_5bcbe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bcbeb : nop
        mov eax, offset public_5f6e60
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcbe0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcbeb, public_5bcbeb)
    }
}

#undef public_5bcbeb

#pragma init_seg(compiler)
extern "C" void const* const public_5bcbeb = __AsmFindLabelExport(&internal_5bcbe0, 0x5bcbeb);
