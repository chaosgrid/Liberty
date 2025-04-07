#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db276b _public_6db276b
#define public_6db277a _public_6db277a
#define public_6db2789 _public_6db2789
#define public_6db2797 _public_6db2797

PROC_DECLARE(0x6db2760, internal_6db2760, public_6db2760);
/* CHUNK of public_6d94460 */
extern "C" NAKED register_t __cdecl internal_6db2760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db276b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db277a : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db2789 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x264
        jmp public_6d91340
        public_6db2797 : nop
        mov eax, offset public_6db6f48
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2760)
        ASM_EXPORT_ENTRY_FIRST(0x6db276b, public_6db276b)
        ASM_EXPORT_ENTRY(0x6db277a, public_6db277a)
        ASM_EXPORT_ENTRY(0x6db2789, public_6db2789)
        ASM_EXPORT_ENTRY_LAST(0x6db2797, public_6db2797)
    }
}

#undef public_6db276b
#undef public_6db277a
#undef public_6db2789
#undef public_6db2797

#pragma init_seg(compiler)
extern "C" void const* const public_6db276b = __AsmFindLabelExport(&internal_6db2760, 0x6db276b);
extern "C" void const* const public_6db277a = __AsmFindLabelExport(&internal_6db2760, 0x6db277a);
extern "C" void const* const public_6db2789 = __AsmFindLabelExport(&internal_6db2760, 0x6db2789);
extern "C" void const* const public_6db2797 = __AsmFindLabelExport(&internal_6db2760, 0x6db2797);
