#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249b4b _public_6249b4b
#define public_6249b53 _public_6249b53

PROC_DECLARE(0x6249b40, internal_6249b40, public_6249b40);
/* CHUNK of public_6232a00 */
extern "C" NAKED register_t __cdecl internal_6249b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249b4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6249b53 : nop
        mov eax, offset public_6252b54
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249b40)
        ASM_EXPORT_ENTRY_FIRST(0x6249b4b, public_6249b4b)
        ASM_EXPORT_ENTRY_LAST(0x6249b53, public_6249b53)
    }
}

#undef public_6249b4b
#undef public_6249b53

#pragma init_seg(compiler)
extern "C" void const* const public_6249b4b = __AsmFindLabelExport(&internal_6249b40, 0x6249b4b);
extern "C" void const* const public_6249b53 = __AsmFindLabelExport(&internal_6249b40, 0x6249b53);
