#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf128 _public_5bf128
#define public_5bf139 _public_5bf139

PROC_DECLARE(0x5bf120, internal_5bf120, public_5bf120);
/* CHUNK of public_4f2910 */
extern "C" NAKED register_t __cdecl internal_5bf120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_444e20
        public_5bf128 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf139 : nop
        mov eax, offset public_5f908c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf120)
        ASM_EXPORT_ENTRY_FIRST(0x5bf128, public_5bf128)
        ASM_EXPORT_ENTRY_LAST(0x5bf139, public_5bf139)
    }
}

#undef public_5bf128
#undef public_5bf139

#pragma init_seg(compiler)
extern "C" void const* const public_5bf128 = __AsmFindLabelExport(&internal_5bf120, 0x5bf128);
extern "C" void const* const public_5bf139 = __AsmFindLabelExport(&internal_5bf120, 0x5bf139);
