#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c02c1 _public_5c02c1
#define public_5c02cc _public_5c02cc

PROC_DECLARE(0x5c02b0, internal_5c02b0, public_5c02b0);
/* CHUNK of public_529ce0 */
extern "C" NAKED register_t __cdecl internal_5c02b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c02c1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_5298c0
        public_5c02cc : nop
        mov eax, offset public_5fa2d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c02b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c02c1, public_5c02c1)
        ASM_EXPORT_ENTRY_LAST(0x5c02cc, public_5c02cc)
    }
}

#undef public_5c02c1
#undef public_5c02cc

#pragma init_seg(compiler)
extern "C" void const* const public_5c02c1 = __AsmFindLabelExport(&internal_5c02b0, 0x5c02c1);
extern "C" void const* const public_5c02cc = __AsmFindLabelExport(&internal_5c02b0, 0x5c02cc);
