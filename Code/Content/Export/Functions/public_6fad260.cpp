#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad268 _public_6fad268

PROC_DECLARE(0x6fad260, internal_6fad260, public_6fad260);
/* CHUNK of public_6f06e00 */
extern "C" NAKED register_t __cdecl internal_6fad260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fad268 : nop
        mov eax, offset public_6fc20f4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad260)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad268, public_6fad268)
    }
}

#undef public_6fad268

#pragma init_seg(compiler)
extern "C" void const* const public_6fad268 = __AsmFindLabelExport(&internal_6fad260, 0x6fad268);
