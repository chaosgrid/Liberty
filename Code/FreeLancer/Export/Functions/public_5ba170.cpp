#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba17b _public_5ba17b
#define public_5ba183 _public_5ba183

PROC_DECLARE(0x5ba170, internal_5ba170, public_5ba170);
/* CHUNK of public_458790 */
extern "C" NAKED register_t __cdecl internal_5ba170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba17b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4582e0
        public_5ba183 : nop
        mov eax, offset public_5f452c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba170)
        ASM_EXPORT_ENTRY_FIRST(0x5ba17b, public_5ba17b)
        ASM_EXPORT_ENTRY_LAST(0x5ba183, public_5ba183)
    }
}

#undef public_5ba17b
#undef public_5ba183

#pragma init_seg(compiler)
extern "C" void const* const public_5ba17b = __AsmFindLabelExport(&internal_5ba170, 0x5ba17b);
extern "C" void const* const public_5ba183 = __AsmFindLabelExport(&internal_5ba170, 0x5ba183);
