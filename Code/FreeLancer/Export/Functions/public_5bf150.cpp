#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf161 _public_5bf161
#define public_5bf16a _public_5bf16a

PROC_DECLARE(0x5bf150, internal_5bf150, public_5bf150);
/* CHUNK of public_4f3820 */
extern "C" NAKED register_t __cdecl internal_5bf150()
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
        public_5bf161 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf16a : nop
        mov eax, offset public_5f90b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf150)
        ASM_EXPORT_ENTRY_FIRST(0x5bf161, public_5bf161)
        ASM_EXPORT_ENTRY_LAST(0x5bf16a, public_5bf16a)
    }
}

#undef public_5bf161
#undef public_5bf16a

#pragma init_seg(compiler)
extern "C" void const* const public_5bf161 = __AsmFindLabelExport(&internal_5bf150, 0x5bf161);
extern "C" void const* const public_5bf16a = __AsmFindLabelExport(&internal_5bf150, 0x5bf16a);
