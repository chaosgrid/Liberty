#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c488b _public_5c488b

PROC_DECLARE(0x5c4880, internal_5c4880, public_5c4880);
/* CHUNK of public_58fb30 */
extern "C" NAKED register_t __cdecl internal_5c4880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c488b : nop
        mov eax, offset public_5fe544
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4880)
        ASM_EXPORT_ENTRY_SINGLE(0x5c488b, public_5c488b)
    }
}

#undef public_5c488b

#pragma init_seg(compiler)
extern "C" void const* const public_5c488b = __AsmFindLabelExport(&internal_5c4880, 0x5c488b);
