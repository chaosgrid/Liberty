#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb981 _public_5bb981

PROC_DECLARE(0x5bb970, internal_5bb970, public_5bb970);
/* CHUNK of public_46ea00 */
extern "C" NAKED register_t __cdecl internal_5bb970()
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
        public_5bb981 : nop
        mov eax, offset public_5f5c50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb970)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb981, public_5bb981)
    }
}

#undef public_5bb981

#pragma init_seg(compiler)
extern "C" void const* const public_5bb981 = __AsmFindLabelExport(&internal_5bb970, 0x5bb981);
