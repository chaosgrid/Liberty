#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafea9 _public_6fafea9

PROC_DECLARE(0x6fafea0, internal_6fafea0, public_6fafea0);
/* CHUNK of public_6f70ff0 */
extern "C" NAKED register_t __cdecl internal_6fafea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb3250]
        public_6fafea9 : nop
        mov eax, offset public_6fc50c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafea0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafea9, public_6fafea9)
    }
}

#undef public_6fafea9

#pragma init_seg(compiler)
extern "C" void const* const public_6fafea9 = __AsmFindLabelExport(&internal_6fafea0, 0x6fafea9);
