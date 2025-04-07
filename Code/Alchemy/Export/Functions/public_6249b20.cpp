#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249b28 _public_6249b28

PROC_DECLARE(0x6249b20, internal_6249b20, public_6249b20);
/* CHUNK of public_6232950 */
extern "C" NAKED register_t __cdecl internal_6249b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6249b28 : nop
        mov eax, offset public_6252b28
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249b20)
        ASM_EXPORT_ENTRY_SINGLE(0x6249b28, public_6249b28)
    }
}

#undef public_6249b28

#pragma init_seg(compiler)
extern "C" void const* const public_6249b28 = __AsmFindLabelExport(&internal_6249b20, 0x6249b28);
