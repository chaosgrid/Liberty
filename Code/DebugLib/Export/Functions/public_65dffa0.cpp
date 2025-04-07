#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dffa8 _public_65dffa8
#define public_65dffb9 _public_65dffb9

PROC_DECLARE(0x65dffa0, internal_65dffa0, public_65dffa0);
/* CHUNK of public_65d3070 */
extern "C" NAKED register_t __cdecl internal_65dffa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_65d2630
        public_65dffa8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_65d54f0
        add esp, 8
        ret 
        public_65dffb9 : nop
        mov eax, offset public_65e1fe4
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dffa0)
        ASM_EXPORT_ENTRY_FIRST(0x65dffa8, public_65dffa8)
        ASM_EXPORT_ENTRY_LAST(0x65dffb9, public_65dffb9)
    }
}

#undef public_65dffa8
#undef public_65dffb9

#pragma init_seg(compiler)
extern "C" void const* const public_65dffa8 = __AsmFindLabelExport(&internal_65dffa0, 0x65dffa8);
extern "C" void const* const public_65dffb9 = __AsmFindLabelExport(&internal_65dffa0, 0x65dffb9);
