#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249361 _public_6249361

PROC_DECLARE(0x6249350, internal_6249350, public_6249350);
/* CHUNK of public_622b0e0 */
extern "C" NAKED register_t __cdecl internal_6249350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6249361 : nop
        mov eax, offset public_62522d0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249350)
        ASM_EXPORT_ENTRY_SINGLE(0x6249361, public_6249361)
    }
}

#undef public_6249361

#pragma init_seg(compiler)
extern "C" void const* const public_6249361 = __AsmFindLabelExport(&internal_6249350, 0x6249361);
