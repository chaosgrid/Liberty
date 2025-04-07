#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393f9b _public_6393f9b

PROC_DECLARE(0x6393f90, internal_6393f90, public_6393f90);
/* CHUNK of public_62a9420 */
extern "C" NAKED register_t __cdecl internal_6393f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6393f9b : nop
        mov eax, offset public_63ad468
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393f90)
        ASM_EXPORT_ENTRY_SINGLE(0x6393f9b, public_6393f9b)
    }
}

#undef public_6393f9b

#pragma init_seg(compiler)
extern "C" void const* const public_6393f9b = __AsmFindLabelExport(&internal_6393f90, 0x6393f9b);
