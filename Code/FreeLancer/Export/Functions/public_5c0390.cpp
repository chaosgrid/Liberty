#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c039b _public_5c039b
#define public_5c03a3 _public_5c03a3

PROC_DECLARE(0x5c0390, internal_5c0390, public_5c0390);
/* CHUNK of public_52a0f0 */
extern "C" NAKED register_t __cdecl internal_5c0390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c039b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_52a250
        public_5c03a3 : nop
        mov eax, offset public_5fa404
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0390)
        ASM_EXPORT_ENTRY_FIRST(0x5c039b, public_5c039b)
        ASM_EXPORT_ENTRY_LAST(0x5c03a3, public_5c03a3)
    }
}

#undef public_5c039b
#undef public_5c03a3

#pragma init_seg(compiler)
extern "C" void const* const public_5c039b = __AsmFindLabelExport(&internal_5c0390, 0x5c039b);
extern "C" void const* const public_5c03a3 = __AsmFindLabelExport(&internal_5c0390, 0x5c03a3);
