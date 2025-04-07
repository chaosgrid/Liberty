#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1380);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393c2b _public_6393c2b

PROC_DECLARE(0x6393c20, internal_6393c20, public_6393c20);
/* CHUNK of public_62a1230 */
extern "C" NAKED register_t __cdecl internal_6393c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_62a1380
        public_6393c2b : nop
        mov eax, offset public_63ad030
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393c20)
        ASM_EXPORT_ENTRY_SINGLE(0x6393c2b, public_6393c2b)
    }
}

#undef public_6393c2b

#pragma init_seg(compiler)
extern "C" void const* const public_6393c2b = __AsmFindLabelExport(&internal_6393c20, 0x6393c2b);
