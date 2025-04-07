#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62473bb _public_62473bb

PROC_DECLARE(0x62473b0, internal_62473b0, public_62473b0);
/* CHUNK of public_6205000 */
extern "C" NAKED register_t __cdecl internal_62473b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62473bb : nop
        mov eax, offset public_6250138
        jmp public_6246126
        UNREACHABLE_TRAP(0x62473b0)
        ASM_EXPORT_ENTRY_SINGLE(0x62473bb, public_62473bb)
    }
}

#undef public_62473bb

#pragma init_seg(compiler)
extern "C" void const* const public_62473bb = __AsmFindLabelExport(&internal_62473b0, 0x62473bb);
