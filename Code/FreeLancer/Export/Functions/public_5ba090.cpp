#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba0a1 _public_5ba0a1

PROC_DECLARE(0x5ba090, internal_5ba090, public_5ba090);
/* CHUNK of public_456bd0 */
extern "C" NAKED register_t __cdecl internal_5ba090()
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
        public_5ba0a1 : nop
        mov eax, offset public_5f4408
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba090)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba0a1, public_5ba0a1)
    }
}

#undef public_5ba0a1

#pragma init_seg(compiler)
extern "C" void const* const public_5ba0a1 = __AsmFindLabelExport(&internal_5ba090, 0x5ba0a1);
