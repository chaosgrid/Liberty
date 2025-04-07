#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d38f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e0021 _public_65e0021
#define public_65e0029 _public_65e0029

PROC_DECLARE(0x65e0010, internal_65e0010, public_65e0010);
/* CHUNK of public_65d4b80 */
extern "C" NAKED register_t __cdecl internal_65e0010()
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
        public_65e0021 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_65d38f0
        public_65e0029 : nop
        mov eax, offset public_65e209c
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0010)
        ASM_EXPORT_ENTRY_FIRST(0x65e0021, public_65e0021)
        ASM_EXPORT_ENTRY_LAST(0x65e0029, public_65e0029)
    }
}

#undef public_65e0021
#undef public_65e0029

#pragma init_seg(compiler)
extern "C" void const* const public_65e0021 = __AsmFindLabelExport(&internal_65e0010, 0x65e0021);
extern "C" void const* const public_65e0029 = __AsmFindLabelExport(&internal_65e0010, 0x65e0029);
