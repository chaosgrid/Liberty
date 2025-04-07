#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a87b _public_624a87b
#define public_624a886 _public_624a886
#define public_624a891 _public_624a891

PROC_DECLARE(0x624a870, internal_624a870, public_624a870);
/* CHUNK of public_6242c90 */
extern "C" NAKED register_t __cdecl internal_624a870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a87b : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 8
        jmp public_6209bb0
        public_624a886 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_6209bb0
        public_624a891 : nop
        mov eax, offset public_6253928
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a870)
        ASM_EXPORT_ENTRY_FIRST(0x624a87b, public_624a87b)
        ASM_EXPORT_ENTRY(0x624a886, public_624a886)
        ASM_EXPORT_ENTRY_LAST(0x624a891, public_624a891)
    }
}

#undef public_624a87b
#undef public_624a886
#undef public_624a891

#pragma init_seg(compiler)
extern "C" void const* const public_624a87b = __AsmFindLabelExport(&internal_624a870, 0x624a87b);
extern "C" void const* const public_624a886 = __AsmFindLabelExport(&internal_624a870, 0x624a886);
extern "C" void const* const public_624a891 = __AsmFindLabelExport(&internal_624a870, 0x624a891);
