#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be87b _public_5be87b

PROC_DECLARE(0x5be870, internal_5be870, public_5be870);
/* CHUNK of public_4e56f0 */
extern "C" NAKED register_t __cdecl internal_5be870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be87b : nop
        mov eax, offset public_5f8a54
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be870)
        ASM_EXPORT_ENTRY_SINGLE(0x5be87b, public_5be87b)
    }
}

#undef public_5be87b

#pragma init_seg(compiler)
extern "C" void const* const public_5be87b = __AsmFindLabelExport(&internal_5be870, 0x5be87b);
