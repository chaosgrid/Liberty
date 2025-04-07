#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639714b _public_639714b

PROC_DECLARE(0x6397140, internal_6397140, public_6397140);
/* CHUNK of public_63250f0 */
extern "C" NAKED register_t __cdecl internal_6397140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_62a68e0
        public_639714b : nop
        mov eax, offset public_63b1218
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397140)
        ASM_EXPORT_ENTRY_SINGLE(0x639714b, public_639714b)
    }
}

#undef public_639714b

#pragma init_seg(compiler)
extern "C" void const* const public_639714b = __AsmFindLabelExport(&internal_6397140, 0x639714b);
