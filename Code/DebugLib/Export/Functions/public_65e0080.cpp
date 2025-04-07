#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d24d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e008b _public_65e008b
#define public_65e0096 _public_65e0096

PROC_DECLARE(0x65e0080, internal_65e0080, public_65e0080);
/* CHUNK of public_65d5b50 */
extern "C" NAKED register_t __cdecl internal_65e0080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65e008b : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_65d24d0
        public_65e0096 : nop
        mov eax, offset public_65e2120
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0080)
        ASM_EXPORT_ENTRY_FIRST(0x65e008b, public_65e008b)
        ASM_EXPORT_ENTRY_LAST(0x65e0096, public_65e0096)
    }
}

#undef public_65e008b
#undef public_65e0096

#pragma init_seg(compiler)
extern "C" void const* const public_65e008b = __AsmFindLabelExport(&internal_65e0080, 0x65e008b);
extern "C" void const* const public_65e0096 = __AsmFindLabelExport(&internal_65e0080, 0x65e0096);
