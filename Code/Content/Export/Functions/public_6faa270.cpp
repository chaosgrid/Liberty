#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa278 _public_6faa278

PROC_DECLARE(0x6faa270, internal_6faa270, public_6faa270);
/* CHUNK of public_6eb5660 */
extern "C" NAKED register_t __cdecl internal_6faa270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6faa278 : nop
        mov eax, offset public_6fbe690
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa270)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa278, public_6faa278)
    }
}

#undef public_6faa278

#pragma init_seg(compiler)
extern "C" void const* const public_6faa278 = __AsmFindLabelExport(&internal_6faa270, 0x6faa278);
