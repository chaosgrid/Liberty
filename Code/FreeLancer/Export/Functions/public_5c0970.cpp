#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0981 _public_5c0981

PROC_DECLARE(0x5c0970, internal_5c0970, public_5c0970);
/* CHUNK of public_536070 */
extern "C" NAKED register_t __cdecl internal_5c0970()
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
        public_5c0981 : nop
        mov eax, offset public_5fab8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0970)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0981, public_5c0981)
    }
}

#undef public_5c0981

#pragma init_seg(compiler)
extern "C" void const* const public_5c0981 = __AsmFindLabelExport(&internal_5c0970, 0x5c0981);
