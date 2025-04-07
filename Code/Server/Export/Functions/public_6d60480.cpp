#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60488 _public_6d60488
#define public_6d60493 _public_6d60493
#define public_6d6049e _public_6d6049e
#define public_6d604a9 _public_6d604a9

PROC_DECLARE(0x6d60480, internal_6d60480, public_6d60480);
/* CHUNK of public_6ce6710 */
extern "C" NAKED register_t __cdecl internal_6d60480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6cee4a0
        public_6d60488 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x54
        jmp public_6cecb50
        public_6d60493 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        jmp public_6cecb50
        public_6d6049e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6d0f230
        public_6d604a9 : nop
        mov eax, offset public_6d70ce0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60480)
        ASM_EXPORT_ENTRY_FIRST(0x6d60488, public_6d60488)
        ASM_EXPORT_ENTRY(0x6d60493, public_6d60493)
        ASM_EXPORT_ENTRY(0x6d6049e, public_6d6049e)
        ASM_EXPORT_ENTRY_LAST(0x6d604a9, public_6d604a9)
    }
}

#undef public_6d60488
#undef public_6d60493
#undef public_6d6049e
#undef public_6d604a9

#pragma init_seg(compiler)
extern "C" void const* const public_6d60488 = __AsmFindLabelExport(&internal_6d60480, 0x6d60488);
extern "C" void const* const public_6d60493 = __AsmFindLabelExport(&internal_6d60480, 0x6d60493);
extern "C" void const* const public_6d6049e = __AsmFindLabelExport(&internal_6d60480, 0x6d6049e);
extern "C" void const* const public_6d604a9 = __AsmFindLabelExport(&internal_6d60480, 0x6d604a9);
