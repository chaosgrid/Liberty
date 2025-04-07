#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8381 _public_5b8381

PROC_DECLARE(0x5b8370, internal_5b8370, public_5b8370);
/* CHUNK of public_401e30 */
extern "C" NAKED register_t __cdecl internal_5b8370()
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
        public_5b8381 : nop
        mov eax, offset public_5f1e48
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8370)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8381, public_5b8381)
    }
}

#undef public_5b8381

#pragma init_seg(compiler)
extern "C" void const* const public_5b8381 = __AsmFindLabelExport(&internal_5b8370, 0x5b8381);
