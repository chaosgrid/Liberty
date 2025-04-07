#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2e70);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6e51 _public_65c6e51
#define public_65c6e5a _public_65c6e5a

PROC_DECLARE(0x65c6e40, internal_65c6e40, public_65c6e40);
/* CHUNK of public_65c3510 */
extern "C" NAKED register_t __cdecl internal_65c6e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_65c2e70
        add esp, 8
        ret 
        public_65c6e51 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_65c706c]
        public_65c6e5a : nop
        mov eax, offset public_65c777c
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6e40)
        ASM_EXPORT_ENTRY_FIRST(0x65c6e51, public_65c6e51)
        ASM_EXPORT_ENTRY_LAST(0x65c6e5a, public_65c6e5a)
    }
}

#undef public_65c6e51
#undef public_65c6e5a

#pragma init_seg(compiler)
extern "C" void const* const public_65c6e51 = __AsmFindLabelExport(&internal_65c6e40, 0x65c6e51);
extern "C" void const* const public_65c6e5a = __AsmFindLabelExport(&internal_65c6e40, 0x65c6e5a);
