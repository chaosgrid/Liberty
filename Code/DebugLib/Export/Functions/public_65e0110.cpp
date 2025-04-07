#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e0121 _public_65e0121

PROC_DECLARE(0x65e0110, internal_65e0110, public_65e0110);
/* CHUNK of public_65d6940 */
extern "C" NAKED register_t __cdecl internal_65e0110()
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
        public_65e0121 : nop
        mov eax, offset public_65e21c0
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0110)
        ASM_EXPORT_ENTRY_SINGLE(0x65e0121, public_65e0121)
    }
}

#undef public_65e0121

#pragma init_seg(compiler)
extern "C" void const* const public_65e0121 = __AsmFindLabelExport(&internal_65e0110, 0x65e0121);
