#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadc08 _public_6fadc08

PROC_DECLARE(0x6fadc00, internal_6fadc00, public_6fadc00);
/* CHUNK of public_6f1a560 */
extern "C" NAKED register_t __cdecl internal_6fadc00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f1a5c0
        public_6fadc08 : nop
        mov eax, offset public_6fc2b64
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadc00)
        ASM_EXPORT_ENTRY_SINGLE(0x6fadc08, public_6fadc08)
    }
}

#undef public_6fadc08

#pragma init_seg(compiler)
extern "C" void const* const public_6fadc08 = __AsmFindLabelExport(&internal_6fadc00, 0x6fadc08);
