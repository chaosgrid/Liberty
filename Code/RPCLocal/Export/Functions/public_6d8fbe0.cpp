#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d8fbee _public_6d8fbee

PROC_DECLARE(0x6d8fbe0, internal_6d8fbe0, public_6d8fbe0);
/* CHUNK of public_6d8fb00 */
extern "C" NAKED register_t __cdecl internal_6d8fbe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6d8fbee
        push eax
        call public_6db1dc2
        pop ecx
        public_6d8fbee : nop
        ret 
        UNREACHABLE_TRAP(0x6d8fbe0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d8fbee, public_6d8fbee)
    }
}

#undef public_6d8fbee

#pragma init_seg(compiler)
extern "C" void const* const public_6d8fbee = __AsmFindLabelExport(&internal_6d8fbe0, 0x6d8fbee);
