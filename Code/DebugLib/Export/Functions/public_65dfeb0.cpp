#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfebb _public_65dfebb

PROC_DECLARE(0x65dfeb0, internal_65dfeb0, public_65dfeb0);
/* CHUNK of public_65d1940 */
extern "C" NAKED register_t __cdecl internal_65dfeb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65dfebb : nop
        mov eax, offset public_65e1e94
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfeb0)
        ASM_EXPORT_ENTRY_SINGLE(0x65dfebb, public_65dfebb)
    }
}

#undef public_65dfebb

#pragma init_seg(compiler)
extern "C" void const* const public_65dfebb = __AsmFindLabelExport(&internal_65dfeb0, 0x65dfebb);
