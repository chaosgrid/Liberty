#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faeaeb _public_6faeaeb
#define public_6faeafc _public_6faeafc
#define public_6faeb0d _public_6faeb0d
#define public_6faeb19 _public_6faeb19
#define public_6faeb24 _public_6faeb24

PROC_DECLARE(0x6faeae0, internal_6faeae0, public_6faeae0);
/* CHUNK of public_6f336a0 */
extern "C" NAKED register_t __cdecl internal_6faeae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x404]
        jmp public_6f33d20
        public_6faeaeb : nop
        mov ecx, dword ptr ss : [ebp-0x404]
        add ecx, 0x178
        jmp public_6f28e10
        public_6faeafc : nop
        mov ecx, dword ptr ss : [ebp-0x404]
        add ecx, 0x17C
        jmp public_6f15350
        public_6faeb0d : nop
        lea ecx, ss:[ebp-0x46C]
        jmp dword ptr ds : [public_6fb31b0]
        public_6faeb19 : nop
        lea ecx, ss:[ebp-0x4C8]
        jmp public_6f33e30
        public_6faeb24 : nop
        mov eax, offset public_6fc3aec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faeae0)
        ASM_EXPORT_ENTRY_FIRST(0x6faeaeb, public_6faeaeb)
        ASM_EXPORT_ENTRY(0x6faeafc, public_6faeafc)
        ASM_EXPORT_ENTRY(0x6faeb0d, public_6faeb0d)
        ASM_EXPORT_ENTRY(0x6faeb19, public_6faeb19)
        ASM_EXPORT_ENTRY_LAST(0x6faeb24, public_6faeb24)
    }
}

#undef public_6faeaeb
#undef public_6faeafc
#undef public_6faeb0d
#undef public_6faeb19
#undef public_6faeb24

#pragma init_seg(compiler)
extern "C" void const* const public_6faeaeb = __AsmFindLabelExport(&internal_6faeae0, 0x6faeaeb);
extern "C" void const* const public_6faeafc = __AsmFindLabelExport(&internal_6faeae0, 0x6faeafc);
extern "C" void const* const public_6faeb0d = __AsmFindLabelExport(&internal_6faeae0, 0x6faeb0d);
extern "C" void const* const public_6faeb19 = __AsmFindLabelExport(&internal_6faeae0, 0x6faeb19);
extern "C" void const* const public_6faeb24 = __AsmFindLabelExport(&internal_6faeae0, 0x6faeb24);
