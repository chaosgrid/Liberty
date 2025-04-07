#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2221 _public_6fb2221

PROC_DECLARE(0x6fb2210, internal_6fb2210, public_6fb2210);
/* CHUNK of public_6fa8e10 */
extern "C" NAKED register_t __cdecl internal_6fb2210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2221 : nop
        mov eax, offset public_6fc7820
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2210)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb2221, public_6fb2221)
    }
}

#undef public_6fb2221

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2221 = __AsmFindLabelExport(&internal_6fb2210, 0x6fb2221);
