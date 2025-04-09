#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4d9b _public_5c4d9b
#define public_5c4da3 _public_5c4da3
#define public_5c4dab _public_5c4dab

PROC_DECLARE(0x5c4d90, internal_5c4d90, public_5c4d90);
/* CHUNK of public_59c940 */
extern "C" NAKED register_t __cdecl internal_5c4d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4d9b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5c4da3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_420d10
        public_5c4dab : nop
        mov eax, offset public_5feae4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4d90)
        ASM_EXPORT_ENTRY_FIRST(0x5c4d9b, public_5c4d9b)
        ASM_EXPORT_ENTRY(0x5c4da3, public_5c4da3)
        ASM_EXPORT_ENTRY_LAST(0x5c4dab, public_5c4dab)
    }
}

#undef public_5c4d9b
#undef public_5c4da3
#undef public_5c4dab

#pragma init_seg(compiler)
extern "C" void const* const public_5c4d9b = __AsmFindLabelExport(&internal_5c4d90, 0x5c4d9b);
extern "C" void const* const public_5c4da3 = __AsmFindLabelExport(&internal_5c4d90, 0x5c4da3);
extern "C" void const* const public_5c4dab = __AsmFindLabelExport(&internal_5c4d90, 0x5c4dab);
