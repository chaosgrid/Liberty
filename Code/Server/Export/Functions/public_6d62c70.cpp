#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62c78 _public_6d62c78
#define public_6d62c80 _public_6d62c80

PROC_DECLARE(0x6d62c70, internal_6d62c70, public_6d62c70);
/* CHUNK of public_6d23a60 */
extern "C" NAKED register_t __cdecl internal_6d62c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d209f0
        public_6d62c78 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d20a40
        public_6d62c80 : nop
        mov eax, offset public_6d74024
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62c70)
        ASM_EXPORT_ENTRY_FIRST(0x6d62c78, public_6d62c78)
        ASM_EXPORT_ENTRY_LAST(0x6d62c80, public_6d62c80)
    }
}

#undef public_6d62c78
#undef public_6d62c80

#pragma init_seg(compiler)
extern "C" void const* const public_6d62c78 = __AsmFindLabelExport(&internal_6d62c70, 0x6d62c78);
extern "C" void const* const public_6d62c80 = __AsmFindLabelExport(&internal_6d62c70, 0x6d62c80);
