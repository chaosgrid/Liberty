#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead720);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa011 _public_6faa011
#define public_6faa019 _public_6faa019
#define public_6faa024 _public_6faa024

PROC_DECLARE(0x6faa000, internal_6faa000, public_6faa000);
/* CHUNK of public_6eb1f30 */
extern "C" NAKED register_t __cdecl internal_6faa000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6faa011 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f15350
        public_6faa019 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_6ead720
        public_6faa024 : nop
        mov eax, offset public_6fbe3d4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa000)
        ASM_EXPORT_ENTRY_FIRST(0x6faa011, public_6faa011)
        ASM_EXPORT_ENTRY(0x6faa019, public_6faa019)
        ASM_EXPORT_ENTRY_LAST(0x6faa024, public_6faa024)
    }
}

#undef public_6faa011
#undef public_6faa019
#undef public_6faa024

#pragma init_seg(compiler)
extern "C" void const* const public_6faa011 = __AsmFindLabelExport(&internal_6faa000, 0x6faa011);
extern "C" void const* const public_6faa019 = __AsmFindLabelExport(&internal_6faa000, 0x6faa019);
extern "C" void const* const public_6faa024 = __AsmFindLabelExport(&internal_6faa000, 0x6faa024);
