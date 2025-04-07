#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dff41 _public_65dff41

PROC_DECLARE(0x65dff30, internal_65dff30, public_65dff30);
/* CHUNK of public_65d2cb0 */
extern "C" NAKED register_t __cdecl internal_65dff30()
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
        public_65dff41 : nop
        mov eax, offset public_65e1f50
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dff30)
        ASM_EXPORT_ENTRY_SINGLE(0x65dff41, public_65dff41)
    }
}

#undef public_65dff41

#pragma init_seg(compiler)
extern "C" void const* const public_65dff41 = __AsmFindLabelExport(&internal_65dff30, 0x65dff41);
