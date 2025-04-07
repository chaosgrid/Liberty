#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639635b _public_639635b
#define public_6396366 _public_6396366

PROC_DECLARE(0x6396350, internal_6396350, public_6396350);
/* CHUNK of public_630dc50 */
extern "C" NAKED register_t __cdecl internal_6396350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_639635b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6396366 : nop
        mov eax, offset public_63b01dc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396350)
        ASM_EXPORT_ENTRY_FIRST(0x639635b, public_639635b)
        ASM_EXPORT_ENTRY_LAST(0x6396366, public_6396366)
    }
}

#undef public_639635b
#undef public_6396366

#pragma init_seg(compiler)
extern "C" void const* const public_639635b = __AsmFindLabelExport(&internal_6396350, 0x639635b);
extern "C" void const* const public_6396366 = __AsmFindLabelExport(&internal_6396350, 0x6396366);
