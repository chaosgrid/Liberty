#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60cbb _public_6d60cbb
#define public_6d60cc6 _public_6d60cc6

PROC_DECLARE(0x6d60cb0, internal_6d60cb0, public_6d60cb0);
/* CHUNK of public_6cfbe20 */
extern "C" NAKED register_t __cdecl internal_6d60cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d60cbb : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 4
        jmp public_6cecb50
        public_6d60cc6 : nop
        mov eax, offset public_6d71630
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60cbb, public_6d60cbb)
        ASM_EXPORT_ENTRY_LAST(0x6d60cc6, public_6d60cc6)
    }
}

#undef public_6d60cbb
#undef public_6d60cc6

#pragma init_seg(compiler)
extern "C" void const* const public_6d60cbb = __AsmFindLabelExport(&internal_6d60cb0, 0x6d60cbb);
extern "C" void const* const public_6d60cc6 = __AsmFindLabelExport(&internal_6d60cb0, 0x6d60cc6);
