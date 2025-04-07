#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3bc1 _public_5c3bc1

PROC_DECLARE(0x5c3bb0, internal_5c3bb0, public_5c3bb0);
/* CHUNK of public_578980 */
extern "C" NAKED register_t __cdecl internal_5c3bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c3bc1 : nop
        mov eax, offset public_5fd890
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3bb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3bc1, public_5c3bc1)
    }
}

#undef public_5c3bc1

#pragma init_seg(compiler)
extern "C" void const* const public_5c3bc1 = __AsmFindLabelExport(&internal_5c3bb0, 0x5c3bc1);
