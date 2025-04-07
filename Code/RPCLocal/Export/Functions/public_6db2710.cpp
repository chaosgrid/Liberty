#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db271b _public_6db271b
#define public_6db272a _public_6db272a
#define public_6db2739 _public_6db2739
#define public_6db2747 _public_6db2747

PROC_DECLARE(0x6db2710, internal_6db2710, public_6db2710);
/* CHUNK of public_6d934d0 */
extern "C" NAKED register_t __cdecl internal_6db2710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db271b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db272a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db2739 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x264
        jmp public_6d91340
        public_6db2747 : nop
        mov eax, offset public_6db6f0c
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2710)
        ASM_EXPORT_ENTRY_FIRST(0x6db271b, public_6db271b)
        ASM_EXPORT_ENTRY(0x6db272a, public_6db272a)
        ASM_EXPORT_ENTRY(0x6db2739, public_6db2739)
        ASM_EXPORT_ENTRY_LAST(0x6db2747, public_6db2747)
    }
}

#undef public_6db271b
#undef public_6db272a
#undef public_6db2739
#undef public_6db2747

#pragma init_seg(compiler)
extern "C" void const* const public_6db271b = __AsmFindLabelExport(&internal_6db2710, 0x6db271b);
extern "C" void const* const public_6db272a = __AsmFindLabelExport(&internal_6db2710, 0x6db272a);
extern "C" void const* const public_6db2739 = __AsmFindLabelExport(&internal_6db2710, 0x6db2739);
extern "C" void const* const public_6db2747 = __AsmFindLabelExport(&internal_6db2710, 0x6db2747);
