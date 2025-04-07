#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396dcb _public_6396dcb

PROC_DECLARE(0x6396dc0, internal_6396dc0, public_6396dc0);
/* CHUNK of public_631fa40 */
extern "C" NAKED register_t __cdecl internal_6396dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396dcb : nop
        mov eax, offset public_63b0dac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396dc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6396dcb, public_6396dcb)
    }
}

#undef public_6396dcb

#pragma init_seg(compiler)
extern "C" void const* const public_6396dcb = __AsmFindLabelExport(&internal_6396dc0, 0x6396dcb);
