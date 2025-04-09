#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c438b _public_5c438b
#define public_5c4396 _public_5c4396

PROC_DECLARE(0x5c4380, internal_5c4380, public_5c4380);
/* CHUNK of public_5850f0 */
extern "C" NAKED register_t __cdecl internal_5c4380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c438b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4396 : nop
        mov eax, offset public_5fdf8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4380)
        ASM_EXPORT_ENTRY_FIRST(0x5c438b, public_5c438b)
        ASM_EXPORT_ENTRY_LAST(0x5c4396, public_5c4396)
    }
}

#undef public_5c438b
#undef public_5c4396

#pragma init_seg(compiler)
extern "C" void const* const public_5c438b = __AsmFindLabelExport(&internal_5c4380, 0x5c438b);
extern "C" void const* const public_5c4396 = __AsmFindLabelExport(&internal_5c4380, 0x5c4396);
