#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85230);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db26b8 _public_6db26b8
#define public_6db26c3 _public_6db26c3
#define public_6db26d2 _public_6db26d2
#define public_6db26e1 _public_6db26e1
#define public_6db26ef _public_6db26ef
#define public_6db26fe _public_6db26fe

PROC_DECLARE(0x6db26b0, internal_6db26b0, public_6db26b0);
/* CHUNK of public_6d93350 */
extern "C" NAKED register_t __cdecl internal_6db26b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6da1370
        public_6db26b8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x24
        jmp public_6d85230
        public_6db26c3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db26d2 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db26e1 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x264
        jmp public_6d91340
        public_6db26ef : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x268
        jmp dword ptr ds : [public_6db3018]
        public_6db26fe : nop
        mov eax, offset public_6db6ed0
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db26b0)
        ASM_EXPORT_ENTRY_FIRST(0x6db26b8, public_6db26b8)
        ASM_EXPORT_ENTRY(0x6db26c3, public_6db26c3)
        ASM_EXPORT_ENTRY(0x6db26d2, public_6db26d2)
        ASM_EXPORT_ENTRY(0x6db26e1, public_6db26e1)
        ASM_EXPORT_ENTRY(0x6db26ef, public_6db26ef)
        ASM_EXPORT_ENTRY_LAST(0x6db26fe, public_6db26fe)
    }
}

#undef public_6db26b8
#undef public_6db26c3
#undef public_6db26d2
#undef public_6db26e1
#undef public_6db26ef
#undef public_6db26fe

#pragma init_seg(compiler)
extern "C" void const* const public_6db26b8 = __AsmFindLabelExport(&internal_6db26b0, 0x6db26b8);
extern "C" void const* const public_6db26c3 = __AsmFindLabelExport(&internal_6db26b0, 0x6db26c3);
extern "C" void const* const public_6db26d2 = __AsmFindLabelExport(&internal_6db26b0, 0x6db26d2);
extern "C" void const* const public_6db26e1 = __AsmFindLabelExport(&internal_6db26b0, 0x6db26e1);
extern "C" void const* const public_6db26ef = __AsmFindLabelExport(&internal_6db26b0, 0x6db26ef);
extern "C" void const* const public_6db26fe = __AsmFindLabelExport(&internal_6db26b0, 0x6db26fe);
