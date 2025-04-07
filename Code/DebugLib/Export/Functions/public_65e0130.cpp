#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e0141 _public_65e0141
#define public_65e0149 _public_65e0149
#define public_65e0154 _public_65e0154

PROC_DECLARE(0x65e0130, internal_65e0130, public_65e0130);
/* CHUNK of public_65d6990 */
extern "C" NAKED register_t __cdecl internal_65e0130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_65d54f0
        add esp, 8
        ret 
        public_65e0141 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_65d2630
        public_65e0149 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_65d2630
        public_65e0154 : nop
        mov eax, offset public_65e21f4
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0130)
        ASM_EXPORT_ENTRY_FIRST(0x65e0141, public_65e0141)
        ASM_EXPORT_ENTRY(0x65e0149, public_65e0149)
        ASM_EXPORT_ENTRY_LAST(0x65e0154, public_65e0154)
    }
}

#undef public_65e0141
#undef public_65e0149
#undef public_65e0154

#pragma init_seg(compiler)
extern "C" void const* const public_65e0141 = __AsmFindLabelExport(&internal_65e0130, 0x65e0141);
extern "C" void const* const public_65e0149 = __AsmFindLabelExport(&internal_65e0130, 0x65e0149);
extern "C" void const* const public_65e0154 = __AsmFindLabelExport(&internal_65e0130, 0x65e0154);
