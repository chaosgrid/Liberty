#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6291d50);
CLANG_FORWARD_PROC_SYMBOL(public_6343120);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392f7b _public_6392f7b
#define public_6392f83 _public_6392f83
#define public_6392f91 _public_6392f91

PROC_DECLARE(0x6392f70, internal_6392f70, public_6392f70);
/* CHUNK of public_6285900 */
extern "C" NAKED register_t __cdecl internal_6392f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x58]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6392f7b : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        jmp public_6343120
        public_6392f83 : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        add ecx, 0xD0
        jmp public_6291d50
        public_6392f91 : nop
        mov eax, offset public_63abf5c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392f70)
        ASM_EXPORT_ENTRY_FIRST(0x6392f7b, public_6392f7b)
        ASM_EXPORT_ENTRY(0x6392f83, public_6392f83)
        ASM_EXPORT_ENTRY_LAST(0x6392f91, public_6392f91)
    }
}

#undef public_6392f7b
#undef public_6392f83
#undef public_6392f91

#pragma init_seg(compiler)
extern "C" void const* const public_6392f7b = __AsmFindLabelExport(&internal_6392f70, 0x6392f7b);
extern "C" void const* const public_6392f83 = __AsmFindLabelExport(&internal_6392f70, 0x6392f83);
extern "C" void const* const public_6392f91 = __AsmFindLabelExport(&internal_6392f70, 0x6392f91);
