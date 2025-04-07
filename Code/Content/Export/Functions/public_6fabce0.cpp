#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9630);
CLANG_FORWARD_PROC_SYMBOL(public_6ee99d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabceb _public_6fabceb
#define public_6fabcf3 _public_6fabcf3
#define public_6fabcfe _public_6fabcfe

PROC_DECLARE(0x6fabce0, internal_6fabce0, public_6fabce0);
/* CHUNK of public_6ee93f0 */
extern "C" NAKED register_t __cdecl internal_6fabce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x2C]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabceb : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_6ee9630
        public_6fabcf3 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 4
        jmp public_6ee99d0
        public_6fabcfe : nop
        mov eax, offset public_6fc08b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabce0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabceb, public_6fabceb)
        ASM_EXPORT_ENTRY(0x6fabcf3, public_6fabcf3)
        ASM_EXPORT_ENTRY_LAST(0x6fabcfe, public_6fabcfe)
    }
}

#undef public_6fabceb
#undef public_6fabcf3
#undef public_6fabcfe

#pragma init_seg(compiler)
extern "C" void const* const public_6fabceb = __AsmFindLabelExport(&internal_6fabce0, 0x6fabceb);
extern "C" void const* const public_6fabcf3 = __AsmFindLabelExport(&internal_6fabce0, 0x6fabcf3);
extern "C" void const* const public_6fabcfe = __AsmFindLabelExport(&internal_6fabce0, 0x6fabcfe);
