#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396afb _public_6396afb
#define public_6396b06 _public_6396b06
#define public_6396b11 _public_6396b11

PROC_DECLARE(0x6396af0, internal_6396af0, public_6396af0);
/* CHUNK of public_631b0e0 */
extern "C" NAKED register_t __cdecl internal_6396af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396afb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_630e210
        public_6396b06 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_630e210
        public_6396b11 : nop
        mov eax, offset public_63b0a6c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396af0)
        ASM_EXPORT_ENTRY_FIRST(0x6396afb, public_6396afb)
        ASM_EXPORT_ENTRY(0x6396b06, public_6396b06)
        ASM_EXPORT_ENTRY_LAST(0x6396b11, public_6396b11)
    }
}

#undef public_6396afb
#undef public_6396b06
#undef public_6396b11

#pragma init_seg(compiler)
extern "C" void const* const public_6396afb = __AsmFindLabelExport(&internal_6396af0, 0x6396afb);
extern "C" void const* const public_6396b06 = __AsmFindLabelExport(&internal_6396af0, 0x6396b06);
extern "C" void const* const public_6396b11 = __AsmFindLabelExport(&internal_6396af0, 0x6396b11);
