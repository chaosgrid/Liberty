#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639745e _public_639745e

PROC_DECLARE(0x6397450, internal_6397450, public_6397450);
/* CHUNK of public_632d760 */
extern "C" NAKED register_t __cdecl internal_6397450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x22C
        jmp public_630e210
        public_639745e : nop
        mov eax, offset public_63b15a4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397450)
        ASM_EXPORT_ENTRY_SINGLE(0x639745e, public_639745e)
    }
}

#undef public_639745e

#pragma init_seg(compiler)
extern "C" void const* const public_639745e = __AsmFindLabelExport(&internal_6397450, 0x639745e);
